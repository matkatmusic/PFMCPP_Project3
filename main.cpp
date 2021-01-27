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

struct Limb
{
    void stepForward();
    int stepSize();
};

int stepSize(std::string direction)
{
    return 1;
}
    
struct Person
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore = 0;
    int distanceTraveled = 0;   
    Limb leftFoot;
    Limb rightFoot;
    
    void run(int howFast, bool startWithLeftFoot)
    {
        if(startWithLeftFoot == true)
        {
            leftFoot.stepForward();
            rightFoot.stepForward();
        }
        else
        {
            rightFoot.stepForward();
            leftFoot.stepForward();
        }
        
        distanceTraveled += leftFoot.stepSize() + rightFoot.stepSize();
    }
};


 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you decide to write empty functions, you will need to fill them in with code in part 3.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */


struct CanPlant
{
    int tinAmount = 1000;
    double rawFish = 100.21;
    int autoclaveLoad = 300;
    int dayCansOut = 900;
    float workHours = 12;
    
    struct OfficeWorker
    {
        int callOperatorId = 1;
        int intNumber = 1301;
        std::string operatorName = "Elena";
        float hourStart = 5.5f;
        float hourEnd = 12.0f;
        
        void makeCall(int customerId = 0, float time = 0);
        void pickCall(int number, float time);
        int reserveGood(int customerId, int amount = 0);
    };
    
    int produceCans(double slicedFish, int tinAmount);
    void loadBoxes(int boxes, int wareHouseNumber);
    double reportScrapOut(double rawFish, float workHours);
};

struct SipProvider
{
    std::string codecName = "G729";
    int calls = 2;
    bool t38 = false;
    double price = 0;
    int slaType = 1;
    
    bool makeCall(int src, int dst);
    float chargeCustomer(double time, int customerId);
    float traficCount(double time);
};

bool SipProvider::makeCall(int src, int dst)
{
    if (src == dst)
    {
        return false;
    }
    else
    {
        return true;
    }
};
struct Cat
{
    int paw = 4;
    char colour = 'B';
    bool gender = 0; //0 female, 1 male
    float age = 3.5f;
    int liveNumber = 1;

    void eat(char foodType);
    void sleep (float time);
    void mew (int count);
};

struct SpaceShip
{
    float orbitHeight = 1000;
    std::string engineType = "rocket";
    int crewNum = 3;
    std::string country = "RU";
    std::string name = "Salyut";
    
    struct CrewMember
    {
        int memberId = 0;
        std::string name = "Rob";
        std::string jobRole = "scientist";
        float weight = 70.0f;
        float age =33.3f;
        
        void examineAnimal(int date, float time, Cat cat);
        bool recordTest(int date, float time, int testNum=0);
        void examineCrew (int date, float time, CrewMember memberId);
    };

    bool dock();
    void makeLoop(int planetNum = 3);
    bool takeOf(float startTime);

};

struct DAC
{
    int sampleRate = 48000;
    int bitDepth = 24;
    int SNR = 112;
    float amountOfPoerwConsumed = 0.9f;
    double dynamicRange = 9.9;
    
    void readInput(int channelNum = 0);
    bool checkError(double sampleNum);
    void audioOut(int channelNum = 0);
};

struct PowerUnit
{
    float weight = 1.2f;
    double outVolt = 12;
    double inVolt = 220;
    int outCurrent = 1;
    int maxOutTemp = 80;
     
    bool getElectricity(int outletStandart=1);
    double convertVoltage(double inVolt, double outVolt);
    bool status(int circuitId = 1);
};

struct VCA
{
    float freqResponse = 0.5f;
    double insertLoss = 0.01;
    int attenuation = -100;
    float price = 3;
    int channelNum = 2;
    
    void attenuate(int coefficient = -50);
    void inputPower(int amountOfPower = 20);
    int readKnob (double knobAngle = 10.123);
};

struct HeadphoneAmp
{
    int SNR = 112;
    float outPower = 600.0f;
    int outImpendance = 32;
    int maxFreq = 20000;
    double inVolt = 12;
    
    void getInput(int channelNum = 0);
    void doAmp(int channelNum = 0);
    bool noiseReduction(int filterNum = 3);
};

struct Body
{
    float height = 6.5f;
    float width = 15.0f;
    float depth = 10.5f;
    char colour = 'B';
    char material = 'W';
    
     bool checkTheBolt(int circuitId = 1);
     bool checkShortCircuit(int circuitId = 1);
     void alarmOverDust(float time = 10);
};

struct MonitorController
{
    DAC DACLeft;
    DAC DACRight;
    PowerUnit PSU0;
    VCA VCA0;
    HeadphoneAmp AmpLeft;
    HeadphoneAmp AmpRight;
    Body body0;

    void setVol(int amount = 0);
    bool selectSource(int sourceNum, bool status=0);
    bool toggleCrossfeed(bool status = 0);
};

void CanPlant::OfficeWorker::makeCall(int customerId, float time)
{
    SipProvider sipnet;
    bool hookup = true;
    bool dialed = sipnet.makeCall(987654321, 123456789);
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
