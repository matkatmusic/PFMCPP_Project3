 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */


struct Person 
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    int distanceTravelled;

    void run(int howFast, bool startWithLeftFoot); 

//define Type and include member functions
    struct Leg
    {
        int legLength;
        int sineOfLegAngle; //(this wouldn't be an int)
        int numSteps;
        
        void stepForward()
        {
            numSteps++;
        }
        
        int stepSize() 
        {
            int stepLength = 2*legLength * (sineOfLegAngle/2); 
            return stepLength;
        }
    }; 

    Leg leftFoot; // instantiations of Leg struct
    Leg rightFoot;
  
};
   
void Person::run(int howFast, bool startWithLeftFoot)
{
    if (startWithLeftFoot == true)
    {
        leftFoot.stepForward();
        rightFoot.stepForward();
    } 
    else
    {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }

    distanceTravelled += leftFoot.stepSize() + rightFoot.stepSize();
    std::cout << "Current speed is " << howFast << "mph." << std::endl;
}


 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have warnings about 'unused parameter', you aren't using one of your function parameters in your implementation.
    use the parameter in your implementation.
    If you have warnings about 'overshadow', a local variable in the function has the same name as a class member.
    change the name of your local variable so it is different from the class member's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */

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
    if(ssdSpaceRemaining < 100)
    { 
        capacityWarning = "Disk Space Low!";
    }
    else
    {
        capacityWarning = "Disk Space OK";
    }
           
    return capacityWarning;
}

void Laptop::displayCalculation(float result, bool calcButtonClick)
{
    if(calcButtonClick == true) 
    {
        std::cout << result;
    }
          
}

void Laptop::checkConnectionStatus(bool connectedStatus)
{
    if(connectedStatus == true)
    {
        std::cout<<"Connection made"; 
    }
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
    if(connected == true)
    {
        std::cout<<"Midi connection made"; 
    }
    else 
    {
        std::cout<<"Connect midi cable";
    }
}    

void DigitalPiano::metronome (bool metronomeOn, int beatsPerMinute)
{
    if(metronomeOn == true)
    {
        std::cout<<"BPM = " << beatsPerMinute; 
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
    if (check)
    {
        std::cout << "Check OK";
    }
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
    std::string mode = (isHp) ? "High Pass" : "Low Pass";
    std::cout << mode;
    // INFO: use a ternary expression here: std::cout << ( expr ? a : b );
    //QUESTION couldnt get this to work in one line
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
    std::cout << "good to go!" << std::endl;
}
