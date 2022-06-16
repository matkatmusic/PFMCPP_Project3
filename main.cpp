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
Part1 will be broken up into 5 separate steps
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct below your plain-english UDT. i.e.:

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

#if false //ignore these #if #endif lines. they're just here to prevent compiler errors.
struct CarWash
{

};
#endif
/*
    - Do this for all 10 UDTs

2) Below your plain-english UDT, Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    - Do this for all 10 UDTs
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
    - Do this for all 10 UDTs
    - if your functions return something other than 'void', add a comment explaining what is being returned.  see the example code below.
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
    - Do this for all 10 UDTs
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
    if your code produces a [-Wpadded] warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
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

        //3) a member function.  it has multiple arguments, some with default values.
        //the parameter names are related to the work the function will perform.
        void fillTank(float costPerGallon, double fuelAmountInGallons = 2.0, bool requiresDiesel = false);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips); //3) returns the number of miles traveled
    };

    //wash and wax car
    void washAndWaxCar(Car carA); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage); //3) returns the total amount charged.
    //detail the car interior
    void detailInterior(Car carB);
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  

    /*
    Pay attention to the member functions that take an instance of 'Car'
    Notice that there is a member variable of the same type.

    It makes sense to pass a Car to the function 'washAndWaxCar' because car washes service MANY cars
    However, they only service ONE car at a time.
    the carBeingServiced's value would change every time you wash and wax the car. 

    I see many students who write code emulating this format, but their usage does not make logical sense.  
    Consider the following snippet:

    struct SoccerTeam
    {
        struct Manager
        {
            ...
        };

        // train their skills
        void trainPlayerSkills(Manager managerA);
    
        Manager teamManager;
    };

    It does not make sense to pass in a new Manager whenever you are going to train your team players.
    Soccer teams have ONE manager.

    a much more relevant usage would be adding a member function that hires a new manager:

    struct SoccerTeam
    {
        struct Manager
        {
            ...
        };

        void hireNewManager(Manager newManager);
    
        Manager teamManager;
    };

    We can safely assume that the 'Manager' instance that is being passed in will be replacing the current 'teamManager' variable without looking at any other code.
    This is because the function name and function argument clearly indicate what they are/what they do.

    Your function names and parameter names should make LOGICAL SENSE.
    Readers of your code should be able to INTUITIVELY understand what your function implementations will do without actually seeing the implementations.

    Keep this in mind when you define your UDTs in this project part.
    */
};


/*
Thing 1) Cat
5 properties:
    1) number of ears  (int)
    2) its name (std::string)
    3) amount of daily food intake (float)
    4) color of its fur (std::string)
    5) length of its tail (double)
3 things it can do:
    1) it can scratch furniture
    2) it can make noises
    3) it can sleep
 */
struct Cat
{
// 1) number of ears  (int)
int catEars = 2;
// 2) its name (std::string)
std::string catName = "Fluffers";
// 3) amount of daily food intake (float)
float dailyFoodIntake = 1.4f;
// 4) color of its fur (std::string)
std::string furColor = "brown";
 // 5) length of its tail (double)
double tailLength = 5.3432;

struct Mittens 
{
int birthYear = 2020;
bool isNice = false;
};

void scratchFurniture(bool isChair = false, int numberOfFurniture = 10);
void makeNoise(std::string noise = "meow", bool foodBowlEmpty = true);
bool sleep(bool nightTime = false, float horusOfSleep = 5.2f);
};
/*
Thing 2) Range
5 properties:
    1) number of racks in the oven (int)
    2) maximum temperature its oven can reach (int)
    3) its fuel type (std::string)
    4) number of cooktops (int)
    5) its width and height (float)
3 things it can do:
    1) bake cookies 
    2) heat up food
    3) boil water
 */
struct Range
{
// 1) number of racks in the oven (int)
int numOfRack = 3;
// 2) maximum temperature its oven can reach (int)
int maxTemp = 450;
// 3) its fuel type (std::string)
std::string fuelType = "gas";
// 4) number of cooktops (int)
int numOfTops = 4;
// 5) its width (float)
int width = 36;

struct myRange 
{
std::string lastRepair = "Y1999";
};

// 1) bake cookies 
void bakeCookies ( int numOfTray = 3, int numOfCookiesPerTray = 8);
// 2) heat up food
void heatFood (bool useCookTop = true, int numOfMins = 12);
// 3) boil water
void boilWater (int waterInLiters = 1, float timeToBoil = 13.34f);
};
/*
Thing 3) shopping cart
5 properties: 
    1) its material (std::string)
    2) number of wheels (int)
    3) color of its handle (std::string)
    4) its width and height (float)
    5) which store it belongs to (std::string)
3 things it can do:
    1) carries groceries 
    2) it can roll down a hill
    3) can be parked in a cart corral 
 */

/*
Thing 4) wind
5 properties:
    1) speed (double)
    2) direction (std::string)
    3) its definition (std:: string)
    4) its cause (std:: string)
    5) its use (std:: string)
3 things it can do:
    1) it transports seeds
    2) it turns wind turbines 
    3) it helps birds travel 
 */

/*
Thing 5) wings
5 properties:
    1) flexibility in ft - can flex 26.25ft before they fail (float)
    2) amount of fuel each wing carries in gal (int)
    3) number of ailerons on the rear of the wings (int)
    4) number of engines attached to the lower side of the wings (int)
    5) wingspan  in ft  (int)
3 things it can do:
    1) generate lift 
    2) reduce drag
    3) permit lower landing speed 
 */

/*
Thing 6) landing gear
5 properties:
    1) diameter of each wheel (float)
    2) number of wheels (int)
    3) weight of the nose landing gear (float)
    4) number of the four main landing gear mechanisms (int)
    5) pressure of the tires (float)
3 things it can do:
    1) dissipate the kinetic energy of landing impact
    2) prevent the fuselage from hitting the ground
    3) provide support during takeoff
 */

/*
Thing 7) tail
5 properties:
    1) weight of lower rudder (float)
    2) length of lower rudder (float )
    3) things its auxiliary power unit can do (std::string)
    4) weight of upper rudder (float)
    5) height of upper rudder (float)
3 things it can do:
    1) its small engine powers the jet's electrical when on the ground
    2) its power unit powers the air-conditioning systems when on the ground
    3) its rudder section helps turn the airplane from right to left in flight
 */

/*
Thing 8) passenger cabin
5 properties:
    1) number of seats (int)
    2) material of seat cover (std::string)
    3) number of toilets (int)
    4) weight of carry-on luggage (float)
    5) aisle width (float)
3 things it can do:
    1) seats passengers
    2) provides entertianment system
    3) provides waste removal system
 */

/*
Thing 9) fuselage
5 properties:
    1) thickness of fuselage wall in in (float)
    2) weight of exterior paint in lbs (int)
    3) its material (std::string)
    4) diameter of the fuselage
    5) weight of the fuselage 
3 things it can do:
    1) it gives the jet its structure
    2) it provides heat insulation
    3) it provides sound insulation 
 */

/*
Thing 10) jumbo jet
5 properties:
    1) wings
    2) landing gear
    3) tail
    4) passenger cabin
    5) fuselage
3 things it can do:
    1) it can transport passengers
    2) it can fly
    3) it can carry cargo
 */


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
