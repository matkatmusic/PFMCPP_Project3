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
    float ssdCapacity = 500.f;
    float ssdSpaceUsed = 0.f;
    std::string capacityWarning = " ";
    float randomAccessMemory = 16.f;
    float vRam = 4.f;
    float cpuSpeed = 1.8f;
    int numUsbSockets = 2;

    void checkMemory(float ssdCapacity, float ssdSpaceUsed);
    void displayCalculation(float result = 0.f, bool calcButtonClick = true); 
    void checkConnectionStatus(bool connectedStatus = true);
    void printMe();

    Laptop();
};



void Laptop::checkMemory(float ssdSize, float ssdUsed) 
{
    float ssdSpaceRemaining = ssdSize - ssdUsed;
    std::string result = (ssdSpaceRemaining < 100) ? "Disk Space Low!  " : "Disk Space OK  ";
    std::cout <<  result << std::endl;
}

void Laptop::displayCalculation(float result, bool calcButtonClick)
{
   std::cout << ((calcButtonClick) ? result : 0 );
}

void Laptop::checkConnectionStatus(bool connectedStatus)
{
    std::cout << ((connectedStatus) ? "Connection made" : " " );
}
//%%%%%%%%%%%%%%%

Laptop::Laptop() //question - this is constructor? 
{
    ssdCapacity = 500.f; 
    ssdSpaceUsed = 50.f;
}

void Laptop::printMe()
{
    std::cout << "Space left = " << ssdCapacity - ssdSpaceUsed << std::endl;
}

struct DigitalPiano
{
    int numberOfKeys = 88;
    int storedEffects = 10;
    int pedals = 3;
    int outputSockets = 5;
    int eqSliders = 3;
    int sampleNo;

    void identifySampleTune (int sampleNumber = 2);
    void checkMidiConnectionStatus (bool connected = true); 
    void metronome (bool metronomeOn, int beatsPerMinute = 120);

    DigitalPiano();
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

void DigitalPiano::metronome (bool metronomeOn, int beatsPerMinute)
{
    if(metronomeOn == true)
    {
        std::cout << "BPM = " << beatsPerMinute; 
    }
    else 
    {
        std::cout << "-";
    }
}    
//%%%%%%%%%%%%%%
DigitalPiano::DigitalPiano()
{
    sampleNo = 2; 
}

struct FootballTeam
{
    int players;
    float playerValue;
    float possessionPercentage;
    int leaguePosition;
    float passSuccessPercentage;

    float rateTrainingEfficacy(float prevPassSuccess, float currentPassSuccess);
    int rateAttack(int shotsOnTarget, int shotsTotal);
    int scoreMoreThanTheOtherLot(int goalsFor, int goalsAgainst);

    FootballTeam();
};

float FootballTeam::rateTrainingEfficacy(float currentPassSuccess , float prevPassSuccess)
{
    return currentPassSuccess - prevPassSuccess;
}
        
int FootballTeam::rateAttack(int shotsOnTarget, int shotsTotal)
{
    int percentAccuracy = int(shotsOnTarget/shotsTotal*100);
    return percentAccuracy;
}
    
int FootballTeam::scoreMoreThanTheOtherLot(int goalsFor, int goalsAgainst)
{
    return  goalsFor - goalsAgainst;
}          
//%%%%%%%%%%%%%%%%%%%%%
FootballTeam::FootballTeam() 
{
   
}

struct SmallBusiness 
{
    int countEmployees = 10;
    float annualRent = 10000.f;
    float assessmentPrice = 3240.f;
    float ancillaryCosts = 320.f;
    float adminCostTotal = 15000.f;
    int numAssessments = 0;
    
    struct Assessor
    {
        std::string assessorName = "Joe Brown"; 
        std::string assessorAccountNumber = "016884546"; 
        float assessorPayRate = 45;
        std::string assessorAddress = "7 Pimlico Road WC1 3DT";
        bool dbsCheck = true;

        void printAssessorDetails(std::string assessorName, std::string assessorAddress, std::string assessorAccountNumber);
        void dbsChecked(bool dbsCheck);
        float getAddendumReportInfo(float readingTime, int numClients, int interviewTime, float writingTime); 
        void printMe();

        Assessor();
    };
//SmallBusiness member functions
    float calculateTurnover(float assessmentUnitPrice, int numAssessments);
    float calculatePayroll(int countEmployees, float monthlyPay);
    float calculateReportInvoiceCost(float chargeOutRate, float assessorHoursSpent); 
    void printMe();
    
    SmallBusiness();

    Assessor assessor;
};
//implement SmallBusiness functions outside struct
float SmallBusiness::calculateTurnover(float unitPrice, int numberOfAssessments)
{
    return unitPrice * numberOfAssessments;
}

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
    std::cout << name << std::endl << address << std::endl << accountNumber << std::endl;
}

void SmallBusiness::Assessor::dbsChecked(bool check)
{
    std::cout << ((check) ? "Check OK" : " " );
}

float SmallBusiness::Assessor::getAddendumReportInfo(float readingTime, int numClients, int interviewTime, float writingTime)
{
    return (readingTime + interviewTime + writingTime) * numClients;
}

//%%%%%%%%%%%%%%
SmallBusiness::SmallBusiness()
{

}

void SmallBusiness::printMe()
{
    assessmentPrice = 324000;
    std::cout << "Cost per assessment is now " << assessmentPrice << std::endl;
    numAssessments = 100;
}

SmallBusiness::Assessor::Assessor() 
{
    std::string name = "Davy Jones"; 
    std::string accountNumber = "216839246"; 
    std::string address = "7 Some Road WC1 3DT";
}

void SmallBusiness::Assessor::Assessor::printMe()
{
    std::cout << assessorName << " " << assessorAccountNumber << " " << assessorAddress << std::endl;
}


struct Oscillator
{
    float vOctInput = 3.f;
    float defaultVoltage = 0.f;
    int waveformControlPosition = 4;
    float pulseWidthPercent = 50.f;
    int octave = 4;
    float modSocketVolts = 0.f;
    
    float modulateNote(float inputSocketVolts, float modSocketVolts);
    void selectOscWaveform (int waveformControlPosition, int waveformModInputValue);
    float addOctave(int octaveControlPosition, float voltsIn);
    void printMe();

    Oscillator();
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

float Oscillator::addOctave(int octControlPosition, float vIn)
{
    return vIn + octControlPosition;
}
//%%%%%%%%%%%%%%%%%%%%
Oscillator::Oscillator()
{
    
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
    float attackMaxValue = 1.f;
    float decayMinValue = 0.f;
    float sustainDefaultValue = 0.5;
    std::string label = "Release";
    float envGateVoltage;
    float threshold;
    

    float getAttackTime(float attackControlValue, float timeMultiplier);
    float getSustainLevel(float attackControlValue, float susLevelMultiplier);
    bool getGateState(float envGateVoltage, float threshold); 
    void printMe();

    EnvelopeGenerator();
};

float EnvelopeGenerator::getAttackTime(float attControlValue, float timeMult)
{
    return attControlValue * timeMult;
}

float EnvelopeGenerator::getSustainLevel(float attControlValue, float susMult)
{
    return attControlValue * susMult;
}

bool EnvelopeGenerator::getGateState(float envGateVolts, float thresh)
{
    return(envGateVolts < thresh) ? true : false;
}
//%%%%%%%%%%%%%%%%%%%%%%%%
EnvelopeGenerator::EnvelopeGenerator()
{
    envGateVoltage = 0; 
    threshold = 8;
    std::cout << ((envGateVoltage>threshold) ? "Gate is on" : "Gate is off");
    std::cout << std::endl;
}

void EnvelopeGenerator::printMe()

{
    std::cout << " Gate is on "; 
}

struct Filter
{
    float resonanceControlMaxValue;
    float driveControlMinValue;
    float cutoffControlDefaultValue;
    bool isHighPass = true;
    float cutoffInputVolts;

    float getDriveLevel(float driveCtrlValue, float driveInVolts, float gain); 
    void displayFilterMode(bool isHighPass);
    float modulateFilterCutoff(float frequencyControlValue, float freqControlMultiplier,float modulationInputVolts);

    Filter();
};

float getDriveLevel(float driveCtrlValue, float driveInVolts, float gain)
{
    return  driveCtrlValue + driveInVolts * gain;
} 

void displayFilterMode(bool isHp)
{
    std::cout << ((isHp) ? "High Pass" : "Low Pass" );
}

float modulFilterCutoff(float freqControlValue, float freqCtrlMultiplier, float modInputVolts)
{
    float cutoff = modInputVolts + freqControlValue * freqCtrlMultiplier;
    return cutoff;
}
//%%%%%%%%%%%%%%%%%%%%%
Filter::Filter()
{
    
}

struct Sequencer
{
    int clockInputVolts;
    int seqLength;
    bool inputGateIsHigh;
    int rangeSemitones;
    bool randomInputIsHigh;
    
    int modulateSeqLength(int seqControlValue, int modLenInputVal); 
    int modulateNoteRange(int rangeControlValue, int rangeLengthInputVolts);
    int quantizeSequence(int scale, bool quantizeSwitchValue);
    void printMe();

    Sequencer();
};

int Sequencer::modulateSeqLength(int seqCtrlValue, int modLenInputVal)
{
    return seqCtrlValue + modLenInputVal;
} 

int Sequencer::modulateNoteRange(int rangeControlValue, int rangeLengthInputVolts)
{
    int range = rangeControlValue + rangeLengthInputVolts;
    return range;
}

int Sequencer::quantizeSequence(int scale, bool quantizeSwitchValue)
{
    return (quantizeSwitchValue ? scale : false);
}
//%%%%%%%%%%%%%%%%%%%%%%%
Sequencer::Sequencer()
{
    clockInputVolts = 0;
    seqLength = 8;
    inputGateIsHigh = true;
    rangeSemitones = 19;
    randomInputIsHigh = false; 
}

void Sequencer::printMe()
{
    seqLength = 4;
    std::cout << "seqLength = " << seqLength << std::endl;
}

struct Arpeggiator
{
    float arpInputVolts;//
    std::string chordType;
    std::string arpMode ;
    bool isHigh;
    float clockInputVolts;

    int modulateChordType(int chordControlValue, int chordModulationInputVal);
    int modulateArpMode(int modeControlValue, int modeModulationInputVal);
    int modulateOctave(int octControlValue, int octModulationInputVal);
    void printMe();

    Arpeggiator();
};

int Arpeggiator::modulateChordType(int chordCtrlValue, int chordModInputVal)
{
    int chordIdentifier = chordCtrlValue + chordModInputVal;
    return chordIdentifier;
}

int Arpeggiator::modulateArpMode(int modeCtrlValue, int modeModInputVal)
{
    return modeCtrlValue + modeModInputVal;
}

int Arpeggiator::modulateOctave(int octCtrlValue, int octModInputVal)
{
    return octCtrlValue + octModInputVal;
}    
//%%%%%%%%%%%%%%%%%%%%
Arpeggiator::Arpeggiator()
{
    arpInputVolts = 1.583f;
    chordType = "m9";
    arpMode = "Up/Down";
    isHigh = true;
    clockInputVolts = 10.f;
}

void Arpeggiator::printMe()
{
    std::cout << "chord = " << chordType << std::endl;
}
//SYNTHESIZER STRUCT
struct Synthesizer
{
    Oscillator vOctInput; 
    EnvelopeGenerator  envGateVoltage; 
    Arpeggiator arpMode;
    Filter cutoffInputVolts;
    Sequencer rangeSemitones;
        
    struct LFO
    {
        float lfoFrequencyHz = 16.35f;
        int lfoWaveformControlPosition = 2;
        float lfoPulseWidthPercent = 50;
        bool resetInputVolts = false;
        bool slowMode = false;
    
        float modulatePulseWidth(int lfoPulseWidthControlPosition, float waveformModInputVolts);
        void selectLfoWaveform (int waveformControlPosition, int waveformModInputVolts);
        int checkSlowMode(bool slowModeSwitchPosition);
        void printMe();

        LFO();

    };

    int selectOscWaveform (int waveformControlPosition, int waveformModInputVal);
    float modulateFilterCutoff(float frequencyControlValue, float freqControlMultiplier,float modulationInputVolts);
    void generateArp(float arpInputVolts, std::string chordType);
    void printMe();

   Synthesizer(); // constructor
};

 // instantiate Synthesizer member functions
int Synthesizer::selectOscWaveform (int waveformCtrlPosition, int waveformModInputVal)
{
    return waveformCtrlPosition + waveformModInputVal;
}

float Synthesizer::modulateFilterCutoff(float frequencyCtrlValue, float freqCtrlMultiplier,float modInputVolts)
{
    return (frequencyCtrlValue + modInputVolts) * freqCtrlMultiplier; 
}

void Synthesizer::generateArp(float arpInputVolts, std::string chordType)
{
    std::cout << "Chord = " << arpInputVolts << chordType;
}  
   // instantiate LFO member functions
float Synthesizer::LFO::modulatePulseWidth(int lfoPulseWidthCtrlPosition, float waveformModInputVolts)
{
    return lfoPulseWidthCtrlPosition + waveformModInputVolts; 
}
    
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
//%%%%%%%%%%%%%%%%%%
Synthesizer::Synthesizer()
{

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
    laptop2.checkMemory(500,200);

    DigitalPiano myDigitalPiano;
    myDigitalPiano.identifySampleTune(1);

    FootballTeam myFootballTeam;
    std::cout << "Percentage increase =  " << myFootballTeam.rateTrainingEfficacy(85,75) << std::endl;
     
    SmallBusiness::Assessor newAssessor; //nested class Assessor
    newAssessor.printMe();

    SmallBusiness largerBusiness;
    largerBusiness.printMe();
    std::cout << "is profit now immense? " << (((largerBusiness.assessmentPrice * largerBusiness.numAssessments) > 1000000) ? "Certainly is! " : "No ") << std::endl; 

    Oscillator newOscillator;
    newOscillator.printMe();

    EnvelopeGenerator envelopeGenerator2;
    envelopeGenerator2.getGateState(9,8);

    Filter kitchenFilter;
    kitchenFilter.isHighPass = true;
    std::cout << "Different filter =  "<< ((kitchenFilter.isHighPass) ? "Tea leaves " : "Coffee grinds ") << std::endl;
    
    Sequencer mySequencer;
    mySequencer.printMe();

    Arpeggiator myArpeggiator;
    myArpeggiator.printMe();
    int chordVal = myArpeggiator.modulateChordType(0, 1);

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


    std::cout << "good to go!";
}
