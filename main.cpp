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

        void fillTank(float costPerGallon, double fuelAmountInGallons = 2.0, bool requiresDiesel = false);  
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
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */


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
