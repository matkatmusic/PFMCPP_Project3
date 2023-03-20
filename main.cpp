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
    int distanceTraveled=0;

    struct Foot
    {
        int footSize;
        void stepForward();
        int stepSize();
    };
    Foot leftFoot;
    Foot rightFoot;

    void run( int howFast, bool startWithLeftFoot);

    
   
};

void Person::Foot::stepForward()
{
    //i'm not sure i understand the purpose of this function
}
int Person::Foot::stepSize()
{
    return 6;
}


void Person::run (int howFast, bool startWithLeftFoot)
{
    
    if (startWithLeftFoot)
    {
        leftFoot.stepForward();
        rightFoot.stepForward();
    }
    else
    {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }
distanceTraveled += (leftFoot.stepSize() + rightFoot.stepSize())*howFast;
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
    int powerInDb = 0;

    void startToPlay();
    void playLouder(int howLoud);
    void stopToPlay();
};

void StringedInstrument::startToPlay()
{
    //the music begins
}

void StringedInstrument::playLouder(int howLoud)
{
powerInDb += howLoud;  
}

void StringedInstrument::stopToPlay()
{
    //the music begins
}

struct Bicycle 
{
    int wheelNumber = 2;
    float weelDiameter = 70.5f;
    float saddleHeight = 60.4f;
    int maximumSpeed = 30;
    int speedNumber = 6;
    int bicycleSpeed = 30;
    

     struct Wheel 
    {
        bool tubeless = true;
        int raysNumber = 36;
        float tireWidth = 6.2f;
        float rayLength = 30.2f;
        float tireDiameter = 80.5f;
        float wheelSpeed = 20.0f;
    
        void slowDown(float brakingPower);
        void stop();
        void speedUp();
        void start();
    };

    void changeSpeed(Wheel frontWheel, Wheel backWheel);
    void speedUp (int howMuch, Wheel frontWheel, Wheel backWheel);
    void start(Wheel frontWheel, Wheel backWheel);
};

void Bicycle::Wheel::slowDown(float brakingPower)
{
   wheelSpeed /= brakingPower;
}
void Bicycle::Wheel::stop()
{
    //the wheel stops
}
void Bicycle::Wheel::speedUp()
{
    //the wheels speeds up
}
void Bicycle::Wheel::start()
{
    //the wheel starts
}

void Bicycle::changeSpeed(Wheel frontWheel, Wheel backWheel)
{
    frontWheel.speedUp();
    backWheel.speedUp();
}
void Bicycle::speedUp (int howMuch, Wheel frontWheel, Wheel backWheel)
{
    frontWheel.speedUp();
    backWheel.speedUp();
    bicycleSpeed *= howMuch;
}
void Bicycle::start(Wheel frontWheel, Wheel backWheel)
{
    frontWheel.start();
    backWheel.start();
}


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
        float impedance = 8.0f;
        float depth = 5.3f;
        float membraneDiameter = 3.4f;
        std::string brand = "sennheiser";
        float earDistance = 2.5f;
    
        void membraneUp(float currentIntensity);
        void decreaseVolume();
        void increaseVolume();
    };

    void connect();
    void increaseVolume(Speaker leftSpeaker,Speaker rightSpeaker);
    void decreaseVolume(Speaker leftSpeaker,Speaker rightSpeaker);
};

void Headphone::Speaker::membraneUp(float currentIntensity)
{
    impedance *= currentIntensity;
}
void Headphone::Speaker::decreaseVolume()
{
    // the volume decreases
}
void Headphone::Speaker::increaseVolume()
{
     // the volume decreases
}

void Headphone::connect()
{
    //the headphone connects
}
void Headphone::increaseVolume(Speaker leftSpeaker,Speaker rightSpeaker)
{
    leftSpeaker.increaseVolume();
    rightSpeaker.increaseVolume();
}

void Headphone::decreaseVolume(Speaker leftSpeaker,Speaker rightSpeaker)
{
    leftSpeaker.decreaseVolume();
    rightSpeaker.decreaseVolume();
}


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
    float cutHeight = 8.3f;
    float length = 60.5f;
    float width = 40.2f;

    void start();
    void raiseTheBlade(float howMuch);
    void lowerTheBlade(float howMuch);
};

void TableSaw::start()
{
    //the tablesaw starts
}
void TableSaw::raiseTheBlade(float howMuch)
{
    cutHeight *= howMuch;
}

void TableSaw::lowerTheBlade(float howMuch)
{
    cutHeight *= howMuch;
}

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

void Jointer::increaseHeight()
{
    //increase height of the jointer
}
void Jointer::decreaseHeight()
{
    //decrease height of the jointer
}
void Jointer::start()
{
    //the jointer starts
}

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

void VacuumCleaner::start()
{
    //the vacuum cleaner starts
}
void VacuumCleaner::stop()
{
    //the vacuum cleaner stops
}
bool VacuumCleaner::isBagFull()
{
    //check if the bag is full or not
    return true;
}

struct PlungeSaw 
{
    int power = 900;
    float height = 9.2f;
    float angle = 46.5f;
    float bladeDiameter = 25.3f;
    int rotationSpeed = 5000;

    void adjustTheHeight(float newHeight);
    void adjustTheAngle(float newAngle);
    void start();
};

void PlungeSaw::adjustTheHeight(float newHeight)
{
    height=newHeight;
}
void PlungeSaw::adjustTheAngle(float newAngle)
{
    angle=newAngle;
}
void PlungeSaw::start()
{
    //the plungesaw starts
}

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

void WoodShop::joinBoards()
{
    //a lot of functions to join 2 boards
}
void WoodShop::cutBoard()
{
    //a lot of functions to cut a board
}
void WoodShop::planeBoard()
{
    //a lot of functions to plane a board
}

int main()
{
    std::cout << "good to go!" << std::endl;
}
