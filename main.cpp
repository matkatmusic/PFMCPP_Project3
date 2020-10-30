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

    struct Foot
    {
        void stepForward();
        int stepSize();
    };

    Foot leftFoot;
    Foot rightFoot;

    void run( int howFast, bool startWithLeftFoot);
};

void Person::Foot::stepForward()
{

}

int Person::Foot::stepSize()
{

}

void Person::run( int howFast, bool startWithLeftFoot )
{
    if (startWithLeftFoot == true )
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
}




 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you decide to write empty functions, you will need to fill them in with code in part 3.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */


/*
1) Acoustic Guitar
5 properties:
    1) Number of strings it has
    2) Number of frets
    3) Fret number of a capo
    4) Year it was built
    5) Whether or not it has amplification
3 things it can do:
    1) Play a single note
    2) Play a chord
    3) Tune its strings (you would want a nested type "string"?)
 */

struct AcousticGuitar 
{
    int numStrings = 6;
    int numFrets = 18;
    int capoFretNumber = 7;
    int yearOfConstruction = 1972;
    bool hasAmplification = true;

    void playNote(int stringNumber, int fretNumber);

    void playChord(std::string chordName);

    void tuneString(int stringNumber, float tuningFrequency);
};



/*
2) Library
5 properties:
    1) Number of books
    2) Number of members
    3) Fee for returning books late
    4) Number of books each member can have out at once
    5) Duration that a member can take a book out for
3 things it can do:
    1) Check out a book
    2) Return a book
    3) Search whether a book is in the libarry
 */

struct Library
{
    int numBooks = 100;
    int numMembers = 100;
    float lateFee = 1.25f;
    int maxBooksLoaned = 5;
    int maxDaysLoan = 14;

    void checkOutBook(std::string bookTitle);

    void returnBook(std::string bookTitle);

    bool isBookInLibrary(std::string bookTitle);
};


/*
3) smart light bulb
5 properties:
    1) Number of Watts
    2) Brightness level
    3) Whether it's currently on or not
    4) Keeps track of total energy it has used
    5) Keeps track of the total hours it's been on
3 things it can do:
    1) toggle on/off
    2) turn off automatically after a given time
    3) it can send a signal when it needs to be replaced
 */

struct SmartBulb
{
    int watts = 200;
    float brightness = 0.8f;
    bool isOn = false;
    float totalEnergy = 0.f;
    float totalHoursOn = 0.f;

    void toggle();

    void toggleAfterDelay(float delay);

    void alertReplacement();

};


/*
4) Cat
5 properties:
    1) Age
    2) Whether or not it's male
    3) Whether or not it's a tabby cat
    4) How hungry it is
    5) How thirsty it is
3 things it can do:
    1) It can purr
    2) It can meow
    3) It can drink water
 */
struct Cat
{
    int age = 1;
    bool isMale = false;
    bool isTabby = true;
    float hunger = 0.5f;
    float thirst = 0.5f;

    void purr();
    void meow();
    void drink(float volumeOfWater = 0.2f);
};



/*
Thing 5) Harmonic set (generates a set of frequencies from two input frequencies)
5 properties:
    1) Bass Frequency
    2) Generator Frequency 
    3) Minimum output frequency
    4) maximum output frequency
    5) generator rule # (would select among a few pre-coded rules)
3 things it can do:
    1) calculate and output a set of frequencies
    2) calculate statistics about the frequencies (how harmonically coherent they are, etc)
    3) filter the frequency set according to certain rules
 */

struct HarmonicSet
{
    float bassFrequency = 220.0f;
    float genFrequency = 440.0f;
    float minFrequency = 220.0f;
    float maxFrequency = 8000.0f;
    int genRule = 0;

    void playSet(float bassFrequency, float genFrequency, float minFrequency, float maxFrequency);

    float calculateHarmonicity(float bassFrequency, float genFrequency);

    void playFiltered(float bassFrequency, float genFrequency, float minFrequency, float maxFrequency, int genRule);
};


/*
Thing 6) Rhythmic Rules
5 properties:
    1) density / note gap %
    2) "convolution rate" (how complicated the rhythms are)
    3) tempo
    4) rate of variation (how far it randomly strays from the selected settings)
    5) meter / pulse structure (this would have to be a UDT also)
3 things it can do:
    1) output a rhythm that controls the pattern generator
    2) modify the rhythmic properties according to a control signal from the UI
    3) modify the meter and tempo according to UI control
 */

struct RhythmicRules
{
    float gapPercentage = 0.2f;
    float convolutionRate = 0.5f;
    float tempo = 120.f;
    float variation = 1.0f;

    struct Meter
    {
        int numerator = 4; 
        int denominator = 4; 
        int currentBeat = 1; 
        int smallestBeat = 8; 
        int beatsPerBigStep = 2; 

        int bigStep(int currentBeat, int smallestBeat, int beatsPerBigStep); 
        int littleStep(int currentBeat, int smallestBeat); 
        void reset(); 
    };

    void outputRhythm(float gapPercentage, float convolutionRate, float tempo, float variation, struct Meter);

    float setGapPercentage(float newGapPercentage);

    float setTempo(float newTempo);
};

/*
Thing 7) Pattern Generator
5 properties:
    1) "rootedness" (how often it plays the generator frequencies)
    2) repetition rate (how likely to repeat notes)
    3) step size (how far away in the set it will pick the next note)
    4) variability rate
    5) fractal dimension (would be used in the pattern calculation)
3 things it can do:
    1) receives inpulses from the rhythm generator
    2) calculates next note based on current harmonic set
    3) outputs control signals to the synth
 */

struct PatternGenerator
{
    float rootedness = 1.0f;
    float repetitionPercentage = 0.15f;
    int stepSize = 2;
    float variability = 1.0f;
    float fractalDimension = 1.618f;

    struct Pattern
    {

        bool repeat = false; 
        int numberOfNotes = 5;  
        int startingMIDI = 69;  
        bool isArpeggio = true;    
        std::string patternName = "triads";

        void play();
        void reverse();
        void stop();
    };

    void getRhythm(RhythmicRules rhythms); 
    void calculateNote(HarmonicSet harmonies);
    Pattern generatePattern();
};

/*
Thing 8) Synthesizer
5 properties:
    1) wave shape
    2) amplitude
    3) attack time
    4) max polyphony
    5) distortion
3 things it can do:
    1) respond to signals from the pattern generator
    2) respond to signals from UI display
    3) output audio
 */
struct Synthesizer
{
    std::string waveShape = "sine";
    float amplitude = 1.0f;
    float attackTime = 2.0f;
    int maxPolyphony = 6;
    float distortion = 1.0f;
    void getPattern(PatternGenerator patternGen);
    void getUI();
    void playAudio(float amplitude, float attackTime, int maxPolyphony, float distortion);

};


/*
Thing 9) Distortion
5 properties:
    1) brightness
    2) number of echoes
    3) room size
    4) hipass filter cutoff
    5) lopass filter cutoff
3 things it can do:
    1) process a sound input
    2) calculate changes to its values
    3) turn on/off bypass
 */
struct Distortion
{
    float brightness = 0.5f;
    int numEchoes = 3;
    float roomSize = 20.f;
    float hiPass = 20.0f;
    float loPass = 2000.0f;

    void processInput();

    float calculateBrightness(float roomSize, float hiPass, float loPass);

    bool bypass = false;
    bool toggleBypass(bool bypass);
};

/*
10) Melodic Sequencer
5 properties:
    1) Harmonic set (to take pitches from)
    2) Rhythmic rules (for deciding when to play what)
    3) Pattern generator (brings together harmonic set and rhythm rules)
    4) Synthesizer (selects/generates the actual sound)
    5) Distortion
3 things it can do:
    1) It can play a melodic sequence
    2) It can display patterns on the screen
    3) It can accept user instructions
 */

struct MelodicSequencer
{
    HarmonicSet harmonicSet;
    RhythmicRules rhythmicRules;
    PatternGenerator patternGenerator;
    Synthesizer synthesizer;
    Distortion distortion;
    void playSequence(bool repeat = true);
    void displayUI(int screenWidth = 400, int screenHeight = 300);
    void getUI(int screenWidth = 400, int screenHeight = 300);
};

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
