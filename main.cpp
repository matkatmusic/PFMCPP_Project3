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
 If your code produces -Wconversion warnings, do NOT use static_cast<> to solve the warnings.  
 Casting has not been covered yet.
 Change your code so that no warnings are produced WITHOUT using casting.
 This usually means you have to use identical types for all variables used in an expression that is producing that conversion warning.
 */


struct StringedInstrument 
{
    int stringNumbers = 5;
    float length = 50.4f;
    float width = 30.2f;
    bool fixedEasel = true;
    int lowestNote = 48;

    void startToPlay();
    void playLouder(int howLoud);
    void stopToPlay();
};

struct Bicycle 
{
    int wheelNumber = 2;
    float weelDiameter = 70.5f;
    float saddleHeight = 60.4f;
    int maximumSpeed = 30;
    int speedNumber = 6;

     struct Wheel 
    {
        bool tubeless = true;
        int raysNumber = 36;
        float tireWidth = 6.2f;
        float rayLength = 30.2f;
        float tireDiameter = 80.5f;
    
        void slowDown(float brakingPower);
        void stop();
        void speedUp();
    };

    void changeSpeed(Wheel frontWheel, Wheel backWheel);
    void speedUp (int howMuch, Wheel frontWheel, Wheel backWheel);
    void start(Wheel frontWheel, Wheel backWheel);
};

struct Monitor 
{
    int pixelHeight = 1080;
    int pixelWidth = 1920;
    int maxBrightness = 800;
    int maxContrast = 1500;
    int power = 150;

    void increaseBrightness();
    void decreaseBrightness();
    void increaseContrast();
};

struct Headphone 
{
    int lowestFreq = 30;
    int highestFreq = 22500;
    bool hasBluetooth = false;
    float weight = 2.3f;
    float width = 30.2f;

    struct Speaker
    {
        int impedance = 8;
        float depth = 5.3f;
        float membraneDiameter = 3.4f;
        std::string brand = "sennheiser";
        float earDistance = 2.5f;
    
        void membraneUp(float currentIntensity);
        void membraneDown(float currentIntensity);
        void membraneBreak();
    };

    void connect();
    void increaseVolume(Speaker leftSpeaker,Speaker rightSpeaker);
    void decreaseVolume(Speaker leftSpeaker,Speaker rightSpeaker);
};

struct Sander
{
    float discDiameter = 150.0f;
    int speedsNumber = 6;
    int maxSpeed = 900;
    int minSpeed = 100;
    int power = 150;

    void startToSand ();
    void increaseSpeed();
    void emptyDustCollector();
};

struct TableSaw 
{
    float bladeDiameter = 30.5f;
    int power = 1500;
    float maxCutHeight = 8.3f;
    float length = 60.5f;
    float width = 40.2f;

    void start();
    void raiseTheBlade(int howMuch);
    void lowerTheBlade(int howMuch);
};

struct Jointer 
{
    int power = 1500;
    float maxWoodHeight = 12.7f;
    int rotationSpeed = 5000;
    float maxWoodWidth = 41.0f;
    float speed = 3.4f;

    void increaseHeight();
    void decreaseHeight();
    void start();
};

struct VacuumCleaner 
{
    int power = 800;
    float bagSize = 50.3f;
    float airFlow = 50.4f;
    float pipeLength = 2.5f;
    float pipeDiameter = 0.5f;

    void start();
    void stop();
    bool isBagFull();
};

struct PlungeSaw 
{
    int power = 900;
    float maxHeight = 9.2f;
    float maxAngle = 46.5f;
    float bladeDiameter = 25.3f;
    int rotationSpeed = 5000;

    void adjustTheHeight(float height);
    void adjustTheAngle(float angle);
    void start();
};

struct WoodShop
{
    Sander sander;
    TableSaw tableSaw;
    Jointer jointer;
    VacuumCleaner vacuumCleaner;
    PlungeSaw plungeSaw;

    void joinBoards();
    void cutBoard();
    void planeBoard();
};

int main()
{
    std::cout << "good to go!" << std::endl;
}
