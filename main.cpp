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
struct Limb
{
    int steps = 0;

    int stepForward();
    int stepSize();
};

int Limb::stepForward()
{
    steps += 1;

    return steps;
}

int Limb::stepSize()
{
    return steps;
}

struct Person
{
    Limb leftFoot;
    Limb rightFoot;

    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    int distanceTraveled = 0;

    int run( int, bool );
};

int Person::run( int howFast, bool startWithLeftFoot)
{
    if(startWithLeftFoot)
        return ( leftFoot.stepForward() + rightFoot.stepForward() ) * howFast;

    return ( rightFoot.stepForward() + leftFoot.stepForward() ) * howFast;
}

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

struct Guitar
{

    unsigned int numberOfStrings = 6;
    std::string boydWoodType = "Mahogany";
    std::string brandName = "Jackson";
    std::string bodyShape = "Default";  
    char size = 'M'; // S, M, L, XL
    std::string chordToPlay = "None";

    struct String
    {
        float gauge = 0.0f;
        float tension = 0.0f;
        std::string coreMaterial = "Steel";
        std::string windingType = "Round Wound";
        bool coated = false;

        bool isCoated();
        void setTension(float);
        float getGauge();
    };

    void playChord(std::string chord = "G");
    void PlaySolo();
    int connectToAmplifier(std::string);

    void tuneString(String stringToTune, std::string key);

    String stringE;
    String stringA;
    String stringD;
    String stringG;
    String stringB;
    String stringEs;

};

bool Guitar::String::isCoated()
{
    return coated;
}

void Guitar::String::setTension(float localTension)
{
    tension = localTension;
}

float Guitar::String::getGauge()
{
    return gauge;
}

void Guitar::playChord(std::string chord)
{
    chordToPlay = chord;
}
void Guitar::PlaySolo()
{
    // do nothing
}
int Guitar::connectToAmplifier(std::string chord)
{
    int lowPowerMode = 1;

    if(chord != "None")
        lowPowerMode = 0;
    
    return lowPowerMode;
}

struct WindMill
{
    unsigned int numberOfBlades = 3;
    float rotationalSpeed = 0.0f;
    int timesConnectedToGrid = 0;
    float mechanicalEnergyGeneratedPerDay = 100.0f;
    unsigned int bladeLength = 20;
    bool isConnectedToGrid = false;

    float convertMechEnergyToElEnergy(float mechanicalEnergy = 50.0f);
    bool rotateBlades(float rotationalSpeed = 100.0f);
    bool connectToGrid();

};

float WindMill::convertMechEnergyToElEnergy(float mechanicalEnergy)
{
    // Electrical energy is 3.45 times mechanical energy
    return 3.45f * mechanicalEnergy;
}

bool WindMill::rotateBlades(float rotSpeed)
{
    bool isRotating = false;

    if(rotSpeed > 0.0f)
    {
        rotationalSpeed = rotSpeed;
        isRotating = true;
    }
    else
    {
        rotationalSpeed = 0.0f;
    }
    
    return isRotating;
}

bool WindMill::connectToGrid()
{
    isConnectedToGrid = true;
    timesConnectedToGrid += 1;

    return isConnectedToGrid;
}

struct MotorCycle
{
    float revolutionsPerMinute = 45.0f;
    std::string color =  "blue";
    unsigned int size = 30;
    std::string engineType = "motorV";
    std::string brandName = "Kawasaki";
    float gasLevel = 50.0f;
    const float fullGasLevel = 65.0f;
    bool isCruising = false;

    struct Wheel
    {
        bool isBalanced = true;
        float rimRadius = 310.0f; // in mm
        unsigned int rimModulus = 69; // in GPa
        std::string material = "Alloy";
        float currentPressure = 36.0f; // PSI

        bool isWheelPressureLow();
        void balanceWheel();
        bool isWheelBalanced();
    };

    void accelerate(float acceleration = 1.2f);
    float readGasTankLevel();
    bool cruise(float speed);
    void getNewWheels(Wheel newWheel);

    Wheel frontWheel;
    Wheel backWheel;
};

bool MotorCycle::Wheel::isWheelPressureLow()
{
    bool isPressureLow = false;

    if(currentPressure < 32.0f)
        isPressureLow = true;

    return isPressureLow;
}

void MotorCycle::Wheel::balanceWheel()
{
    isBalanced = true;
}

bool MotorCycle::Wheel::isWheelBalanced()
{
    return isBalanced;
}

void MotorCycle::accelerate(float acceleration)
{
    revolutionsPerMinute *= acceleration;
}

float MotorCycle::readGasTankLevel()
{
    float percentGasLevel = gasLevel / fullGasLevel * 100.0f;

    return percentGasLevel;
}

bool MotorCycle::cruise(float speed)
{
    isCruising = true;
    revolutionsPerMinute = speed;

    return isCruising;
}

void MotorCycle::getNewWheels(MotorCycle::Wheel wheelA)
{
    frontWheel = wheelA;
    backWheel = wheelA;
}

struct DrillSet
{
    std::string drillbitMaterial = "Steel";
    unsigned int drillbitDiameter = 2;
    float angularSpeed = 0.0f;
    unsigned int numberOfChargers = 2;
    std::string brandName = "Bosch";
    int directionOfRotation = 1;

    bool canDrillConcrete(std::string drillbitMaterial); // confirm whether or not the drill bit can drill concrete
    void setDirectionOfRotation(int direction = -1); // left= -1, right = 1
    void setRotatorySpeed(float angularSpeed = 2.0f);
    
};

bool DrillSet::canDrillConcrete(std::string drillbitMaterialA)
{
    if(drillbitMaterialA == "Steel")
        return true;

    return false;
}

void DrillSet::setDirectionOfRotation(int direction)
{
    directionOfRotation = direction;
}

void DrillSet::setRotatorySpeed(float angularSpeedA)
{
    angularSpeed = angularSpeedA;
}

struct Speaker
{
    float loudness = 90.0f;
    float resistance = 4.0f;
    float distortion = 0.1f;
    double diameter = 20.1;
    unsigned int powerAmount = 10;
    bool isPlaying = false;

    void playSound();
    float powerConsumption(float voltageInput = 1.0f);
    void setPlaybackLevel(unsigned int volumeIndex);

};

void Speaker::playSound()
{
    isPlaying = true;
}

float Speaker::powerConsumption(float voltageInput)
{
    float power = ( voltageInput * voltageInput ) / resistance;

    return power;
}

void Speaker::setPlaybackLevel(unsigned int volumeIndex)
{
    if(volumeIndex > 10)
        loudness += 6.0f;
    else
        loudness -= 6.0f;
}

struct Microphone
{
    float sensitivity = -54.0f;
    unsigned int powerSupply = 1.0f;
    float acousticOverloadPoint = 124.0f;
    std::string technology = "MEMS";
    std::string transductionType = "Dynamic";
    bool isCapturing = false;
    float inputGain;

    void captureSound();
    void setInputGain(float gain);
    float getSensitivity(); // return microphone sensitivity
};

void Microphone::captureSound()
{
    isCapturing  = true;
}

void Microphone::setInputGain(float gain)
{
    inputGain = gain;
}

float Microphone::getSensitivity()
{
    return sensitivity;
}

struct Battery
{
    float operatingTime = 3.5f;
    std::string technologyPrinciple = "XM3";
    bool isBatteryRechargeable = true;
    float chargingSpeed = 5.0f;
    float diameter = 3.0f;
    bool isConnectedToSpeaker = false;
    bool isConnectedToMic = false;

    bool powerSpeaker(); // provide power to speaker
    bool powerMicrophone(); // provide power to microphones
    float readCapacity(); // read the current battery's capacity
};

bool Battery::powerSpeaker()
{
    isConnectedToSpeaker = true;

    return isConnectedToSpeaker;
}

bool Battery::powerMicrophone()
{
    isConnectedToMic = true;

    return isConnectedToMic;
}

float Battery::readCapacity()
{
    return operatingTime;
}

struct Antenna
{
    float tuningRadioFrequency = 2.4f;
    unsigned int size = 1;
    std::string communicationTechnology = "COM";
    bool lowPowerMode = false;
    Battery battery;
    bool isRemoteControl = false;

    bool setRemoteControl();
    bool enableAudioStreaming();
    float powerConsumption(Battery batteryA, float voltageInput = 1.0f);
};

bool Antenna::setRemoteControl()
{
    lowPowerMode = false;
    isRemoteControl = true;

    return isRemoteControl;
}

bool Antenna::enableAudioStreaming()
{
    lowPowerMode = false;
    battery.powerSpeaker();

    return battery.isConnectedToSpeaker;
}

float Antenna::powerConsumption(Battery batteryA, float voltageInput)
{
    return batteryA.operatingTime + ( voltageInput * voltageInput );
}

struct MicroControllerUnit
{
    std::string microcontrollerType = "D1";
    unsigned int numberOfBits = 32;
    std::string memoryType = "RAM";
    unsigned int ramSize = 512;
    unsigned int numberInputPorts = 4;

    std::string fetchInstructionsFromMemory(std::string memoryType = "RAM");
    unsigned int decodeInstruction(std::string instruction = "Idle");
    void executeCommand(unsigned int numericCommand = 0);
    
};

std::string MicroControllerUnit::fetchInstructionsFromMemory(std::string memoryTypeA)
{
    std::string instruction;
    memoryType = memoryTypeA;
    
    if(memoryType == "RAM")
        instruction = "ABAB";
    else if(memoryType == "ROM")
        instruction = "CDCD";
    else
        instruction = "Idle";

    return instruction;
}

unsigned int MicroControllerUnit::decodeInstruction(std::string instruction)
{
    unsigned int decodedInstruction;

    if(instruction == "ABAB")
        decodedInstruction = 3;
    else if(instruction == "CDCD")
        decodedInstruction = 2;
    else if(instruction == "Idle")
        decodedInstruction = 1;
    else
        decodedInstruction = 0;

    return decodedInstruction;
}

struct HearingAid
{
    Speaker speaker;
    Microphone mic;
    Antenna antenna;
    MicroControllerUnit microController;
    Battery battery;

    void amplifyAudioSignals(Microphone microphoneA, float gain);
    void listenToMusic();
    bool connectToSmartphone(std::string handShakingID = "ABAB");
    
};

void HearingAid::amplifyAudioSignals(Microphone microphoneA, float gain)
{
    microphoneA.setInputGain(gain);
}

void HearingAid::listenToMusic()
{
    speaker.setPlaybackLevel(8);
    speaker.playSound();
}

bool HearingAid::connectToSmartphone(std::string handShakingID)
{
    unsigned int numericInstruction = microController.decodeInstruction(handShakingID);

    if(numericInstruction == 3)
        return true;

    return false;
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
