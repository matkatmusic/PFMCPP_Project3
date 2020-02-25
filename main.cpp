/*
 Project 3 - Part 1 / 5
Video:  Chapter 2 Part 5
 User-Defined Types

 Create a branch named Part1
 
 1) write 10 user-defined types, each with a random number of member variables
    try to make the member variables have names that are related to the user-defined type.
 
 2) give the member variables relevant data types
 
 3) add a couple member functions.  
    make the function parameter list for those member functions use some of your User-Defined Types
 
 4) make 2 of the 10 user-defined types be nested class
 
 5) One of your UDTs should only use UDTs for its member variable types.   
     No primitives allowed!
 
 6) After you finish defining each type, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

/*
 example:
 */
struct CarWash            //1) a U.D.T. with a random number of member variables
{
    int numSponges = 3;
    double amountOfSoapUsedPerCar = 2.6; //2) relevant data types
    unsigned int numCarsProcessed = 0;
    
    struct Car                             //4) nested class
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        //2) relevant data types
    };
    
    void washAndWaxCar( Car car );         //3) member function with a user-defined type as the parameter.  The user-defined type parameter happens to be the nested class.
    
    Car myCar;  //5) a member variable whose type is a UDT.
};


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

        void spawnKnobs(int numberOfKnobs, float knobLocation);
    };

    void updateKnobPosition(FilterKnob knobOne, double nextKnobPosition);
};
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

        void loadWavetable(int wavetableToLoad, float loadTimeOffset);
    };

    int getNextFrequencyInSequence(float nextFrequency);
 };
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

    void playNoteOnTrigger(ADSREnvelope myEnvelope);
};
/*
 4)
 */
struct Reverb
{
    int decayTime;
    float roomSize;
    double inputVolume;
    double outputVolume;

    int setNextReverbSettings(Reverb defaultVerbSettings);
};
/*
 5)
 */
struct Equalizer
{
    double frequency = 2000.19;
    float equalizerQ = 1.f;
    float gain = 0.5f;
    
    void disableEqualizer(Equalizer defaultEQ);
};
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
/*
 7)
 */
struct Synthesizer
{
    WavetableOscillator oscillator;
    Filter combFilter;
    ADSREnvelope defaultEnvelope;

    void playSound(Synthesizer mySynth, float durationLength, bool pitchGlideEnabled);
};
/*
 8)
 */
struct SimpleLooper
{
    float loopStartPoint = 0.f;
    float loopEndPoint = 10.f;
    bool shouldLoop = true;

    SimpleLooper(int audioClipList);
};
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
    };

    SearchEngine(char recentlySearchedAddress);
};

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
