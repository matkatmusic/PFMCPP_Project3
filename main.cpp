/*
Project 3 - Part 1e / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct for each of your 10 types. i.e.:
*/
struct CellPhone
{

};
/*
2) Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
 */

/*
 example:  

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

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};


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

struct shoe
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
    void putOn ( shoe shoe );
    //be taken off
    void takeOff ( shoe shoe );
    //be thrown away
    void throwAway ( shoe shoe );

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

struct wurlitzer
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
    void play ( wurlitzer wurlitzer );
    //turn on or off
    bool power ( wurlitzer wurlitzer );

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

struct electricBass
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
    void play ( electricBass electricBass );
    //be sold
    void sold ( electricBass electricBass );
    //be restrung
    void restring ( electricBass electricBass );

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

struct city
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
    void vote ( city city );
    //be afected by natural disaster
    void naturalDisaster ( city city );
    //build public transportation
    void buildTransportation ( city city );

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

struct bedroom
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

     struct bed
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
    void sleepIn ( bedroom bedroom );
    //be cleaned
    void clean ( bedroom bedroom );
    //be rearranged
    void rearange ( bedroom bedroom );

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

struct kitchen
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
    void cook ( kitchen kitchen );
    //fridge stocked up 
    void fridgeRestock ( kitchen kitchen );
    //be cleaned
    void clean ( kitchen kitchen );

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

struct bathroom
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

    struct shower
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
    void useShower ( shower shower );
    //toilet used
    void useToilet ( bathroom bathroom );
    //be cleaned
    void clean ( bathroom bathroom );

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

struct livingRoom
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
    void useTV ( livingRoom livingRoom );
    //be painted
    void paintRoom ( livingRoom livingRoom );
    //furniture rearanged
    void rearange ( livingRoom livingRoom );

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

struct garage
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
    int carsInside ( livingRoom livingRoom );
    //door can open 
    void paintRoom ( livingRoom livingRoom );
    //used for alternative uses 
    void rearange ( livingRoom livingRoom );

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

struct house
{

    //bedroom
    bedroom sarasRoom;
    //kitchen
    kitchen cookery;
    //bathroom
    bathroom lavatory;
    //living Room
    livingRoom familyRoom;
    //garage
    garage storage;

    //add room
    void addRoom ( std::string kindOfRoom );
    //be sold
    void sellHouse ( house );
    //be demolished
    void demolish ( house );

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
