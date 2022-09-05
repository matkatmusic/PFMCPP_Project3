/*
Project 3 - Part 1e / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct below your plain-english UDT. i.e.:

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

#if false //ignore these #if #endif lines. they're just here to prevent compiler errors.
struct CarWash
{

};
#endif
/*
    - Do this for all 10 UDTs

2) Below your plain-english UDT, Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    - Do this for all 10 UDTs
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
    - Do this for all 10 UDTs
    - if your functions return something other than 'void', add a comment explaining what is being returned.  see the example code below.
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
    - Do this for all 10 UDTs
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
    if your code produces a [-Wpadded] warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */

/*
 example:  

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

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function.  it has multiple arguments, some with default values.
        //the parameter names are related to the work the function will perform.
        void fillTank(float costPerGallon, double fuelAmountInGallons = 2.0, bool requiresDiesel = false);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips); //3) returns the number of miles traveled
    };

    //wash and wax car
    void washAndWaxCar(Car carA); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage); //3) returns the total amount charged.
    //detail the car interior
    void detailInterior(Car carB);
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  

    /*
    Pay attention to the member functions that take an instance of 'Car'
    Notice that there is a member variable of the same type.

    It makes sense to pass a Car to the function 'washAndWaxCar' because car washes service MANY cars
    However, they only service ONE car at a time.
    the carBeingServiced's value would change every time you wash and wax the car. 

    I see many students who write code emulating this format, but their usage does not make logical sense.  
    Consider the following snippet:

    struct SoccerTeam
    {
        struct Manager
        {
            ...
        };

        // train their skills
        void trainPlayerSkills(Manager managerA);
    
        Manager teamManager;
    };

    It does not make sense to pass in a new Manager whenever you are going to train your team players.
    Soccer teams have ONE manager.

    a much more relevant usage would be adding a member function that hires a new manager:

    struct SoccerTeam
    {
        struct Manager
        {
            ...
        };

        void hireNewManager(Manager newManager);
    
        Manager teamManager;
    };

    We can safely assume that the 'Manager' instance that is being passed in will be replacing the current 'teamManager' variable without looking at any other code.
    This is because the function name and function argument clearly indicate what they are/what they do.

    Your function names and parameter names should make LOGICAL SENSE.
    Readers of your code should be able to INTUITIVELY understand what your function implementations will do without actually seeing the implementations.

    Keep this in mind when you define your UDTs in this project part.
    */
};

/*
Thing 1) Guitar
5 properties:
    1) number of strings (unsigned int)
    2) body wood type (string)
    3) brand name (string)
    4) body shape (string)
    5) size (char)
3 things it can do:
    1) play a chord
    2) play a solo
    3) connect to amplifier
 */
struct Guitar
{
    // number of strings
    unsigned int numberOfStrings = 6;
    // body wood type (string)
    std::string boydWoodType = "Mahogany";
    // brand name (string)
    std::string brandName = "Jackson";
    // body shape (string)
    std::string bodyShape = "Default";
    // size (char)    
    char size = 'M'; // S, M, L, XL

    // 5) nested class
    struct GuitarString
    {
        // Gauge
        float gauge = 0.0f;
        float tension = 0.0f;
        std::string coreMaterial = "Steel";
        std::string windingType = "Round Wound";
        bool coated = false;

        bool isCoated(); // enquire whether the string is coated or not
        void setTension(float tension);
        float getGauge(); // get information about string's gauge
    };

    // play a chord
    void playChord(std::string chord = "G");
    // play a solo
    void PlaySolo();
    // connect to amplifier
    bool connectToAmplifier(); // return a bool to indicate whether or not the guitar is connected to an amplifier

    // 4) function member with UDT as input parameter
    void tuneString(GuitarString stringToTune, std::string key);

    GuitarString stringE;
    GuitarString stringA;
    GuitarString stringD;
    GuitarString stringG;
    GuitarString stringB;
    GuitarString stringEs;

};

/*
Thing 2) wind mill
5 properties:
    1) number of blades (unsigned int)
    2) rotational speed (float)
    3) pole height (float)
    4) amount of energy generated in a day (float)
    5) blade length (unsigned int)
3 things it can do:
    1) convert mechanical energy into electrical energy
    2) rotate their blades
    3) connect to the electrical grid
 */
struct WindMill
{
    // number of blades
    unsigned int numberOfBlades = 3;
    // rotational speed
    float rotationalSpeed = 0.0f;
    // pole height
    float poleHeight = 10.0f;
    // amount of mechanical energy generated per day
    float mechanicalEnergyGeneratedPerDay = 100.0f;
    // blade length
    unsigned int bladeLength = 20;

    // convert mechanical energy into electrical energy
    float convertMechEnergyToElEnergy(float mechanicalEnergy = 50.0f); // returns electrical energy
    // rotate wind mill's blades
    bool rotateBlades(float rotationalSpeed = 100.0f); // confirm whether or not the blades are rotating
    // connect to the electrical grid
    bool connectToGrid(); // confirm whether or not the wind mill is connected to the grid

};

/*
Thing 3) Motorcycle
5 properties:
    1) RPMs (usigned int)
    2) color (string)
    3) size (unsigned int)
    4) engine type (string)
    5) brand name (string)
3 things it can do:
    1) accelerate
    2) consume gas, read tank level
    3) cruise
 */
struct MotorCycle
{
    // revolutiosn per minute
    unsigned int revolutionsPerMinute = 45;
    // color
    std::string color =  "blue";
    // size
    unsigned int size = 30;
    // engine type
    std::string engineType = "motorV";
    // brand name
    std::string brandName = "Kawasaki";

    // 5) nested class
    struct Wheel
    {
        bool isBalanced = true;
        float rimRadius = 310.0f; // in mm
        unsigned int rimModulus = 69; // in GPa
        std::string material = "Alloy";
        float currentPressure = 36.0f; // PSI

        bool isWheelPressureLow(); // read whether the wheel pressure is low
        // set wheel balance to true
        void balanceWheel();
        // read if wheels are balanced
        bool isWheelBalanced(); // read whether or not the Wheel is balanced
    };

    // accelerate
    void accelerate(float acceleration = 1.2f);
    // consume gas, read tank level
    float readGasTankLevel(); // return percentage of full tank
    // cruise
    bool cruise(float speed); // confirm whether or not the vehicle is cruising
    // change Wheel
    void getNewWheel(Wheel newWheel);

    Wheel frontWheel;
    Wheel backWheel;
};

/*
Thing 4) Drill set
5 properties:
    1) drill bit material (string)
    2) drill bit diameter (unsigned int)
    3) angular speed (float)
    4) number of chargers (unsigned int)
    5) brand name (string)
3 things it can do:
    1) drill concrete
    2) unscrew in the left or right direction
    3) set rotatory speed
 */
struct DrillSet
{
    // drill bit material
    std::string drillbitMaterial = "Steel";
    // drill bit diameter
    unsigned int drillbitDiameter = 2;
    // angular speed
    float angularSpeed = 0.0f;
    // number of chargers
    unsigned int numberOfChargers = 2;
    // brand name
    std::string brandName = "Bosch";

    // can the drill bit drill concrete?
    bool canDrillConcrete(std::string drillbitMaterial); // confirm whether or not the drill bit can drill concrete
    // unscrew in the left or right direction
    void setDirectionOfRotation(int direction = -1); // left= -1, right = 1
    // set rotatory speed
    void setRotatorySpeed(float angularSpeed = 2.0f);
    
};

/*
Thing 5) Speakers
5 properties:
    1) loudness (float)
    2) resistance (unsigned int)
    3) distortion (float)
    4) diameter (double)
    5) amount of power required in mW (unsigned int)
3 things it can do:
    1) play sound
    2) consume power
    3) set playback level
 */

struct Speaker
{
    // loudness
    float loudness = 90.0f;
    // resistance
    unsigned int resistance = 4;
    // distortion
    float distortion = 0.1f;
    // diameter
    double diameter = 20.1;
    // amount of power required in mW
    unsigned int powerAmount = 10;

    // play sound
    void playSound();
    // power consumed
    float powerConsumption(unsigned int resistance = 4, float voltageInput = 1.0f);
    // set playback level
    void setPlaybackLevel(unsigned int volumeIndex);

};

/*
Thing 6) Microphones
5 properties:
    1) sensitivity (float)
    2) power supply (unsigned int)
    3) acoustic overload point (float)
    4) technology (string)
    5) transduction type (string)
3 things it can do:
    1) capture sound
    2) set input gain
    3) read sensitivity
 */
struct Microphone
{
    // sensitivity
    float sensitivity = -54.0f;
    // power supply
    unsigned int powerSupply = 1.0f;
    // acoustic overload point in dB
    float acousticOverloadPoint = 124.0f;
    // technology
    std::string technology = "MEMS";
    // transduction type
    std::string transductionType = "Dynamic";

    // capture sound
    void captureSound(float duration);
    // set input gain
    void setInputGain(float gain);
    // read sensitivity
    float getSensitivity(); // return microphone sensitivity
};

/*
Thing 7) Battery
5 properties:
    1) operating time (float)
    2) technology principle (string)
    3) rechargeable (bool)
    4) charging speed (float)
    5) diameter (float)
3 things it can do:
    1) power the speaker
    2) power the microphone
    3) read capacity
 */
struct Battery
{
    // operating time
    float operatingTime = 3.5f;
    // technology principle
    std::string technologyPrinciple = "XM3";
    // rechargeable
    bool isBatteryRechargeable = true;
    // charging speed
    float chargingSpeed = 5.0f;
    // diameter
    float diameter = 3.0f;

    // power the speaker
    bool powerSpeaker(); // provide power to speaker
    // power the microphone
    bool powerMicrophone(); // provide power to microphones
    // read capacity
    float readCapacity(); // read the current battery's capacity
};

/*
Thing 8) Antenna
5 properties:
    1) tuning radio-frequency (float)
    2) size (unsigned int)
    3) communication technology (string)
    4) power consumption (float)
    5) low power mode (bool)
3 things it can do:
    1) remote control
    2) audio streaming
    3) consumes power
 */
struct Antenna
{
    // tuning radio-frequency
    float tuningRadioFrequency = 2.4f;
    // size
    unsigned int size = 1;
    // communication technology
    std::string communicationTechnology = "COM";
    // low power mode
    bool lowPowerMode = false;
    // use user-defined type
    Battery battery;

    // remote control
    bool setRemoteControl(); // enable remote control
    // audio streaming
    bool enableAudioStreaming(); // enable audio streaming though the antenna
    // consume power
    float powerConsumption(Battery batteryA, float voltageInput = 1.0f); // 4) return power consumed by Antenna given a particular battery UDT and voltage input
    
};

/*
Thing 9) MCU
5 properties:
    1) type of microcontroller (string)
    2) supported number of bits (unsigned int)
    3) type of nonvolatile memory (string)
    4) RAM size (unsigned int)
    5) number of input ports (unsigned int)
3 things it can do:
    1) fetch instructions from memory
    2) decode instructions into commands
    3) execute commands
 */
struct MicrocontrollerUnit
{
    // type of microcontroller
    std::string microcontrollerType = "D1";
    // supported number of bits
    unsigned int numberOfBits = 32;
    // type of nonvolatile memory
    std::string memoryType = "RAM";
    // RAM size
    unsigned int ramSize = 512;
    // number of input ports
    unsigned int numberInputPorts = 4;

    // fetch instructions from memory
    std::string fetchInstructionsFromMemory(std::string memoryType = "RAM"); // get next instruction
    // decode instructions into command
    unsigned int decodeInstruction(std::string instruction = "Iddle"); // map instruction to unique number
    // execute command
    void executeCommand(unsigned int numericCommand = 0);
    
};

/*
Thing 10) Hearing aid
5 properties:
    1) Speakers
    2) Microphone
    3) Antenna
    4) MCU
    5) Battery
3 things it can do:
    1) amplify audio signals
    2) listen to music
    3) connect to smartphone
 */

struct HearingAid
{
    // Speakers
    Speaker speaker;
    // Microphone
    Microphone mic;
    // Antenna
    Antenna antenna;
    // MCU
    MicrocontrollerUnit microController;
    // Battery
    Battery battery;

    // amplify audio signals
    void amplifyAudioSignals(Microphone microphoneA, float gain); // 4) some of input parameters is a UDT
    // listen to music
    void listenToMusic(Speaker speakerA, float gain);
    // connect to smartphone. 4) some of input parameters is a UDT
    bool connectToSmartphone(std::string handshakingID = "AAAA"); // confirm whether or not the conenction to a smartphone was succesful
    
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
