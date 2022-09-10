/*
 Project 3 - Part 4 / 5
 video: Chapter 2 - Part 9
 Member initialization tasks

 Create a branch named Part4
 
 1) do this for each class in this project: 
    initialize some of your member variables either in-class or in the Constructor member initializer list.
    Show me that you understand how to use these language features.

 2) make some of your member functions use those initialized member variables via std::cout statements.
 
 3) click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */

#include <iostream>
namespace Example 
{
struct UDT  
{
    int a; //a member variable that IS NOT initialized in-class
    float b { 2.f }; //a member variable that IS initialized in-class
    UDT() : a(0) { } // 'constructor-initializer-list' initializing the member that wasn't initialized in-class.
    void printAandB()  //the member function
    {
        std::cout << "UDT::printAandB() a:" << a << " b: " << b << std::endl;  //2) printing out something interesting
    }
};

int main()
{
    UDT foo; //instantiating a Foo in main()
    foo.printAandB(); //calling a member function of the instance that was instantiated.
    return 0;
}
}

//call Example::main()


struct Guitar
{

    Guitar();
    unsigned int numberOfStrings;
    std::string bodyWoodType;
    std::string brandName;
    std::string bodyShape;
    char size; // S, M, L, XL
    std::string chordToPlay;

    struct String
    {
        String();
        // Initialize variables in class
        float gauge { 0.0f };
        float tension { 0.0f };
        std::string coreMaterial{ "Steel" };
        std::string windingType{ "Wound Round" };
        bool coated { false };

        bool isCoated();
        void setTension(float);
        float getGauge();
    };

    void playChord(std::string chord = "G");
    void playSolo();
    int connectToAmplifier(std::string);

    void tuneString(String stringToTune, std::string key);

    String stringE;
    String stringA;
    String stringD;
    String stringG;
    String stringB;
    String stringEs;

};

Guitar::Guitar() : // Initialize variables in initializer list
numberOfStrings(6),
bodyWoodType("Mahogany"),
brandName("Jackson"),
bodyShape("Default"),
size('M'),
chordToPlay("None")
{
    std::cout << "Guitar being constructed!" << std::endl;

    std::cout << "Guitar brand initialized to " + brandName << std::endl;
}

Guitar::String::String()
{
    std::cout << "String being constructed as Guitar is constructed" << std::endl;
    std::cout << "String core material initialized to " + coreMaterial << std::endl;
}
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
    std::cout << "Guitar is playing " + chord << std::endl;
}
void Guitar::playSolo()
{
    std::cout << "Guitar is playing an AWESOME SOLO!!!" << std::endl;
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
    WindMill();

    unsigned int numberOfBlades;
    float rotationalSpeed;
    int timesConnectedToGrid;
    float mechanicalEnergyGeneratedPerDay;
    unsigned int bladeLength;
    bool isConnectedToGrid;

    float convertMechEnergyToElEnergy(float mechanicalEnergy = 50.0f);
    bool rotateBlades(float rotationalSpeed = 100.0f);
    bool connectToGrid();

};

WindMill::WindMill() : // Initialize variables in initializer list
numberOfBlades(3),
rotationalSpeed(0.0f),
timesConnectedToGrid(0),
mechanicalEnergyGeneratedPerDay(100.f),
bladeLength(20),
isConnectedToGrid(false)
{
    std::cout << "WindMill being constructed!" << std::endl;

    std::cout << "Wind Mill number of blades initialized to " << numberOfBlades << " blades" << std::endl;
    
}

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

    std::cout << "The blades are rotating!!" << std::endl;
    
    return isRotating;
}

bool WindMill::connectToGrid()
{
    isConnectedToGrid = true;
    timesConnectedToGrid += 1;

    std::cout << "WindMill connected to grid" << std::endl;

    return isConnectedToGrid;
}

struct MotorCycle
{
    MotorCycle();
    float revolutionsPerMinute;
    std::string color;
    unsigned int size;
    std::string engineType;
    std::string brandName;
    float gasLevel;
    const float fullGasLevel{ 65.0f };
    bool isCruising;

    struct Wheel
    {
        Wheel();
        // Initialize variables in class
        bool isBalanced{ true };
        float rimRadius{ 310.0f }; // in mm
        unsigned int rimModulus{ 69 }; // in GPa
        std::string material{ "Alloy" };
        float currentPressure{ 36.0f }; // PSI

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

MotorCycle::MotorCycle()
{
    // Initialize variables in constructor body
    revolutionsPerMinute = 45.0f;
    color = "blue";
    size = 30;
    engineType = "MotorV";
    brandName = "Kawasaki";
    gasLevel = 50.0f;
    isCruising = false;
    
    std::cout << "MotorCycle being constructed!" << std::endl;

    std::cout << "Motorcycle cruising initialized to " << (isCruising ? "Yes" : "No") << std::endl; 
}

MotorCycle::Wheel::Wheel()
{
    std::cout << "Wheel being constructed!" << std::endl;
}

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
    if(isBalanced)
        std::cout << "Wheel is balanced" << std::endl;
    else
        std::cout << "Wheel is not balanced" << std::endl;
    
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
    DrillSet();
    std::string drillbitMaterial;
    unsigned int drillbitDiameter;
    float angularSpeed;
    unsigned int numberOfChargers;
    std::string brandName;
    int directionOfRotation;

    bool canDrillConcrete(std::string drillbitMaterial); // confirm whether or not the drill bit can drill concrete
    void setDirectionOfRotation(int direction = -1); // left= -1, right = 1
    void setRotatorySpeed(float angularSpeed = 2.0f);
    
};

DrillSet::DrillSet() : // Initialize variables in initializer list
drillbitMaterial("Steel"),
drillbitDiameter(2),
angularSpeed(0.0f),
numberOfChargers(2),
brandName("Bosch"),
directionOfRotation(1)
{
    std::cout << "DrillSet being constructed" << std::endl;
}

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
    Speaker();
    //Initialize variables in-class
    float loudness{ 90.0f };
    float resistance{ 4.0f };
    float distortion{ 0.1f };
    double diameter{ 20.1 };
    unsigned int powerAmount{ 10 };
    bool isPlaying{ false };

    void playSound();
    float powerConsumption(float voltageInput = 1.0f);
    void setPlaybackLevel(unsigned int volumeIndex);

};

Speaker::Speaker()
{
    std::cout << "Speaker being constructed!" << std::endl;
}

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
    Microphone();
    float sensitivity;
    unsigned int powerSupply;
    float acousticOverloadPoint;
    std::string technology;
    std::string transductionType;
    bool isCapturing;
    float inputGain;

    void captureSound();
    void setInputGain(float gain);
    float getSensitivity(); // return microphone sensitivity
};

Microphone::Microphone()
{
    // Initialize variables in constructor body
    sensitivity = -54.0f;
    powerSupply = 1.0f;
    acousticOverloadPoint = 124.0f;
    technology = "MEMS";
    transductionType = "Dynamic";
    isCapturing = false;
    inputGain = 1.0f;
    
    std::cout << "Microphone being constructed!" << std::endl;

    std::cout << "Is microphone initialized to capture sound? " << (isCapturing ? "Yes":"No") << std::endl;
}

void Microphone::captureSound()
{
    std::cout << "Microphone is capturing some cool sounds" << std::endl;
    isCapturing  = true;
}

void Microphone::setInputGain(float gain)
{
    std::cout << "Setting microphone input gain" << std::endl;
    inputGain = gain;
}

float Microphone::getSensitivity()
{
    std::cout << "Reading microphone sensitivity" << std::endl;
    return sensitivity;
}

struct Battery
{
    Battery();
    // Initialize variables in class
    float operatingTime{ 3.5f };
    std::string technologyPrinciple{ "XM3" };
    bool isBatteryRechargeable{ true };
    float chargingSpeed{ 5.0f };
    float diameter{ 3.0f };
    bool isConnectedToSpeaker{ false };
    bool isConnectedToMic{ false };

    bool powerSpeaker(); // provide power to speaker
    bool powerMicrophone(); // provide power to microphones
    float readCapacity(); // read the current battery's capacity
};

Battery::Battery()
{
    std::cout << "Battery being constructed!" << std::endl;
}

bool Battery::powerSpeaker()
{
    isConnectedToSpeaker = true;

    std::cout << "Using battery to power speaker" << std::endl;
    return isConnectedToSpeaker;
}

bool Battery::powerMicrophone()
{
    isConnectedToMic = true;

    std::cout << "Using battery to power microphone" << std::endl;
    return isConnectedToMic;
}

float Battery::readCapacity()
{
    std::cout << "Reading battery's capacity" << std::endl;
    return operatingTime;
}

struct Antenna
{
    Antenna();
    float tuningRadioFrequency;
    unsigned int size;
    std::string communicationTechnology;
    bool lowPowerMode;
    Battery battery;
    bool isRemoteControl;

    bool setRemoteControl();
    bool enableAudioStreaming();
    float powerConsumption(Battery batteryA, float voltageInput = 1.0f);
};

Antenna::Antenna() : // Initialize in initializer list
tuningRadioFrequency(2.4f),
size(1),
communicationTechnology("COM"),
lowPowerMode(false),
isRemoteControl(false)
{
    std::cout << "Antenna being constructed!" << std::endl;
}

bool Antenna::setRemoteControl()
{
    lowPowerMode = false;
    isRemoteControl = true;

    std::cout << "Antenna's remote control is set" << std::endl;
    
    return isRemoteControl;
}

bool Antenna::enableAudioStreaming()
{
    lowPowerMode = false;
    battery.powerSpeaker();

    std::cout << "Audio streaming enabled in Antenna" << std::endl;
    
    return battery.isConnectedToSpeaker;
}

float Antenna::powerConsumption(Battery batteryA, float voltageInput)
{
    std::cout << "Antenna is consuming some POWER!" << std::endl;
    return batteryA.operatingTime + ( voltageInput * voltageInput );
}

struct MicroControllerUnit
{
    MicroControllerUnit();
    std::string microcontrollerType;
    unsigned int numberOfBits;
    std::string memoryType;
    unsigned int ramSize;
    unsigned int numberInputPorts;

    std::string fetchInstructionsFromMemory(std::string memoryType = "RAM");
    unsigned int decodeInstruction(std::string instruction = "Idle");
    void executeCommand(unsigned int numericCommand = 0);
    
};

MicroControllerUnit::MicroControllerUnit()
{
    // Initialize variables in constructor body
    microcontrollerType = "D1";
    numberOfBits = 32;
    memoryType = "RAM";
    ramSize = 512;
    numberInputPorts = 4;
    
    std::cout << "MicroControllerUnit being constructed!" << std::endl;
}

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

    std::cout << "MCU instruction fetched from memory" << std::endl;

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

    std::cout << "MCU instruction decoded" << std::endl;

    return decodedInstruction;
}

void MicroControllerUnit::executeCommand(unsigned int numericCommand)
{
    std::cout << "The numeric command is: " << numericCommand << std::endl;
}

struct HearingAid
{
    HearingAid();
    Speaker speaker;
    Microphone mic;
    Antenna antenna;
    MicroControllerUnit microController;
    Battery battery;

    void amplifyAudioSignals(Microphone microphoneA, float gain);
    void listenToMusic();
    bool connectToSmartphone(std::string handShakingID = "ABAB");
    
};

HearingAid::HearingAid()
{
    std::cout << "HearingAid being constructed!" << std::endl;
}

void HearingAid::amplifyAudioSignals(Microphone microphoneA, float gain)
{
    std::cout << "HearingAid gain modified" << std::endl;
    microphoneA.setInputGain(gain);
}

void HearingAid::listenToMusic()
{
    speaker.setPlaybackLevel(8);
    speaker.playSound();

    std::cout << "HearingAid is playing music. Enjoy the tune" << std::endl;
}

bool HearingAid::connectToSmartphone(std::string handShakingID)
{
    unsigned int numericInstruction = microController.decodeInstruction(handShakingID);

    if(numericInstruction == 3)
    {
        std::cout << "HearingAid connected to smartphone" << std::endl;
        return true;
    }

    std::cout << "HearingAid NOT connected to smartphone" << std::endl;
    
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
    //Example::main();
    Guitar guitar;
    WindMill windMill;
    MotorCycle motorCycle;
    DrillSet drillSet;
    Speaker speaker;
    Microphone microphone;
    Battery battery;
    Antenna antenna;
    MicroControllerUnit microControllerUnit;
    HearingAid hearingAid;

    guitar.playChord("Eb");
    guitar.playSolo();
    guitar.connectToAmplifier("A#");

    windMill.convertMechEnergyToElEnergy(24.56f);
    windMill.rotateBlades(64.0f);
    windMill.connectToGrid();

    motorCycle.accelerate(2.0f);
    motorCycle.readGasTankLevel();
    motorCycle.cruise(34.5f);
    motorCycle.getNewWheels(motorCycle.frontWheel);
    
    drillSet.canDrillConcrete("Steel");
    drillSet.setDirectionOfRotation(-1);
    drillSet.setRotatorySpeed(45.0f);
    
    speaker.playSound();
    speaker.powerConsumption();
    speaker.setPlaybackLevel(10);
    
    microphone.captureSound();
    microphone.getSensitivity();
    microphone.setInputGain(3.5f);
    
    battery.powerMicrophone();
    battery.powerSpeaker();
    battery.readCapacity();
    
    antenna.powerConsumption(battery);
    antenna.enableAudioStreaming();
    antenna.setRemoteControl();
    
    std::string instructionFromMCU = microControllerUnit.fetchInstructionsFromMemory("RAM");
    microControllerUnit.decodeInstruction(instructionFromMCU);
    microControllerUnit.executeCommand(0);
    
    hearingAid.amplifyAudioSignals(microphone, 2.0f);
    hearingAid.connectToSmartphone();
    hearingAid.listenToMusic();
    
    std::cout << "Is the wind mill connected to the grid? " << (windMill.isConnectedToGrid == 0 ? "Yes" : "No") << "\n";
    std::cout << "The drill set brand name is: " + drillSet.brandName << std::endl;
    std::cout << "The Mic input gain is set to " << microphone.inputGain << std::endl;
    std::cout << "What is the battery tech. principle? " << battery.technologyPrinciple << std::endl;
    std::cout << "The current instruction from the MCU is " << instructionFromMCU << std::endl;
    std::cout << "Is the battery of the hearing aid rechargeable? " << (hearingAid.battery.isBatteryRechargeable ? "Yes" : "No") << std::endl;
    
    std::cout << "good to go!" << std::endl;
}

