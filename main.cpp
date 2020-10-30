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





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you decide to write empty functions, you will need to fill them in with code in part 3.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */



/*
Thing 1) shoe
5 properties:
    1) brand 
    2) size
    3) color
    4) condition
    5) securing method
3 things it can do:
    1) be put on
    2) be taken off
    3) be thrown away
 */

struct Shoe
{
    //brand
    std::string brand = "Nike";
    //size
    double size = 12.5;
    //color
    std::string color = "white";
    //condition
    std::string condition = "good";
    //securing method
    std::string securingMethod = "velcro";

    //be put on
    void putOn ( std::string firstShoe = "L");
    //be taken off
    void takeOff ( std::string firstShoe = "R" );
    //be thrown away
    void throwAway ( bool donate = false );
};

/*
Thing 2) Wurlitzer
5 properties:
    1) volume level
    2) vibrato amount
    3) model
    4) condition
    5) number of keys
3 things it can do:
    1) change volume 
    2) be played
    3) turn on or off
 */

struct Wurlitzer
{
    //volume level
    int volumeLevel = 6;
    //vibrato amount
    double vibratoAmount = .5;
    //model
    std::string model = "200a";
    //condition
    std::string condition = "good";
    //number of keys
    int numKeys = 49;

    //change volume
    int changeVolume ( int knobPosition );
    //be played
    void play ( int note = 23 );
    //turn on or off
    bool power ( bool switchPosition = true );
};

/*
Thing 3) electric bass
5 properties:
    1) number of strings
    2) type of pickups
    3) brand
    4) model 
    5) age 
3 things it can do:
    1) be played
    2) be sold
    3) be restrung
 */

struct ElectricBass
{
    //number of strings
    int numStrings = 4;
    //type of pickups
    std::string pickup = "precision";
    //brand
    std::string brand = "fender";
    //model
    std::string model = "precision";
    //age
    int yearMade = 1974;

    //be played
    void play ( int note =  18 );
    //be sold
    void sold ( int price = 1200 );
    //be restrung
    void restring ( int timeSinceRestrung = 0 );
};

/*
Thing 4) city
5 properties:
    1) population 
    2) size
    3) GDP
    4) average age
    5) country
3 things it can do:
    1) vote
    2) be afected by natural disaster
    3) build public transportation
 */

struct City
{
    //population
    int population = 4649231;
    //size
    float size = 34.65f;
    //GDP
    double GDP = 65569340958.98;
    //average age
    int averageAge = 43;
    //country
    std::string counntry = "New Zeland";

    //vote
    void vote ( int totalBallots = 4285444 );
    //be afected by natural disaster
    void naturalDisaster ( int percentOfPropertiesDamaged = 47 );
    //build public transportation
    void buildTransportation ( int cost = 2433244 );
};
/*
Thing 5) bedroom
5 properties:
    1) ocupants name
    2) size of bed
    3) floor material 
    4) floor space in square ft
    5) time since was last cleaned
3 things it can do:
    1) be slept in
    2) be cleaned
    3) be rearranged
 */

struct Bedroom
{
    //ocupants name
    std::string name = "Josh";
    //size of bed
    float bedSize = 9.23f;
    //floor material 
    std::string floor = "maple";
    //floor space in square ft
    int floorSpace = 43;
    //time since was last cleaned
    int lastCleaned = 14;

    struct Bed
    {
        //height from floor
        int height = 14;
        //number of pillows
        int pillows = 4;
        //headboard material
        std::string headboardMaterial = "maple";
        //size
        std::string size = "full";
        //age of bed
        int bedAge = 3;

        //makebed
        void makeBed ( bool newSheets = true);
        //sleep
        void sleepInBed (std::string sleeper = "jeff", float timeSlept = 8.3f);
        //new matress
        void newMatress ( std::string brand = "tempurpedic");
    };
    //be slept in
    void sleepIn ( int timeAwake = 843 );
    //be cleaned
    void clean ( bool newSheets = true );
    //be rearranged
    void rearange ( bool bedMoved = false, bool newFurnature = false );
};

/*
Thing 6) kitchen
5 properties:
    1) number of cabinets
    2) list of cooking utilities
    3) number of dirty dishes
    4) capacity of fridge
    5) floor space in square ft
3 things it can do:
    1) be cooked in
    2) fridge stocked up 
    3) be cleaned
 */

struct Kitchen
{
    //number of cabinets
    int cabinets = 18;
    //list of cooking utilities
    std::string cookingUtilities = "pan";
    //number of dirty dishes
    int dirtyDishes = 8;
    //capacity of fridge
    int fridgeSpace = 48;
    //number of windows
    int windows = 9;

    //be cooked in
    void cook ( bool stoveUsed = true );
    //fridge stocked up 
    void fridgeRestock ( int fridgeCapacityPercent = 82 );
    //be cleaned
    void clean ( bool dishwasherRan = false );
};

/*
Thing 7) bathroom
5 properties:
    1) mirror size
    2) number of sinks
    3) number of items on counter
    4) time since was last cleaned
    5) floor space in square ft
3 things it can do:
    1) shower used
    2) toilet used
    3) be cleaned
 */

struct Bathroom
{
    //mirror size
    int mirrorSize = 8;
    //number of sinks
    int numSink = 2;
    //number of items on counter
    int counterItems = 8;
    //time since was last cleaned
    int timeSinceCleaned = 5;
    //toilet height in inches
    int toiletHeight = 17;

    struct Shower
    {
        //head height
        int headHeight = 64;
        //in bath
        bool inBath = false;
        //enclosure
        std::string enclosure = "curtain";
        //water temperature
        int waterTemp = 102;
        //time in shower
        int showerlength = 12;

        //adjust water amount
        int waterAmount ( float handlePosition = 0.5f  );
        //adjust water temp
        int adjustWaterTemp (float coldPosition = 0.32f , float hotPosition = 0.69f);
        //drain clog
        void drainClog ( std::string stuckObject = "hair");
    };
    //shower used
    void useShower ( Shower Shower );
    //toilet used
    void useToilet ( bool seatDownn = false );
    //be cleaned
    void clean ( bool bleachUsed = false );
};

/*
Thing 8) living room
5 properties:
    1) number of sitting places
    2) size of television
    3) number of windows
    4) color of walls
    5) floor space in square ft
3 things it can do:
    1) tv used 
    2) be painted
    3) furniture rearanged
 */

struct LivingRoom
{
    //number of sitting places
    int sittingPlaces = 3;
    //size of television
    int TVsize = 42;
    //number of windows
    int windows = 3;
    //color of walls
    std::string wallColor = "red";
    //number of doors
    int doors = 3;

    //tv used 
    void useTV ( bool netflix = true );
    //be painted
    void paintRoom ( bool newcolor = false );
    //furniture rearanged
    void rearange ( bool newfurnature = false);
};

/*
Thing 9) garage
5 properties:
    1) number of car spots
    2) amount of doors
    3) amount of windows
    4) number of items of storage inside
    5) floor space in square ft
3 things it can do:
    1) car can be parked inside
    2) door can open 
    3) used for alternative uses 
 */

struct Garage
{
    //number of car spots
    int carSpots = 1;
    //amount of doors
    int doors = 1;
    //number of windows
    int windows = 8;
    //number of items of storage inside
    int items = 41;
    //number of lights
    int lights = 2;

    //car can be parked inside
    void parkCar ( bool spotAOcupied = true, bool spotBOcupied = true, bool spotCOcupied = true );
    //door can open 
    void doorOpen ( int openSource = 2 );
    //used for alternative uses 
    bool carUsage ( std::string garageUsage = "art studio");
};

/*
Thing 10) House
5 properties:
    1) bedroom
    2) kitchen
    3) bathroom
    4) living Room
    5) garage
3 things it can do:
    1) add room
    2) be sold
    3) be demolished
 */

struct House
{
    //bedroom
    Bedroom sarasRoom;
    //kitchen
    Kitchen cookery;
    //bathroom
    Bathroom lavatory;
    //living Room
    LivingRoom familyRoom;
    //garage
    Garage storage;

    //add room
    void addRoom ( std::string kindOfRoom );
    //be sold
    void sellHouse ( int askingPrice = 899436, int soldPrice = 804398 );
    //be demolished
    void demolish ( int originalWallsRemaining = 1 );
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
