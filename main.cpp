/*
 Project 3 - Part 4 / 5
 video: Chapter 2 - Part 9
 Member initialization tasks

 Create a branch named Part4
 
 1) do this for each class in this project: 
    initialize some of your member variables either in-class or in the Constructor member initializer list.

 2) make some of your member functions use those initialized member variables via std::cout statements.
 
 3) click the [run] button.  Clear up any errors or warnings as best you can.
 */

#include <iostream>
namespace Example 
{
struct UDT  
{
    int a; //a member variable
    float b { 2.f }; //3) in-class initialization
    UDT() : a(0) { } //3) 'constructor-initializer-list' member variable initialization
    void printThing()  //the member function
    {
        std::cout << "UDT::printThing() a:" << a << " b: " << b << std::endl;  //4) printing out something interesting
    }
};

int main()
{
    UDT foo; //instantiating a Foo in main()
    foo.printThing(); //calling a member function of the instance that was instantiated.
    return 0;
}
}

//call Example::main()

struct Laptop
{   
    //in-class initialization
    float ssdCapacity { 500.f };
    float ssdSpaceUsed { 450.f }; 
    std::string capacityWarning { " Running out of space " };
    float randomAccessMemory  { 16.f };
    float vRam  { 4.f };
    float cpuSpeed { 1.8f };
    int numUsbSockets { 2 };
    
    void checkMemory()
    {
        float ssdSpaceRemaining = ssdCapacity - ssdSpaceUsed;
        std::string result = (ssdSpaceRemaining < 100) ? "Disk Space Low!  " : "Disk Space OK  ";
        std::cout << result << std::endl;
    }

    void displayCalculation(float result = 0.f, bool calcButtonClick = true); 
    void checkConnectionStatus(bool connectedStatus);
    void printMe();
   
};

void Laptop::displayCalculation(float result, bool calcButtonClick)
{
   std::cout << ((calcButtonClick) ? result : 0 );
}

void Laptop::printMe()
{
    std::cout << "Space left = " << ssdCapacity - ssdSpaceUsed << std::endl;
}

struct DigitalPiano
{
    int numberOfKeys;
    int storedEffects;
    int pedals;
    int outputSockets;
    int eqSliders;
    int sampleNo;
    int numberOfSamples;
    bool metronomeOn;
    int beatsPerMinute;
    //initializer list
    DigitalPiano() : numberOfKeys(88), storedEffects(10), pedals(3), outputSockets(5), eqSliders(3), sampleNo(0), numberOfSamples(25), metronomeOn(true), beatsPerMinute(120) { }
    
    void identifySampleTune (int sampleNumber = 2);
    void checkMidiConnectionStatus (bool connected = true);

    void printMetronomeStatus ()
    {
        if(metronomeOn == true)
        {
            std::cout << "BPM = " << beatsPerMinute << std::endl; 
        }
        else 
        {
            std::cout << "-";
        }
        
    }
    
};

void DigitalPiano::identifySampleTune (int sampleNumber)
{
    switch (sampleNumber)
    {
        case 1:
            std::cout << "Sample tune is - How Long Blues  " << std::endl;
            break;
        case 2:
            std::cout << "Sample tune is - Fur Elise  " << std::endl;
            break;
    }
}      

void DigitalPiano::checkMidiConnectionStatus (bool connected)
{
    std::cout << ((connected) ? "Midi connection made" : "Connect midi cable" );
}    

struct FootballTeam
{
    int numPlayers { 11 };
    float averagePlayerValue { 0.f };
    float possessionPercentage { 57.5f };
    int leaguePosition { 0 };
    float passSuccessPercentage { 72.2f };
    
    void rateTrainingEfficacy()
    {
        std::cout << "current efficacy rating = " << (passSuccessPercentage + possessionPercentage)/2 << "%" << std::endl;
    }
    int rateAttack(int shotsOnTarget, int shotsTotal);
    int scoreMoreThanTheOtherLot(int goalsFor, int goalsAgainst);
        
};


        
int FootballTeam::rateAttack(int shotsOnTarget, int shotsTotal)
{
    int percentAccuracy = int(shotsOnTarget/shotsTotal*100);
    return percentAccuracy;
}
    
int FootballTeam::scoreMoreThanTheOtherLot(int goalsFor, int goalsAgainst)
{
    return  goalsFor - goalsAgainst;
}          

struct SmallBusiness 
{
        
    int countEmployees;
    float annualRent;
    float assessmentPrice;
    float ancillaryCosts;
    float adminCostTotal;
    int numAssessments;
    //initializer list
    SmallBusiness() : countEmployees(10), annualRent(1000.f), assessmentPrice(3240.f), ancillaryCosts(320.f), adminCostTotal(15000.f), numAssessments(45) { }

    void calculateTurnover()
    {
        std::cout<< "Business turnover = £" << assessmentPrice * numAssessments << std::endl;
    }

    struct Assessor
    {
        std::string assessorName; 
        std::string assessorAccountNumber; 
        float assessorPayRate;
        std::string assessorAddress;
        bool dbsCheck;

        Assessor() : assessorName("Joe Brown"), assessorAccountNumber("016884546"), assessorPayRate(45), assessorAddress("7 Pimlico Road WC1 3DT"), dbsCheck (true) { }
        
       
        void dbsChecked()
        {
            std::cout << (dbsCheck ? "Check OK" : "Check not yet done") << std::endl;
        }

        float getAddendumReportInfo(float readingTime, int numClients, int interviewTime, float writingTime); 
        void printMe();
        void printAssessorDetails(std::string name, std::string address, std::string accountNumber);  

    };

    float calculateTurnover(float assessmentUnitPrice, int numAssessments);
    float calculatePayroll(int countEmployees, float monthlyPay);
    float calculateReportInvoiceCost(float chargeOutRate, float assessorHoursSpent); 
    void printMe();
           
};
//implement SmallBusiness functions outside struct

float SmallBusiness::calculatePayroll(int numEmployees, float monthlyPay)
{
    return (monthlyPay * 12) * numEmployees;
}

float SmallBusiness::calculateReportInvoiceCost(float chargeOutRate, float assessorHoursSpent)
{
    float invoiceTotal = (chargeOutRate * assessorHoursSpent);
    return invoiceTotal;
}

//implement Assessor functions printAssessorDetails, dbsChecked, prepareReport
void SmallBusiness::Assessor::printAssessorDetails(std::string name, std::string address, std::string accountNumber)
{  
    std::cout << name << std::endl;
    std::cout << address << std::endl;
    std::cout << "Account number is " << accountNumber << std::endl;
}

float SmallBusiness::Assessor::getAddendumReportInfo(float readingTime, int numClients, int interviewTime, float writingTime)
{
    return (readingTime + interviewTime + writingTime) * numClients;
}

void SmallBusiness::printMe()
{
    assessmentPrice = 324000;
    std::cout << "Cost per assessment is now " << assessmentPrice << std::endl;
    numAssessments = 100;
}

void SmallBusiness::Assessor::Assessor::printMe()
{
    std::cout << assessorName << std::endl;
    std::cout << "Account number " << assessorAccountNumber << std::endl;
    std::cout << "Address " << assessorAddress << std::endl;
}

struct Oscillator
{
    float vOctInput;
    float defaultVoltage;
    int waveformControlPosition;
    float pulseWidthPercent;
    int octave;
    float modSocketVolts;

    Oscillator() :  vOctInput(0.58f), defaultVoltage (0.f), waveformControlPosition(4), pulseWidthPercent(50.f), octave(0), modSocketVolts(0.f) { }
    
    float modulateNote(float inputSocketVolts, float modSocketVolts);
    void selectOscWaveform (int waveformControlPosition, int waveformModInputValue);
    void printMe();

    void displayOctave()
    {
        std::cout  << "Current Octave = " << vOctInput + modSocketVolts << std::endl;
    }
   
};

float Oscillator::modulateNote(float inputVolts, float modVolts)
{
    return inputVolts + modVolts;
}
    
void Oscillator::selectOscWaveform(int waveformCtrlPosition, int waveformModInputVal)
{
    int waveform = waveformCtrlPosition + waveformModInputVal;
    
    switch (waveform)
    {
        case 1:
            std::cout << "Sine";
            break;
        case 2:
            std::cout << "Triangle";
            break;
        case 3:
            std::cout << "Saw";
            break;
        case 4:
            std::cout << "Square";
            break;
    }

}

void Oscillator::printMe()
{
    vOctInput = 2.58f;
    modSocketVolts = 2.167f;
    float combinedVolts =  vOctInput + modSocketVolts;
    std::cout << "combinedVolts = " << combinedVolts << std::endl;
    std::cout << ((combinedVolts > 4) ?  "Voltage is above max value of 4v" : " - ");
    std::cout << std::endl;
}

struct EnvelopeGenerator
{
    // in-class initialization
    float attackMaxValue { 1.f };
    float attackControlValue { 0.82f };
    float timeMultiplier { 100 };
    float decayMinValue { 0.f };
    float sustainDefaultValue { 0.5 };
    std::string label { "Release" };
    float envGateVoltage { 6.f };
    float threshold { 5.f };

    void getAttackTime()
    {
        std::cout << "Attack time = " << (attackControlValue * timeMultiplier) << "ms" << std::endl;
    }

    float getSustainLevel(float attackControlValue, float susLevelMultiplier);
    bool getGateState(float envGateVoltage, float threshold); 

    void printMe()
    {
        std::cout << ((envGateVoltage > threshold) ? "Gate is on" : "Gate is off");
        std::cout << std::endl;
    }
    
};

float EnvelopeGenerator::getSustainLevel(float attControlValue, float susMult)
{
    return attControlValue * susMult;
}

bool EnvelopeGenerator::getGateState(float envGateVolts, float thresh)
{
    return(envGateVolts < thresh) ? true : false;
}

struct Filter
{
    float resonanceControlMaxValue;
    float driveControlMinValue;
    float cutoffControlDefaultValue;
    bool isHighPass;
    float cutoffInputVolts;

    Filter() : resonanceControlMaxValue(1.f), driveControlMinValue(0.f), cutoffControlDefaultValue(0.5f), isHighPass(false), cutoffInputVolts(0.58f) { }

    float getDriveLevel(float driveCtrlValue, float driveInVolts, float gain); 
    float modulateFilterCutoff(float frequencyControlValue, float freqControlMultiplier,float modulationInputVolts);

    void displayFilterMode()
    {
        std::cout << ((isHighPass) ? "Filter is High Pass" : "Filter is Low Pass" ) <<  std::endl;
    }
    
};

float getDriveLevel(float driveCtrlValue, float driveInVolts, float gain)
{
    return  driveCtrlValue + driveInVolts * gain;
} 

float modulFilterCutoff(float freqControlValue, float freqCtrlMultiplier, float modInputVolts)
{
    float cutoff = modInputVolts + freqControlValue * freqCtrlMultiplier;
    return cutoff;
}

struct Sequencer
{
    int clockInputVolts;
    int seqLength;
    bool inputGateIsHigh;
    int rangeSemitones;
    float rangeLengthInputVolts;
    bool randomInputIsHigh;

    Sequencer() : clockInputVolts(4), seqLength(16), inputGateIsHigh(true), rangeSemitones(12), rangeLengthInputVolts(12.f), randomInputIsHigh(true) { }
    
    int modulateSeqLength(int seqControlValue, int modLenInputVal); 
    int quantizeSequence(int scale, bool quantizeSwitchValue);
    void printMe();
    
    void displayNoteRange()
    {
        float range = rangeSemitones + rangeLengthInputVolts;
        std::cout << "Note range is " << range << " semitones" << std::endl;
    }
        
};

int Sequencer::modulateSeqLength(int seqCtrlValue, int modLenInputVal)
{
    return seqCtrlValue + modLenInputVal;
} 

int Sequencer::quantizeSequence(int scale, bool quantizeSwitchValue)
{
    return (quantizeSwitchValue ? scale : false);
}

void Sequencer::printMe()
{
    seqLength = 4;
    std::cout << "Sequence length = " << seqLength << std::endl;
}

struct Arpeggiator
{
    float arpInputVolts;
    std::string chordType;
    int arpModeControlValue;
    std::string arpMode;
    bool isHigh;
    float clockInputVolts;

    Arpeggiator() : arpInputVolts(0.f), chordType(" Major9 "), arpModeControlValue(2), arpMode (" "),isHigh(true), clockInputVolts(0.f) { }

    int modulateChordType(int chordControlValue, int chordModulationInputVal);
    int modulateOctave(int octControlValue, int octModulationInputVal);
    void printMe();

    void modulateArpMode()
    {
        std::cout << "Arpeggiator mode = " << ((arpModeControlValue = 1) ? "Up " : "Down" ) << std::endl;
    }
    
    
};

int Arpeggiator::modulateChordType(int chordCtrlValue, int chordModInputVal)
{
    int chordIdentifier = chordCtrlValue + chordModInputVal;
    return chordIdentifier;
}

int Arpeggiator::modulateOctave(int octCtrlValue, int octModInputVal)
{
    return octCtrlValue + octModInputVal;
}    

void Arpeggiator::printMe()
{
    std::cout << "chord = " << chordType << std::endl;
}

struct Synthesizer
{
    Oscillator vOctInput; 
    EnvelopeGenerator  envGateVoltage; 
    Arpeggiator arpMode;
    Filter cutoffInputVolts;
    Sequencer rangeSemitones;

    int arpInputVolts { 2 };
    std::string chordType { " - " };
    

    void generateArpLabel()
    {
        chordType = (arpInputVolts = 1) ? "Maj" : "Min";
        std::cout << "Chord type = " << chordType  << std::endl;
    }  
    
    struct LFO
    {
        float lfoFrequencyHz;
        int lfoWaveformControlPosition;
        float lfoPulseWidthPercent;
        bool resetInputVolts;
        bool slowMode;
        

        LFO() : lfoFrequencyHz(16.35f), lfoWaveformControlPosition (2), lfoPulseWidthPercent (50), resetInputVolts (false), slowMode (false) { }
    
        void selectLfoWaveform (int waveformControlPosition, int waveformModInputVolts);
        int checkSlowMode(bool slowModeSwitchPosition);
        void printMe();

        void displayPulseWidth()
        {
            std::cout << "Pulse width = " << (lfoPulseWidthPercent) << "%" << std::endl;
        }
       
    };

    int selectOscWaveform (int waveformControlPosition, int waveformModInputVal);
    float modulateFilterCutoff(float frequencyControlValue, float freqControlMultiplier,float modulationInputVolts);
    void generateArp(float arpInputVolts, std::string chordType);
    void printMe();
    
    Synthesizer(); // constructor
};

 // Synthesizer member functions
int Synthesizer::selectOscWaveform (int waveformCtrlPosition, int waveformModInputVal)
{
    return waveformCtrlPosition + waveformModInputVal;
}

float Synthesizer::modulateFilterCutoff(float frequencyCtrlValue, float freqCtrlMultiplier,float modInputVolts)
{
    return (frequencyCtrlValue + modInputVolts) * freqCtrlMultiplier; 
}


   // LFO member functions
    
void Synthesizer::LFO::selectLfoWaveform (int waveformCtrlPosition, int waveformModInputVal)
{
int waveform = waveformCtrlPosition + waveformModInputVal;
    
    switch (waveform)
        { 
        case 1:
            std::cout << "Sine";
            break;
        case 2:
            std::cout << "Triangle";
            break;
        case 3:
            std::cout << "Saw";
            break;
        case 4:
            std::cout << "Square";
            break;
        }
    }
 

Synthesizer::Synthesizer()
{
    std::cout << "Synthesizer constructor doing something" << std::endl;
}

void Synthesizer::printMe()
{
    std::cout << "tricky stuff!"  << std::endl;;
}


 /*MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */


#include <iostream>
int main()
{
    Laptop laptop2; 
    laptop2.printMe();
    laptop2.checkMemory();
    
    DigitalPiano myDigitalPiano;
    myDigitalPiano.identifySampleTune(1);
    DigitalPiano janesPiano;
    janesPiano.printMetronomeStatus();

    
    FootballTeam gdlUnited;
    gdlUnited.averagePlayerValue = 5;
    gdlUnited.rateTrainingEfficacy();

     
    SmallBusiness::Assessor assessor2; //nested class Assessor
    assessor2.printMe();
    SmallBusiness::Assessor assessor3; //nested class Assessor
    assessor3.printAssessorDetails("Davey Jones", "3 Ocean Floor", "189345");

    SmallBusiness largerBusiness;
    largerBusiness.printMe();
    std::cout << "is profit now immense? " << (((largerBusiness.assessmentPrice * largerBusiness.numAssessments) > 1000000) ? "Certainly is! " : "No ") << std::endl; 
    SmallBusiness sisterBusiness;
    sisterBusiness.calculateTurnover();

    Oscillator newOscillator;
    newOscillator.printMe();
    Oscillator basalOscillator;
    basalOscillator.displayOctave();

    EnvelopeGenerator envelopeGenerator2;
    envelopeGenerator2.printMe();
    envelopeGenerator2.getGateState(9,8);
    EnvelopeGenerator envelopeGenerator3;
    envelopeGenerator3.getAttackTime();

    Filter kitchenFilter;
    kitchenFilter.isHighPass = true;
    std::cout << "Different filter =  "<< ((kitchenFilter.isHighPass) ? "Tea leaves " : "Coffee grinds ") << std::endl;
    Filter freakFilter;
    freakFilter.displayFilterMode();
    
    Sequencer mySequencer;
    mySequencer.printMe();
    Sequencer seq3Sequencer;
    seq3Sequencer.displayNoteRange();

    Arpeggiator myArpeggiator;
    myArpeggiator.printMe();
    int chordVal = myArpeggiator.modulateChordType(0, 1);
    Arpeggiator simpleArpeggiator;
    simpleArpeggiator.modulateArpMode();

    switch (chordVal)
    {
        case 1:
            std::cout << "Chord is major7" << std::endl;
            break;
        case 2:
            std::cout << "Chord is minor7" << std::endl;
            break;
        case 3:
            std::cout << "Chord is Major9" << std::endl;
            break;
        case 4:
            std::cout << "etc" << std::endl;
            break;
    }

    Synthesizer newSynth;
    newSynth.printMe();
    newSynth.generateArpLabel();
    Synthesizer::LFO lfo2;
    lfo2.displayPulseWidth();


    std::cout << "good to go!";
}
