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

struct Person
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    int distanceTraveled;

    struct Foot
    {
        int numSteps;
        int stepDistance;
        void stepForward();
        int stepSize();
    };

    Foot leftFoot;
    Foot rightFoot;

    void run(int howFast, bool startWithLeftFoot);
};

void Person::Foot::stepForward()
{
    numSteps += 1;
}

int Person::Foot::stepSize()
{
    return stepDistance * numSteps;
}

void Person::run(int howFast, bool startWithLeftFoot)
{
    if (startWithLeftFoot && howFast >= 2) // added howFast to prevent console warning
    {
        leftFoot.stepForward();
        rightFoot.stepForward();
    }
    else 
    {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }
    distanceTraveled += rightFoot.stepSize() + leftFoot.stepSize();
}

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

struct Dog
{
    std::string furColor = "black";
    float weight = 20.f;
    int age = 2;
    int numCatRoommates = 2;
    int walksNeededDaily = 3;

    bool playAtDogPark(bool isParkOpen, float timeSinceLastPlay, int energyLevelOutOfTen = 5);
    bool chewFurniture(bool isHungry, bool isBored, int energyLevelOutOfTen = 5);
    bool bark(bool isOtherDogOutside);
};

// switched the output to bool instead of void in order for function to make more sense
bool Dog::playAtDogPark(bool isParkOpen, float timeSinceLastPlay, int energyLevelOutOfTen)
{
    if (isParkOpen && timeSinceLastPlay > 300.5f && energyLevelOutOfTen > 7)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// switched the output to bool instead of void in order for function to make more sense
bool Dog::chewFurniture(bool isHungry, bool isBored, int energyLevelOutOfTen)
{
    if (isHungry && isBored && energyLevelOutOfTen > 6)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

// switched the output to bool instead of void in order for function to make more sense
bool Dog::bark(bool isOtherDogOutside)
{
    if (isOtherDogOutside)
    {
        return true;
    }
    return false;
}

struct Synthesizer 
{
    int attackFaderPosition = 1;
    float lfoDepthPosition = 14.6f;
    float lfoRate = 0.02f;
    float fliterCutoffAmount = 125.f;
    int noiseLevel = 8;
    float outputSignal = 0.f;
    float clock = 0.f;
    bool trig = false;
    float parameterInitial;
    bool lfoEnabled = false;
    std::string validParameter;
    std::string midiInfo;

    struct Oscillator
    {
        float frequency = 440.f;
        std::string waveform = "Saw";
        float detuneSetting = -0.04f;
        int unisonSetting = 2;
        int blendAmount = 34;
        float outputRight = 0.f;
        float outputLeft = 0.f;
        int tunedFrequency;
        float parameterLevel;
        std::string validOscParameter;

        void pan(bool panDirection, float panAmount = 0.f);
        void modulateParameter(std::string whichParameter = "Oscillator 2", float modulationDepth = 0.f);
        float selfTune(int targetNote, int referenceFrequency);
    };

    void assignLfo(float lfoDepthPosition, float rate, std::string assignedParameter, bool retrigger = false);
    void playSequence(std::string storedSequenceSettings, bool enabled = false);
    int lowerVolume(int desiredLevel, int currentLevel);

};

void Synthesizer::Oscillator::pan(bool panDirection, float panAmount)
{
    if (panDirection)
    {
        outputRight += panAmount;
        outputLeft -= panAmount;
    }
    else 
    {
        outputRight -= panAmount;
        outputLeft += panAmount;
    }
    
}

void Synthesizer::Oscillator::modulateParameter(std::string whichParameter, float modulationDepth)
{
    // writing the real version of parameter modulation would add a lot more parameters and subclasses and I'm not sure if that's in the scope of this assignment, so this is just a simplistic exmple
    if (whichParameter == validOscParameter)
    {
        parameterLevel = modulationDepth;
        outputRight = parameterLevel;
        outputLeft = parameterLevel;
    }
}

// changed frequencies to ints to make the function make more sense and prevent warnings about float comparisons
float Synthesizer::Oscillator::selfTune(int targetNote, int referenceFrequency)
{
    tunedFrequency = referenceFrequency;
    while (tunedFrequency != targetNote)
    {
        if (tunedFrequency < targetNote)
        {
            tunedFrequency += 1;
        }
        else
        {
            tunedFrequency -= 1;
        }
    }
    return tunedFrequency;
}

void Synthesizer::assignLfo(float depthPosition, float rate, std::string assignedParameter, bool retrigger)
{
    while (lfoEnabled && assignedParameter == validParameter)
    {
        float increase = depthPosition / rate;
        float parameterPosition = parameterInitial;
        float clockInitial = clock;
        while (clock - clockInitial > clock / rate)
        {
            if (retrigger && trig)
            {
                break;
            }
            else if (lfoEnabled == false)
            {
                break;
            }
            if (clock - clockInitial >= (1.f / rate) * 0.5f)
            {
                parameterPosition += increase;
            }
            else 
            {
                parameterPosition -= increase;
            }
        }
    }
    
}

void Synthesizer::playSequence(std::string storedSequenceSettings, bool enabled)
{
    if (enabled)
    {
        midiInfo += storedSequenceSettings;
    }
}

int Synthesizer::lowerVolume(int desiredLevel, int currentLevel)
{
    while (desiredLevel != currentLevel)
    {
        currentLevel -= 1;
    }
    return currentLevel;
}

struct Laptop
{
    int batteryLevelPercentage = 85;
    float wifiSignalLevel = 3.24f;
    std::string color = "silver";
    int age = 2;
    int numTimesDropped = 1;
    std::string emailContents = "";

    int adjustDisplayBrightness(int currentSetting, int desiredSetting);
    std::string captureScreenshot(bool buttonClick, bool isScreenshotAllowed = true);
    void sendEmail(std::string recipient, std::string subject, std::string emailBody = "");
};

int Laptop::adjustDisplayBrightness(int currentSetting, int desiredSetting)
{
    while (currentSetting != desiredSetting)
    {
        if (currentSetting < desiredSetting)
        {
            currentSetting += 1;
        }
        else
        {
            currentSetting -= 1;
        }
    }
    return currentSetting;
}

std::string Laptop::captureScreenshot(bool buttonClick, bool isScreenshotAllowed)
{
    if (buttonClick && isScreenshotAllowed)
    {
        return "Capture";
    }
    else if (buttonClick)
    {
        return "Invalid";
    }
    else
    {
        return "None";
    }
}

void Laptop::sendEmail(std::string recipient, std::string subject, std::string emailBody)
{
    emailContents = recipient + subject + emailBody;
}

struct Refrigerator 
{
    int numVegetables = 20;
    float temperatureInside = 37.45f;
    std::string locationInHouse = "kitchen";
    double powerDraw = 230.1;
    float minutesElapsedMakingIce = 20.f;
    bool enableDispenser = false;
    bool storeFoodInFridge = false;

    void dispenseWater(bool enabled = false);
    void storeFood(bool isPowered = true);
    int adjustTemperature(int currentTemperature, int desiredTemperature);
};

void Refrigerator::dispenseWater(bool enabled)
{
    if (enabled)
    {
        enableDispenser = true;
    }
    else
    {
        enableDispenser = false;
    }
}

void Refrigerator::storeFood(bool isPowered)
{
    if (isPowered)
    {
        storeFoodInFridge = true;
    }
    else
    {
        storeFoodInFridge = false;
    }
}

// changed frequencies to ints to make the function make more sense and prevent warnings about float comparisons
int Refrigerator::adjustTemperature(int currentTemperature, int desiredTemperature)
{
    while (currentTemperature != desiredTemperature)
    {
        if (currentTemperature < desiredTemperature)
        {
            currentTemperature += 1;
        }
        else
        {
            currentTemperature -= 1;
        }
    }
    return currentTemperature;
}

struct DriveShaft
{
    std::string materialComposition = "steel";
    int rotationsPerMinute = 2000;
    double torqueAmount = 450.03872;
    float length = 74.8237f;
    bool engagedWithTransmission = false;
    bool structurallyFailed = false;

    void increaseSpeed(float currentSpeed, float desiredSpeed, float speedLimit = 100.f);
    void increaseTorque(float torqueLevel);
    void failStructurally(float maxLoad, float currentLoad);
};

void DriveShaft::increaseSpeed(float currentSpeed, float desiredSpeed, float speedLimit)
{
    while (currentSpeed < desiredSpeed && currentSpeed < speedLimit)
    {
        currentSpeed += 1.5f;
    }
}

void DriveShaft::increaseTorque(float torqueLevel)
{
    torqueLevel += 100.f;
}

void DriveShaft::failStructurally(float maxLoad, float currentLoad)
{
    if (currentLoad > maxLoad)
    {
        structurallyFailed = true;
    }
}

struct Engine
{
    float fuelFlowRate = 0.45f;
    std::string cylinderPattern = "V";
    int numSparkPlugMisfires = 2;
    bool sparkPlugPowerOn = false;
    int valvePulseWidthPercentage = 35;
    float horsepowerGenerated = 84.f;
    bool bypassEnabled = false;

    int adjustValveTiming(int currentSetting, int desiredFlowRate);
    void commandSparkPlugs(bool enabled = false);
    void bypassAirflow(bool enabled = false);
};

// switched to int to prevent warnings
int Engine::adjustValveTiming(int currentSetting, int desiredFlowRate)
{
    while (currentSetting != desiredFlowRate)
    {
        if (currentSetting < desiredFlowRate)
        {
            currentSetting += 1;
        }
        else
        {
            currentSetting -= 1;
        }
    }
    return currentSetting;
}

void Engine::commandSparkPlugs(bool enabled)
{
    if (enabled)
    {
        sparkPlugPowerOn = true;
    }
}

void Engine::bypassAirflow(bool enabled)
{
    if (enabled)
    {
        bypassEnabled = true;
    }
}

struct Battery 
{
    float voltage = 27.f;
    double currentDraw = 3.84;
    float weight = 10.7f;
    float dischargeRate;
    int volume = 2;
    int ageInYears = 3;
    bool chargeActive = false;
    bool dischargeActive = false;
    bool fire;
    float cellTemperature;

    void charge(bool enabled = false, float maxVoltage = 28.f);
    void discharge(float currentVoltage, bool enabled = false, float maxDischargeRateAmps = 3.f);
    void catchOnFire(float tempLimit, float minVoltage = 2.4f);
};

void Battery::charge(bool enabled, float maxVoltage)
{
    if (enabled && voltage < maxVoltage)
    {
        chargeActive = true;
    }
}

void Battery::discharge(float currentVoltage, bool enabled, float maxDischargeRateAmps)
{
    while (enabled)
    {
        currentVoltage = voltage;
        dischargeActive = true;
        if (dischargeRate > maxDischargeRateAmps)
        {
            dischargeActive = false;
            enabled = false;
        }
    }
}

void Battery::catchOnFire(float tempLimit, float minVoltage)
{
    if (voltage < minVoltage && cellTemperature > tempLimit)
    {
        fire = true;
    }
}

struct CoolantPlumbingCircuit
{
    int numValves = 3;
    float efficiencyPercentage = 73.f;
    float pumpPowerDrawWatts = 49.f;
    int fanSpeedPercentage = 79;
    std::string coolantType = "IAT";
    bool leak = false;

    void setFanSpeed(float fanSetting, float currentSpeed);
    void setPumpSpeed(float pumpSetting, float currentSpeed);
    void leakCoolant(int numberOfCracksInPlumbing);
};

void CoolantPlumbingCircuit::setFanSpeed(float fanSetting, float currentSpeed)
{
    // allow the setting to get within 1% to be more realistic with floats
    if (currentSpeed < fanSetting - fanSetting * 0.01f)
    {
        currentSpeed += 0.01f;
    }
    else if (currentSpeed > fanSetting + fanSetting * 0.01f)
    {
        currentSpeed -= 0.01f;
    }
}

void CoolantPlumbingCircuit::setPumpSpeed(float pumpSetting, float currentSpeed)
{
    // same logic for percentages as the function above
    if (currentSpeed < pumpSetting - pumpSetting * 0.01f)
    {
        currentSpeed += 0.1f;
    }
    else if (currentSpeed > pumpSetting + pumpSetting * 0.01f)
    {
        currentSpeed -= 0.1f;
    }
}

void CoolantPlumbingCircuit::leakCoolant(int numberOfCracksInPlumbing)
{
    if (numberOfCracksInPlumbing > 5)
    {
        leak = true;
    }
}

struct EngineController 
{
    int numOutputs = 23;
    float highestTempInput = 175.074f;
    std::string highestTempChannel = "cylinder 1";
    int dataRate = 23;
    float outputVoltage = 11.86f;
    bool alert;
    int alertLevel;

    float setFuelFlowRate(float desiredFlowRate, float currentFlowRate);
    void setCruiseControl(float desiredSpeed, float currentSpeed);
    void raiseAlert(bool enabled = false);
};

float EngineController::setFuelFlowRate(float desiredFlowRate, float currentFlowRate)
{
    while (currentFlowRate < desiredFlowRate - desiredFlowRate * 0.01f || currentFlowRate > desiredFlowRate + desiredFlowRate * 0.01f)  
        if (currentFlowRate < desiredFlowRate)
        {
            currentFlowRate += 0.1f;
        }
        else
        {
            currentFlowRate -= 0.1f;
        }
    return currentFlowRate;
}

void EngineController::setCruiseControl(float desiredSpeed, float currentSpeed)
{
    if (currentSpeed < desiredSpeed - desiredSpeed * 0.01f)
    {
        currentSpeed += 0.1f;
    }
    else if (currentSpeed > desiredSpeed + desiredSpeed * 0.01f)
    {
        currentSpeed -= 0.1f;
    }
}

void EngineController::raiseAlert(bool enabled)
{
    if (enabled)
    {
        alert = true;
        alertLevel = 10;
    }
}

struct CarComponents
{
    DriveShaft driveShaft;
    Engine engine;
    Battery battery;
    CoolantPlumbingCircuit plumbingCircuit;
    EngineController engineController;

    struct Cabin
    {
        int numSeats = 5;
        bool sunRoof = true;
        float sunRoofPosition = 100.f;
        float cabinTemperature = 76.f;
        int numDoors = 2;
        bool isConvertible = false;
        int currentSeatHeaterTemp;
        float windowPosition;
        std::string validWindows;

        float openSunRoof(float amount, bool enabled = false);
        void turnSeatHeatersOn(bool enabled = false, int desiredTemp = 85);
        void rollDownWindows(int numberOfWindows, std::string whichWindows, int amountPercent = 100); 
    };

    Cabin cabin;
    bool misfire = false;

    void idleConfiguration(int rpmSetting, std::string tranmissionConfiguration = "Park");
    float setTorque(float torqueSetting, float desiredTorque);
    void misfireSparkPlugs(int sparkPlugAge, int engineRunTime);
};

float CarComponents::Cabin::openSunRoof(float amount, bool enabled)
{
    if (enabled)
    {
        sunRoofPosition -= amount;
    }
    return sunRoofPosition;
}

void CarComponents::Cabin::turnSeatHeatersOn(bool enabled, int desiredTemp)
{
    while (enabled)
    {
        if (desiredTemp < currentSeatHeaterTemp)
        {
            currentSeatHeaterTemp -= 1;
        }
        else 
        {
            currentSeatHeaterTemp += 1;
        }
    }
}

void CarComponents::Cabin::rollDownWindows(int numberOfWindows, std::string whichWindows, int amountPercent)
{
    while (numberOfWindows != 0 && whichWindows == validWindows)
    {
        windowPosition -= (amountPercent / 100) * windowPosition;
        numberOfWindows -= 1;
    }
}

void CarComponents::idleConfiguration(int rpmSetting, std::string tranmissionConfiguration)
{
    if (tranmissionConfiguration == "Park")
    {
        rpmSetting = 2400;
    }
    else if (tranmissionConfiguration == "Drive")
    {
        rpmSetting = 2500;
    }
    else 
    {
        rpmSetting = 2200;
    }
}

float CarComponents::setTorque(float torqueSetting, float desiredTorque)
{
    while (desiredTorque < torqueSetting - torqueSetting * 0.01f || desiredTorque > torqueSetting + torqueSetting * 0.01f )
    {
        if (desiredTorque< torqueSetting)
        {
            torqueSetting += 0.1f;
        }
        else
        {
            torqueSetting -= 0.1f;
        }
    }
    return torqueSetting;
}

void CarComponents::misfireSparkPlugs(int sparkPlugAge, int engineRunTime)
{
    if (sparkPlugAge > 4 && engineRunTime > 2000)
    {
        misfire = true;
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
