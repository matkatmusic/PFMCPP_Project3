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
Thing 1) dog
 */
struct Dog
{
    // fur color
    std::string furColor = "black";
    // weight in kg
    float weight = 20.f;
    // age in years
    int age = 2;
    // number of cat roommates
    int numCatRoommates = 2;
    // number of walks needed per day
    int walksNeededDaily = 3;

    // play at the dog park
    void playAtDogPark(bool isParkOpen, float timeSinceLastPlay, int energyLevelOutOfTen = 5);
    // chew furniture
    void chewFurniture(bool isHungry, bool isBored, int energyLevelOutOfTen = 5);
    // bark at other dogs
    void bark(bool isOtherDogOutside);
};

/*
Thing 2) synthesizer
 */
struct Synthesizer 
{
    // attack fader position
    int attackFaderPosition = 1;
    // lfo depth position
    float lfoDepthPosition = 14.6f;
    // lfo rate in Hz
    float lfoRate = 0.02f;
    // filter cutoff amount in dB
    float fliterCutoffAmount = 125.f;
    // noise level
    int noiseLevel = 8;

    struct Oscillator
    {
        // frequency in Hz
        float frequency = 440.f;
        // Oscillator waveform
        std::string waveform = "Saw";
        // detune setting
        float detuneSetting = -0.04f;
        // unison setting
        int unisonSetting = 2;
        // blend amount
        int blendAmount = 34;

        // pan the oscillator
        void pan(bool panDirection, float panAmount = 0.f);
        // modulate another parameter
        void modulateParameter(std::string whichParameter = "Oscillator 2", float modulationDepth = 0.f);
        // self tune the synth
        float selfTune(float targetNote, float referenceFrequency); // returns tuned frequency
    };

    // assign lfo to another parameter
    void assignLfo(float lfoDepthPosition, float lfoRate, std::string assignedParameter, bool retrigger = false);
    // play a sequence
    void playSequence(std::string storedSequenceSettings, bool enabled = false);
    // lower the volume
    int lowerVolume(int desiredLevel, int currentLevel); // returns new volume level

};

/*
Thing 3) laptop
 */

struct Laptop
{
    // battery level
    int batteryLevelPercentage = 85;
    // wifi signal reception level
    float wifiSignalLevel = 3.24f;
    // color of the laptop
    std::string color = "silver";
    // age of computer in years
    int age = 2;
    // number of times the computer has been dropped
    int numTimesDropped = 1;

    // adjust the display brightness
    int adjustDisplayBrightness(int currentSetting, int desiredSetting); // returns new brightness level
    // capture a screenshot
    std::string captureScreenshot(bool buttonClick, bool isScreenshotAllowed = true); // returns screenshot file path
    // send an email
    void sendEmail(std::string recipient, std::string subject, std::string emailBody = "");
};

/*
Thing 4) refrigerator
 */
struct Refrigerator 
{
    // number of vegetables inside
    int numVegetables = 20;
    // temperature inside
    float temperatureInside = 37.45f;
    // location within the house
    std::string locationInHouse = "kitchen";
    // power draw in watts
    double powerDraw = 230;
    // time elapsed making ice
    float minutesElapsedMakingIce = 20;

    // dispense water
    void dispenseWater(bool enabled = false);
    // store food
    void storeFood(bool isPowered = true);
    // adjust temperature
    float adjustTemperature(float currentTemperature, float desiredTemperature); // returns new temperature
};

/*
Thing 5) drive shaft
 */
struct DriveShaft
{
    // material composition
    std::string materialComposition = "steel";
    // rotations per minute
    int rotationsPerMinute = 2000;
    // torque amount in N*m
    double torqueAmount = 450.03872;
    // length in cm
    float length = 74.8237f;
    // engaged with transmission
    bool engagedWithTransmission = false;

    // increase speed
    void increaseSpeed(float currentSpeed, float desiredSpeed, float speedLimit = 100.f);
    // increase torque
    void increaseTorque(float torqueLevel);
    // fail structurally
    void failStructurally(float maxLoad, float currentLoad);
};

/*
Thing 6) engine
 */

struct Engine
{
    // fuel flow rate in kg/s
    float fuelFlowRate = 0.45f;
    // cylinder arrangement pattern
    std::string cylinderPattern = "V";
    // number of spark plug misfires
    int numSparkPlugMisfires = 2;
    // valve pulse width percentage
    int valvePulseWidthPercentage = 35;
    // horespower generated
    float horsepowerGenerated = 84;

    // adjust valve timing
    float adjustValveTiming(float currentSetting, float desiredFlowRate); // returns new timing value
    // command spark plugs on
    void commandSparkPlugs(bool enabled = false);
    // bypass airflow
    void bypassAirflow(bool enabled = false);
};

/*
Thing 7) battery
 */
struct Battery 
{
    // voltage level
    float voltage = 27.f; // in volts
    // current draw
    double currentDraw = 3.84; // in amps
    // weight
    float weight = 10.7f; // in kg
    // volume
    int volume = 2; // in m^3
    // age
    int ageInYears = 3;

    // charge
    void charge(bool enabled = false, float maxVoltage = 28.f);
    // discharge
    void discharge(float currentVoltage, bool enabled = false, float maxDischargeRateAmps = 3.f);
    // catch on fire
    void catchOnFire(float tempLimit, float minVoltage = 2.4f);
};

/*
Thing 8) coolant plumbing circuit
 */
struct CoolantPlumbingCircuit
{
    // number of valves
    int numValves = 3;
    // efficiency percentage
    float efficiencyPercentage = 73;
    // pump power draw
    float pumpPowerDrawWatts = 49;
    // fan speed percentage
    int fanSpeedPercentage = 79;
    // coolant type
    std::string coolantType = "IAT";

    // adjust airflow by adjusting fan speed
    void setFanSpeed(float fanSetting, float currentSpeed);
    // adjust coolant flow through pump speed
    void setPumpSpeed(float pumpSetting, float currentSpeed);
    // leak coolant
    void leakCoolant(int numberOfCracksInPlumbing);
};

/*
Thing 9) engine controller
3 things it can do:
    1) command a different fuel flow amount
    2) cruise control
    3) raise an alert on the dash
 */
struct EngineController 
{
    // number of outputs
    int numOutputs = 23;
    // highest temperature reading
    float highestTempInput = 175.074f;
    // highest temperature channel name
    std::string highestTempChannel = "cylinder 1";
    // data rate in hz
    int dataRate = 23; // in Hz
    // output voltatge
    float outputVoltage = 11.86f;

    // command a different fuel flow amount
    int setFuelFlowRate(float desiredFlowRate, float currentFlowRate); // returns pump speed
    // set cruise control
    void setCruiseControl(float desiredSpeed, float currentSpeed);
    // raise an alert on the dash
    void raiseAlert(bool enabled = false);
};

/*
Thing 10) car components
 */
struct CarComponents
{
    // drive shaft
    DriveShaft driveShaft;
    // engine
    Engine engine;
    // battery
    Battery battery;
    // coolant plumbing circuit
    CoolantPlumbingCircuit plumbingCircuit;
    // engine controller
    EngineController engineController;

    struct Cabin
    {
        // number of seats
        int numSeats = 5;
        // sun roof
        bool sunRoof = true;
        // cabin temperature
        float cabinTemperature = 76.f;
        // number of doors
        int numDoors = 2;
        // number of heated seats
        bool isConvertible = false;

        // open the sun roof
        int openSunRoof(float amount, bool enabled = false); // returns how far the window was opened
        // turns on the seat heaters
        void turnSeatHeatersOn(bool enabled = false, float desiredTemp = 85);
        // roll down the windows
        void rollDownWindows(int numberOfWindows, std::string whichWindows, int amountPercent = 100); 
    };

    // car cabing
    Cabin cabin;

    // idle
    void idleConfiguration(int rpmSetting, std::string tranmissionConfiguration = "Park");
    // impart torque on the differential
    float setTorque(float torqueSetting, float desiredTorque); // returns amount in n*m
    // misfire spark plugs
    void misfireSparkPlugs(int sparkPlugAge, int engineRunTime);
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
