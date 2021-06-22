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





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have warnings about 'unused parameter', you aren't using one of your function parameters in your implementation.
    use the parameter in your implementation.
    If you have warnings about 'overshadow', a local variable in the function has the same name as a class member.
    change the name of your local variable so it is different from the class member's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */


/*
Thing 1) Laptop
5 properties:
    1) amount of storage
    2) amount of RAM
    3) amount of video memory
    4) CPU speed
    5) number of USB sockets
3 things it can do:
    1) store information
    2) perform calculations
    3) connect to internet
 */

/*
Thing 2)
5 properties: digital piano
    1) number of keys
    2) number of stored effects
    3) number of pedals
    4) number of output sockets
    5) number of EQ sliders
3 things it can do:
    1) Play a tune
    2) connect to laptop
    3) play metronome beat
 */

/*
Thing 3) football team
5 properties:
    1) number of players
    2) market price of players
    3) possession percentage
    4) league position
    5) pass-success percentage
3 things it can do:
    1) pass accurately
    2) score goals
    3) win matches
 */

/*
Thing 4) small business
5 properties:
    1) number of employees
    2) rent paid per annum
    3) price charged per unit sold
    4) cost of materials per unit sold
    5) administration costs per annum
3 things it can do:
    1) produce widgets
    2) pay employees
    3) pay dividends
 */

/*
Thing 5) oscillator
5 properties:
    1) V/Oct input source
    2) default voltage
    3) waveform selection
    4) pulse width percentage
    5) octave selection
3 things it can do:
    1) change note
    2) select between waveforms
    3) switch between octaves
 */

/*
Thing 6) envelope generator
5 properties:
    1) attack control
    2) decay control
    3) sustain control
    4) release control
    5) input gate voltage
3 things it can do:
    1) change attack time
    2) change sustain level
    3) output gate signal
 */

/*
Thing 7) filter
5 properties:
    1) resonance control
    2) drive control
    3) cutoff control
    4) mode selection
    5) cutoff modulation input voltage
3 things it can do:
    1) change drive level
    2) switch between filter modes
    3) modulate cutoff frequency
 */

/*
Thing 8) sequencer
5 properties:
    1) voltage at clock input
    2) sequence length control
    3) input gate voltage
    4) note range control
    5) sequence voltage randomisation
3 things it can do:
    1) change length of sequence
    2) change note range of sequence
    3) randomise notes in sequence
 */

/*
Thing 9) arpeggiator
5 properties:
    1) root note input
    2) chord type selector
    3) arp mode selector
    4) gate input voltage
    5) clock input voltage
3 things it can do:
    1) change chord
    2) change arpeggio note order
    3) output gate signal
 */

/*
Thing 10) synthesizer
5 properties:
    1)  oscillator
    2) envelope generator
    3) filter
    4) sequencer
    5) arpeggiator
3 things it can do:
    1) change note frequency
    2) play random order arpeggio
    3) increase cut off frequency
 */
struct Laptop
{
    //1) amount of storage
    float ssdCapacity = 500.f;
    //2) amount of RAM
    float randomAccessMemory = 16.f;
    //3) amount of video memory
    float vRam = 4.f;
    //4) CPU speed
    float cpuSpeed = 1.8f;
    //5) number of USB sockets
    int numUsbSockets = 2;

    //1) store information
    float checkMemory(float ssdSpaceRemaining = 400.f);
    //2) perform calculations
    bool calculate(bool calcButtonClick = true);
    //3) connect to internet
    bool connect(bool connectedStatus = true);
};

struct DigitalPiano
{
    //1) number of keys
    int numberOfKeys = 88;
    //2) number of stored effects
    int storedEffects = 10;
    //3) number of pedals
    int pedals = 3;
    //4) number of output sockets
    int outputSockets = 5;
    //5) number of EQ sliders
    int eqSliders = 3;

    //1) Play a tune
    void playSampleTune (int sampleNumber = 7);
    //2) connect to laptop
    bool midiConnectionStatus (bool connected = true);
    //3) play metronome beat
    void metronome (int beatsPerMinute = 120);
};

struct FootballTeam
{
    //1) number of players
    int players = 11;
    //2) market price of players
    float playerValue = 10000000.f;
    //3) possession percentage
    float possessionPercentage = 54.f;
    //4) league position
    int leaguePosition = 10;
    //5) pass-success percentage
    float passSuccessPercentage = 62.f;

    //1) pass accurately
    int rateTrainingEfficacy(float prevPassSuccess, float currentPassSucess);
    // 2) score goals
    int rateAttack(int shotsOnTarget);
    // 3) win matches
    int scoreMoreThanTheOtherLot(int goalsFor, int goalsAgainst);
};

struct SmallBusiness //with nested class and functiosn using UDT parameters
{
    //1) number of employees
    int countEmployees = 10;
    //2) rent paid per annum
    float annualRent = 10000.f;
    //3) price charged per unit sold
    float assessmentPrice = 3240.f;
    //4) cost of materials per unit sold
    float ancillaryCosts = 320.f;
    //5) administration costs per annum
    float adminCostTotal = 15000.f;
    
    struct Assessor
    {
        std::string assessorName = "Joe Brown"; 
        std::string assessorAccountNumber = "016884546"; 
        float assessorPayRate = 45;
        std::string assessorAddress = "7 Pimlico Road WC1 3DT";
        bool dbsCheck = true;

        void printAssessorDetails(std::string assessorName, std::string assessorAddress, std::string assessorAccountNumber);
        bool dbsChecked(bool dbsCheck);
        float prepareReport(float readingTime, int numClients, int numInterviews, float hoursSpent);
    };

    
    //1) report turnover
    float calculateTurnover(float assessmentUnitPrice, float ancillaryCosts);
    //2) pay employees
    float calculatePayroll(int countEmployees, float monthlyPayroll);
    //3) produce assessments
    float invoiceReport(Assessor assessorName, 
                        float chargeOutRate, 
                        float assessorHoursSpent, 
                        float supervisionHours, 
                        float supervisorRate, 
                        int numSubjects, 
                        int travelTime);
    float payAssessor(Assessor assessorName, 
                      Assessor accountNumber, 
                      float assessorHoursSpent,  
                      int travelTime);
};

struct Oscillator
{
    //1) V/Oct input source
    int vOctInput = 3;
    //2) default voltage
    float defaultVoltage = 0.f;
    //3) waveform selection
    int waveformControlPosition = 4;
    //4) pulse width percentage
    float pulseWidthPercent = 50.f;
    //5) octave selection
    int octave = 4;
    
    //1) output a note
    void outputANote(int outputSocket, float outputVolts);
    //2) select between waveforms
    void selectOscWaveform (int waveformControlPosition, float waveformModInputVolts);
    //3) switch between octaves
    int getOctave(int octaveControlPosition);
};

struct EnvelopeGenerator
{
   //1) attack control
    float attackMaxValue = 1.f;
   //2) decay control
    float decayMinValue = 0.f;
   //3) sustain control
    float sustainDefaultValue = 0.5;
   //4) release control
    std::string label = "Release";
   //5) input gate voltage
    float envGateVoltage = 10;

   //1) change attack time
    float getAttackTime(float attackControlValue, float timeMultiplier);
   //2) change sustain level
    float getSustainLevel(float attackControlValue, float susLevelMultiplier);
   //3) output gate signal
    bool isGateOn(float envGateVoltage, float threshold);
};

struct Filter
{
    //1) resonance control
    float resonanceControlMaxValue = 1.f;
    //2) drive control
    float driveControlMinValue = 0.f;
    //3) cutoff control
    float cutoffControlDefaultValue = 0.5;
    //4) mode selection
    bool isHighPass = true;
    //5) cutoff modulation input
    float cutoffInputVolts = 3.f;

    //1) change drive level
    float getDriveLevel(float driveControlValue, float driveInputVolts, float gainPercent); //I have no idea how filters work!!
    //2) switch between filter modes
    bool checkFilterMode(bool isHighPass);
    //3) modulate cutoff frequency
    float modulateFilterCutoff(float frequencyControlValue, float freqControlMultiplier, float modulationInputVolts);
    };

struct Sequencer
{
    //1) voltage at clock input
    int clockInputVolts = 0;
    //2) sequence length control
    int seqLength = 8;
    //3) input gate voltage
    bool inputGateIsHigh = true;
    //4) note range control
    int rangeSemitones = 19;
    //5) sequence voltage randomisation
    bool randomInputIsHigh = false;
    
    //1) change length of sequence
    int modulateSeqLength(int seqControlValue, int seqLengthInputVolts); 
    //2) change note range of sequence
    int modulateNoteRange(int rangeControlValue, int rangeLengthInputVolts);
    //3) randomise notes in sequence (I changed this as I think it owuld need an array inside the function?)
    //3 quantize sequence
    void quantizeSequence(int scale, bool quantizeSwitchValue = true);
};

struct Arpeggiator
{
    //1) root note input
    float arpInputVolts = 1.583f;//
    //2) chord type selector
    std::string chordType = "m9";
    //3) arp mode selector
    std::string arpMode = "Up/Down";
    //4) gate input voltage
    bool isHigh = true;
    //5) clock input voltage
    float clockInputVolts = 10.f;

    //1) modulate chord
    int modulateChordType(int chordControlValue, float chordModulationInputVolts);
    //2) modulate arpeggio note order
    int modulateArpMode(int modeControlValue, float modeModulationInputVolts);
    //3) change octave
    int modulateOctave(int octKnobValue, float octModulationInputVolts);
};

struct Synthesizer //with nested class
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
    
        void modulatePulseWidth(int lfoPulseWidthControlPosition, float waveformModInputVolts);
        void selectWaveform (int waveformControlPosition, float waveformModInputVolts);
        int checkSlowMode(bool slowModeSwitchPosition);
    };

    void selectOscWaveform (int waveformControlPosition, float waveformModInputVolts);
    float modulateFilterCutoff(float frequencyControlValue, float freqControlMultiplier, float modulationInputVolts);
    void generateArp(Arpeggiator arpInputVolts, Arpeggiator chordType);
};
     //1) switch between waveforms
     //2) modulate filter cut off frequency
     //3) play arpeggio of a given chord 
//};
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
