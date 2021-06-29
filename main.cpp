/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 0) if you opted to not fill in any of your member functions in part2, 
    fill in ALL of your member functions
    
 1) Add a constructor for each User-Defined-Type.
 
 2) For each User-Defined-Type:
        amend some of the member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of each of your user-defined types in the main() function.

 4) For each instantiated UDT: 
        call some of those amended member functions in main().
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int a; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    a = 0;
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << a << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'a' equal to 0? " << (foo.a == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.




struct Laptop
{
    float ssdCapacity = 500.f;
    std::string capacityWarning = " ";
    float randomAccessMemory = 16.f;
    float vRam = 4.f;
    float cpuSpeed = 1.8f;
    int numUsbSockets = 2;

        std::string checkMemory(float ssdSpaceRemaining = 400.f);
        void displayCalculation(float result = 0.f, bool calcButtonClick = true); 
        void checkConnectionStatus(bool connectedStatus = true);
};

std::string Laptop::checkMemory(float ssdSpaceRemaining) 
{
    std::string result = (ssdSpaceRemaining < 100) ? "Disk Space Low!" : "Disk Space OK";
    return capacityWarning;
}

void Laptop::displayCalculation(float result, bool calcButtonClick)
{
   std::cout << ((calcButtonClick) ? result : 0 );
}

void Laptop::checkConnectionStatus(bool connectedStatus)
{
    std::cout << ((connectedStatus) ? "Connection made" : " " );
}


struct DigitalPiano
{
    int numberOfKeys = 88;
    int storedEffects = 10;
    int pedals = 3;
    int outputSockets = 5;
    int eqSliders = 3;

    void identifySampleTune (int sampleNumber = 2);
    void checkMidiConnectionStatus (bool connected = true); 
    void metronome (bool metronomeOn, int beatsPerMinute = 120);
};

void DigitalPiano::identifySampleTune (int sampleNumber)
{
    switch (sampleNumber)
    {
        case 1:
            std::cout << "How Long Blues";
            break;
        case 2:
            std::cout << "Fur Elise";
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

struct FootballTeam
{
    int players = 11;
    float playerValue = 10000000.f;
    float possessionPercentage = 54.f;
    int leaguePosition = 10;
    float passSuccessPercentage = 62.f;

    float rateTrainingEfficacy(float prevPassSuccess, float currentPassSuccess);
    int rateAttack(int shotsOnTarget, int shotsTotal);
    int scoreMoreThanTheOtherLot(int goalsFor, int goalsAgainst);
};

float FootballTeam::rateTrainingEfficacy(float prevPassSuccess, float currentPassSuccess)
{
    return prevPassSuccess  - currentPassSuccess;
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
    };
//SmallBusiness member functions
    float calculateTurnover(float assessmentUnitPrice, int numAssessments);
    float calculatePayroll(int countEmployees, float monthlyPay);
    float calculateReportInvoiceCost(float chargeOutRate, float assessorHoursSpent); 
    
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

struct Oscillator
{
    int vOctInput = 3;
    float defaultVoltage = 0.f;
    int waveformControlPosition = 4;
    float pulseWidthPercent = 50.f;
    int octave = 4;
    
    float modulateNote(float inputSocketVolts, float modSocketVolts);
    void selectOscWaveform (int waveformControlPosition, int waveformModInputValue);
    float addOctave(int octaveControlPosition, float voltsIn);
};

float Oscillator::modulateNote(float inputSocketVolts, float modSocketVolts)
{
    return inputSocketVolts + modSocketVolts;
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

struct EnvelopeGenerator
{
    float attackMaxValue = 1.f;
    float decayMinValue = 0.f;
    float sustainDefaultValue = 0.5;
    std::string label = "Release";
    float envGateVoltage = 10;

    float getAttackTime(float attackControlValue, float timeMultiplier);
    float getSustainLevel(float attackControlValue, float susLevelMultiplier);
    bool getGateState(float envGateVoltage, float threshold); 

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

struct Filter
{
    float resonanceControlMaxValue = 1.f;
    float driveControlMinValue = 0.f;
    float cutoffControlDefaultValue = 0.5;
    bool isHighPass = true;
    float cutoffInputVolts = 3.f;

    float getDriveLevel(float driveCtrlValue, float driveInVolts, float gain); 
    void displayFilterMode(bool isHighPass);
    float modulateFilterCutoff(float frequencyControlValue, float freqControlMultiplier, float modulationInputVolts);
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

struct Sequencer
{
    int clockInputVolts = 0;
    int seqLength = 8;
    bool inputGateIsHigh = true;
    int rangeSemitones = 19;
    bool randomInputIsHigh = false;
    
    int modulateSeqLength(int seqControlValue, int modLenInputVal); 
    int modulateNoteRange(int rangeControlValue, int rangeLengthInputVolts);
    int quantizeSequence(int scale, bool quantizeSwitchValue = true);
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

struct Arpeggiator
{
    float arpInputVolts = 1.583f;//
    std::string chordType = "m9";
    std::string arpMode = "Up/Down";
    bool isHigh = true;
    float clockInputVolts = 10.f;

    int modulateChordType(int chordControlValue, int chordModulationInputVal);
    int modulateArpMode(int modeControlValue, int modeModulationInputVal);
    int modulateOctave(int octControlValue, int octModulationInputVal);
};

int Arpeggiator::modulateChordType(int chordCtrlValue, int chordModInputVal)
{
    return chordCtrlValue + chordModInputVal;
}

int Arpeggiator::modulateArpMode(int modeCtrlValue, int modeModInputVal)
{
    return modeCtrlValue + modeModInputVal;
}

int Arpeggiator::modulateOctave(int octCtrlValue, int octModInputVal)
{
    return octCtrlValue + octModInputVal;
}    

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
    };

    int selectOscWaveform (int waveformControlPosition, int waveformModInputVal);
    float modulateFilterCutoff(float frequencyControlValue, float freqControlMultiplier, float modulationInputVolts);
    void generateArp(float arpInputVolts, std::string chordType);
};

 // instantiate Synthesiser member functions
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
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

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
    Example::main();
    std::cout << "good to go!" << std::endl;
}
