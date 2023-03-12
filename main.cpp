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
// 5 properties:
//     1) number of strings (int)
    int stringNumbers = 5;
//     2) length (float)
    float length = 50.4f;
//     3) width (float)
    float width = 30.2f;
//     4) presence of a fixed easel (bool)
    bool fixedEasel = true;
//     5) note la plus grave possible (std::string or int)
    int lowestNote = 48;
// 3 things it can do:
//     1) start to play
    void startToPlay();
//     2) play louder
    void playLouder(int howLoud);
//     3) stop to play
    void stopToPlay();
};
/*


Thing 2) Bicycle
5 properties:
    1) wheels number (int)
    2) wheel diameter (float)
    3) height of the saddle (float)
    4) maximum speed (int)
    5) number of speeds (int)
3 things it can do:
    1) change speed
    2) speed up
    3) start

*/

struct Bicycle 
{
// 5 properties:
//     1) wheels number (int)
    int wheelNumber = 2;
//     2) wheel diameter (float)
    float weelDiameter = 70.5f;
//     3) height of the saddle (float)
    float saddleHeight = 60.4f;
//     4) maximum speed (int)
    int maximumSpeed = 30;
//     5) number of speeds (int)
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


// 3 things it can do:
//     1) change speed
    void changeSpeed(Wheel frontWheel, Wheel backWheel);
//     2) speed up
    void speedUp (int howMuch, Wheel frontWheel, Wheel backWheel);
//     3) start
    void start(Wheel frontWheel, Wheel backWheel);

   
};
/*

Thing 3) Monitor
5 properties:
    1) number of pixels in height (int)
    2) number of pixels in width (int)
    3) maximum brightness (int)
    4) maximum contrast  (int)
    5) power in w (int)
3 things it can do:
    1) increase brightness
    2) decrease brightness
    3) increase contrast

*/

struct Monitor 
{
// 5 properties:
//     1) number of pixels in height (int)
    int pixelHeight = 1080;
//     2) number of pixels in width (int)
    int pixelWidth = 1920;
//     3) maximum brightness (int)
    int maxBrightness = 800;
//     4) maximum contrast  (int)
    int maxContrast = 1500;
//     5) power in w (int)
    int power = 150;
// 3 things it can do:
//     1) increase brightness
    void increaseBrightness();
//     2) decrease brightness
    void decreaseBrightness();
//     3) increase contrast
    void increaseContrast();
};
/*

Thing 4) Headphone
5 properties:
    1) lowest frequency (int)
    2) highest frequency (int)
    3) bluetooth (bool)
    4) weight (float)
    5) width (float)
3 things it can do:
    1) plug or connect
    2) increase volume
    3) decrease volume

*/

struct Headphone 
{
// 5 properties:
//     1) lowest frequency (int)
    int lowestFreq = 30;
//     2) highest frequency (int)
    int highestFreq = 22500;
//     3) bluetooth (bool)
    bool hasBluetooth = false;
//     4) weight (float)
    float weight = 2.3f;
//     5) width (float)
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


// 3 things it can do:
//     1) plug or connect
    void connect();
//     2) increase volume
    void increaseVolume(Speaker leftSpeaker,Speaker rightSpeaker);
//     3) decrease volume
    void decreaseVolume(Speaker leftSpeaker,Speaker rightSpeaker);

   

};
/*

Thing 5) Sander
5 properties:
    1) disc diameter (float)
    2) number of speeds (int)
    3) maximum speed in rpm (int)
    4) minimum speed in rpm (int)
    5) power in w (int)
3 things it can do:
    1) start to sand
    2) increase speed
    3) empty dust collector

*/

struct Sander
{
// 5 properties:
//     1) disc diameter (float)
    float discDiameter = 150.0f;
//     2) number of speeds (int)
    int speedsNumber = 6;
//     3) maximum speed in rpm (int)
    int maxSpeed = 900;
//     4) minimum speed in rpm (int)
    int minSpeed = 100;
//     5) power in w (int)
    int power = 150;

// 3 things it can do:
//     1) start to sand
    void startToSand ();
//     2) increase speed
    void increaseSpeed();
//     3) empty dust collector
    void emptyDustCollector();
};
/*

Thing 6) Table saw
5 properties:
    1) blade diameter (float)
    2) power in w (int)
    3) maximum cuting height (float)
    4) length (float)
    5) width (float)
3 things it can do:
    1) start
    2) raise the blade
    3) lower the blade

*/

struct TableSaw 
{
// 5 properties:
//     1) blade diameter (float)
    float bladeDiameter = 30.5f;
//     2) power in w (int)
    int power = 1500;
//     3) maximum cuting height (float)
    float maxCutHeight = 8.3f;
//     4) length (float)
    float length = 60.5f;
//     5) width (float)
    float width = 40.2f;
// 3 things it can do:
//     1) start
    void start();
//     2) raise the blade
    void raiseTheBlade(int howMuch);
//     3) lower the blade
    void lowerTheBlade(int howMuch);
};
/*

Thing 7) Jointer
5 properties:
    1) power in w (int)
    2) maximum wood height (float)
    3) rotation speed (int)
    4) maximum wood width (float)
    5) speed in m/s (float)
3 things it can do:
    1) increase the height
    2) decrease the height
    3) start

*/

struct Jointer 
{
// 5 properties:
//     1) power in w (int)
    int power = 1500;
//     2) maximum wood height (float)
    float maxWoodHeight = 12.7f;
//     3) rotation speed (int)
    int rotationSpeed = 5000;
//     4) maximum wood width (float)
    float maxWoodWidth = 41.0f;
//     5) speed in m/s (float)
    float speed = 3.4f;
// 3 things it can do:
//     1) increase the height
    void increaseHeight();
//     2) decrease the height
    void decreaseHeight();
//     3) start
    void start();
};
/*

Thing 8) Vacuum cleaner
5 properties:
    1) power in w (int)
    2) size of bag (float)
    3) airflow (float)
    4) pipe length (float)
    5) pipe diameter (float)
3 things it can do:
    1) start
    2) stop 
    3) check if the bag is full

*/

struct VacuumCleaner 
{
// 5 properties:
//     1) power in w (int)
    int power = 800;
//     2) size of bag (float)
    float bagSize = 50.3f;
//     3) airflow (float)
    float airFlow = 50.4f;
//     4) pipe length (float)
    float pipeLength = 2.5f;
//     5) pipe diameter (float)
    float pipeDiameter = 0.5f;
// 3 things it can do:
//     1) start
    void start();
//     2) stop 
    void stop();
//     3) check if the bag is full
    bool isBagFull();
};
/*

Thing 9) Plunge saw
5 properties:
    1) power in w (int)
    2) maximum height (float)
    3) maximum angle (float)
    4) blade diameter (float)
    5) rotation speed (int)
3 things it can do:
    1) adjust the height
    2) adjust the angle
    3) start

*/

struct PlungeSaw 
{
// 5 properties:
//     1) power in w (int)
    int power = 900;
//     2) maximum height (float)
    float maxHeight = 9.2f;
//     3) maximum angle (float)
    float maxAngle = 46.5f;
//     4) blade diameter (float)
    float bladeDiameter = 25.3f;
//     5) rotation speed (int)
    int rotationSpeed = 5000;
// 3 things it can do:
//     1) adjust the height
    void adjustTheHeight(float height);
//     2) adjust the angle
    void adjustTheAngle(float angle);
//     3) start
    void start();
};
/*

Thing 10) Woodshop
5 properties:
    1) Sander
    2) Table saw
    3) Jointer
    4) Vacuum cleaner
    5) Plunge saw
3 things it can do:
    1) join two boards
    2) cut a board
    3) plane a board

*/



struct WoodShop
{
// 5 properties:
//     1) Sander
    Sander sander;
//     2) Table saw
    TableSaw tableSaw;
//     3) Jointer
    Jointer jointer;
//     4) Vacuum cleaner
    VacuumCleaner vacuumCleaner;
//     5) Plunge saw
    PlungeSaw plungeSaw;
// 3 things it can do:
//     1) join two boards
    void joinBoards();
//     2) cut a board
    void cutBoard();
//     3) plane a board
    void planeBoard();
};







int main()
{
    std::cout << "good to go!" << std::endl;
}
