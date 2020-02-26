 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */

struct Person
{
    int distanceTraveled;
    void run(int howFast, bool startWithLeftFoot);
    void stepForward(int howFar, int howFast);
    
    struct Feet
    {
        int stepSize();
        void stepForward();
    };
};


void Person::run(int howFast, bool startWithLeftFoot)
{   
    Feet rightFoot;
    Feet leftFoot;

    if(startWithLeftFoot == true)
    {
        leftFoot.stepForward();
        rightFoot.stepForward();
    }
    else
    {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }
    distanceTraveled += leftFoot.stepSize() + rightFoot.stepSize();
}



 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */


/*
 1)
 */
 struct Filter
 {
    double frequency = 4000.0;
    int filterType = 2;
    float dryWet = 1.0f;

    struct FilterKnob
    {
        float knobPosition;
        bool knobOverride = false;
        int color = 1;

        void spawnKnob(int numberOfKnobs, float knobLocation);
    };

    void updateKnobPosition(FilterKnob knobOne, double nextKnobPosition);
};

void Filter::FilterKnob::spawnKnob(int numberOfKnobs, float knobLocation)
{
    FilterKnob newKnob;

    if(numberOfKnobs > 0){
        newKnob.spawnKnob(numberOfKnobs, knobLocation);
    }
}
/*
 2)
 */
 struct WavetableOscillator
 {
    double frequency = 4000.0;
    int waveShape = 2;
    float volumeLevel = 1.0f;

    struct Wavetable
    {   
        int maxNumberOfWaveforms = 100;
        bool interpolationOn = true;
        int currentWavetable = 0;
        void loadWavetable(int wavetableToLoad, float loadTimeOffset);
    };

    int getNextFrequencyInSequence(float nextFrequency);
 };

 void WavetableOscillator::Wavetable::loadWavetable(int wavetableToLoad, float loadTimeOffset)
 {
    Wavetable myWavetable;
    if((currentWavetable != wavetableToLoad) && (loadTimeOffset > 0)){
        currentWavetable = wavetableToLoad;
    }
 }
/*
 3)
 */
struct ADSREnvelope
{
    double attack  = 2.0;
    double decay = 2.0;
    float sustain = 1.f;
    float release =2.4f;
    bool isMidiControlEnabled = true;
    void playNote();
    void playNoteOnTrigger(ADSREnvelope myEnvelope);
};

void ADSREnvelope::playNoteOnTrigger(ADSREnvelope newEnvelope)
{
    if (newEnvelope.isMidiControlEnabled == true){
        newEnvelope.playNote();
    }
    else
    {
        newEnvelope.isMidiControlEnabled = true;
        newEnvelope.playNote();
    }
}
/*
 4)
 */
struct Reverb
{
    int decayTime;
    float roomSize;
    double inputVolume;
    double outputVolume;
    int setNextReverbSettings(Reverb newVerbSettings);
};

int Reverb::setNextReverbSettings(Reverb newVerbSettings)
{
    Reverb oldVerbSettings;
    if(newVerbSettings.decayTime == oldVerbSettings.decayTime)
    {
        decayTime = 1;
    }
    else
    {
        newVerbSettings.decayTime = oldVerbSettings.decayTime;
    }
}

/*
 5)
 */
struct Equalizer
{
    double frequency = 2000.19;
    float equalizerQ = 1.f;
    float gain = 0.5f;
    int enableEQ = 1;
    
    void disableEqualizer(Equalizer defaultEQ);
};

void Equalizer::disableEqualizer(Equalizer changeThisEQ)
{
    if(changeThisEQ.enableEQ == 1)
    {
        changeThisEQ.enableEQ = 0;
    }
}
/*
 6)
 */
struct Delay
{
    bool bpmSync = false;
    float feedback = 50.f;
    int delayRate = 1;
    bool pingPong = false;

    void copySettingsToAllOfSameType(Delay defaultDelay, bool shouldOverride);
};

Delay myDelay;

void Delay::copySettingsToAllOfSameType(Delay settingsToCopy, bool shouldOverride)
{
    if(!shouldOverride)
    {
        shouldOverride = true;
        myDelay.bpmSync = settingsToCopy.bpmSync;
        myDelay.feedback = settingsToCopy.feedback;
        myDelay.delayRate = settingsToCopy.delayRate;
        myDelay.pingPong = settingsToCopy.pingPong;
    }
    else
    {
        myDelay.bpmSync = settingsToCopy.bpmSync;
        myDelay.feedback = settingsToCopy.feedback;
        myDelay.delayRate = settingsToCopy.delayRate;
        myDelay.pingPong = settingsToCopy.pingPong;
    }
}
/*
 7)
 */
struct Synthesizer
{
    WavetableOscillator oscillator;
    Filter combFilter;
    ADSREnvelope defaultEnvelope;

    void playSound(Synthesizer mySynth, float durationLength, bool pitchGlideEnabled);
    void startSound();
};

void Synthesizer::playSound(Synthesizer mySynth, float durationLength, bool pitchGlideEnabled)
{
    if(durationLength > 0)
    {
        startSound();
    }
    else
    {
        durationLength = 10;
        startSound();
    }
}
/*
 8)
 */
struct SimpleLooper
{
    float loopStartPoint = 0.f;
    float loopEndPoint = 10.f;
    bool shouldLoop = true;

    //SimpleLooper(int audioClipList); this was the original member function, but I am not sure how to call it below. I know we need to specify the type, but since there is no type, how would this work? I am adding a new function for now. ALSO, this function was causing problems with declaring a type, comment down below
    float createLoopPoint(float startPoint, float endPoint);
    void startLooping();
};

float SimpleLooper::createLoopPoint(float startPoint, float endPoint)
{
    SimpleLooper myLoop; // When I had SimpleLooper(int audioClipList) above, it was causing "no matching constructor for initialization of myLoop"
    if((myLoop.shouldLoop = true) && (startPoint != endPoint))
    {
        myLoop.startLooping();
    }
    else
    {
        endPoint + 10.f;
        myLoop.startLooping();
    }
}
/*
 9)
 */
struct Bank
{
    float totalMoney = 100000000.f; // 100,000,000
    bool canLoanMoney = true;
    float yearlyInterestRate = 4.0f;
    
    struct PersonalAccount
    {
        float valueOfAccount = 50000.f;
        bool owesMoney = true;
        int totalAssetsHeld = 15;

        int getLastDepositAmount(PersonalAccount myAccount, float lastDepositTime);
    };

    void payOffLoans(Bank chase, PersonalAccount newAccount);
};

void Bank::payOffLoans(Bank chase, PersonalAccount tristanAccount)
{
    if(tristanAccount.valueOfAccount > 1000.f)
    {
        chase.totalMoney += tristanAccount.valueOfAccount;
        tristanAccount.valueOfAccount = 0;
    }
    else
    {
        chase.yearlyInterestRate += 0.1f;
    }
}
/*
 10)
 */
struct SearchEngine
{
    int totalSearches = 50;
    int totalAdsBlocked = 100;
    bool accountLoggedIn = false;

    struct SearchBar
    {
        float widthOfSearchBar = 100.f;
        float heightOfSearchBar = 5.f;
        bool searchEnabled = true;

        char showBookmarks(int totalBookmarks);
        void show();
        void clearSearchEngine();
    };
    SearchEngine(char recentlySearchedAddress);
};

char SearchEngine::SearchBar::showBookmarks(int totalBookmarks)
{
    SearchBar mySearchBar;

    if(totalBookmarks == 0)
    {
        clearSearchEngine();
    }
    else
    {
        mySearchBar.show();
    }
}

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
