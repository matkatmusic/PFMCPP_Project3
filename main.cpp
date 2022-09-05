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
    If you have 'unused parameter' warnings, you aren't using one of your function parameters in your implementation.
    Solution: use the parameter in your implementation.

    If you have 'shadows a field of <classname>' warnings, a local variable in the function has the same name as a class member.  
    This local variable could also be a function parameter with the same name as the class member.
    Solution: change the local variable's name so it is different from the class member variable's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */


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
    struct String
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
    void tuneString(String stringToTune, std::string key);

    String stringE;
    String stringA;
    String stringD;
    String stringG;
    String stringB;
    String stringEs;

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
