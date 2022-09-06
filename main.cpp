/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 0) if you opted to not fill in any of your member functions in part2, 
    fill in ALL of your member functions
    
 1) Add a constructor for each User-Defined-Type.
    The constructor should be the first declaration in your UDT, before all member variables and member functions.
    add a std::cout message in the constructor that prints out the name of the class being constructed.  
    When you run your code, you'll see the order that your objects are created in the program output. 
 
 2) For each User-Defined-Type:
        amend some of the member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of EACH of your user-defined types in the main() function.  
    You should have at least 12 different variables declared in main(), because you have written 12 different types (including the nested types)

 4) For each instantiated UDT: 
        call each of that instance's member functions.
        You're doing this to show that your code doesn't produce warnings when you call the functions that take arguments.
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int thing = 0; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    std::cout << "UDT being constructed!" << std::endl; //1) 
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << thing << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'thing' equal to 0? " << (foo.thing == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.




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
    Example::main();
    
    
    std::cout << "good to go!" << std::endl;
}
