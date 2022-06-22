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

    struct Kitten 
    {
        int birthYear = 2020;
        bool isNice = false;
        int numLegs = 4;
        int numWhiskers = 20;
        std::string catBreed = "Tabby";

        void feedKitten(float singlePortion, bool catHungry);
        void petKitten(bool catAffectionate, float minutesToPet);
        int milesKittenTravelsDaily(bool rainyWeather, float avgCatTravels = 20.f);
    };

    void scratchFurniture(bool isChair = false, int numberOfFurniture = 10);
    void makeNoise(std::string noise = "meow", bool foodBowlEmpty = true);
    bool sleep(bool nightTime);

    Kitten kittenJunior; 
};
/*
Thing 2) Range
 */
struct Range
{
    // 1) number of racks in the oven (int)
    int numOfRack = 3;
    // 2) maximum temperature its oven can reach (int)
    int maxTempOven = 450;
    // 3) its fuel type (std::string)
    std::string fuelType = "gas";
    // 4) number of cooktops (int)
    int numOfTops = 4;
    // 5) its width (float)
    int width = 36;

    struct RangeControls
    {
        std::string clockSettingOption = "24hrs";
        std::string controlPanelColor = "chrome";
        int controlPanelWidth = 24;
        bool supportsWifi = true;
        bool isAnalog = false;

        float measureFuelEfficiency (float outputPerMin, bool aboveAverage);
        int numOfPurchasedLastYear (int numOfBuyers, float satisfactionRating);
        void repairRange (std::string brand, int numRepairTechiniciansAvaialbe = 2);
        
    };

    // 1) bake cookies 
    void bakeCookies ( int numOfTray = 3, int numOfCookiesPerTray = 8);
    // 2) heat up food
    void heatFood (bool useCookTop = true, int numOfMins = 12);
    // 3) boil water
    int timeNeededToBoilWater (int waterInLiters, bool coldWater);

<<<<<<< HEAD
<<<<<<< HEAD
    RangeControls updatedSettings;
=======
    myRange myFirstRange;
>>>>>>> origin/Part1
=======
    myRange myFirstRange;
>>>>>>> origin/Part1
};
/*
Thing 3) shopping cart
 */
struct ShoppingCart 
{
    // 1) its material (std::string)
    std::string cartMaterial = "aluminum";
    // 2) number of wheels (int)
    int numWheels = 4;
    // 3) color of its handle (std::string)
    std::string colorHandle = "red";
    // 4) its width (float)
    float cartWidth = 24.1f;
    // 5) which store it belongs to (std::string)
    std::string cartStore = "Albertsons";

    // 1) carries groceries 
    void carryGrocery (bool badWheels = false, float weightLimit =  40.2f);
    // 2) it can roll down a hill
    void rollsDownHill (bool steepHill, float velocity = 30.2f);
    // 3) can be parked in a cart corral 
    bool isParked (std::string location = "corral", bool moves = false);
};

/*
Thing 4) wind
 */
struct Wind
{
    // 1) speed (float)
    double windSpeed = 3.4234898;
    // 2) direction (std::string)
    std::string windDirection = "North";
    // 3) its definition (std:: string)
    std::string windDefinition = "movement in air molecules";
    // 4) its cause (std:: string)
    std::string windCause = "difference in gas density";
    // 5) its use (std:: string)
    std::string windUse = "wind energy";

    // 1) it transports seeds
     void transportSeeds (int numSeed = 4, float windGust = 3.42f);
    // 2) it turns wind turbines 
     void turnTurbines (std::string windDirection, bool turnTurbine = true, float windGust = 34.2f);
    // 3) it helps birds travel 
     void helpBirdTravel (std::string windDirection, bool birdFly, float windGust = 34.2f);

}; 

/*
Thing 5) wings
 */
struct PlaneWings  
{
    // 1) flexibility in ft - can flex 26.25ft before they fail (float)
    float flex = 25.3f;
    // 2) amount of fuel each wing carries in gal (int)
    int fuelCarried = 23;
    // 3) number of ailerons on the rear of the wings (int)
    int numOfAilerons = 4;
    // 4) number of engines attached to the lower side of the wings (int)
    int numEngines = 4;
    // 5) wingspan  in ft  (float)
    float wingSpan = 195.3f;

    // 1) generate lift 
    void generateLift (bool planeFly, std::string windDrection = "East");
    // 2) reduce drag
    void reduceDrag  (float windGust = 80.23f);
    // 3) permit lower landing speed 
    bool landingSuccess (bool landed =  true, float landingSpeed = 30.2f);

};

/*
Thing 6) landing gear
 */
struct LandingGear
{
    // 1) diameter of each wheel (float)
    float wheelDiameter = 3.21f;
    // 2) number of wheels (int)
    int numWheels = 8;
    // 3) weight of the nose landing gear (float)
    float weightOfNose = 34.2f;
    // 4) number of the four main landing gear mechanisms (int)
    int numMainLandingGear  = 16;
    // 5) pressure of the tires (float)
    float pressureTire = 200.1f;

    // 1) dissipate the kinetic energy of landing impact
    void reduceLandingImpact (float tirePressure = 250.2f);
    // 2) prevent the fuselage from hitting the ground
    void preventFuselageHittingGround (bool fuselageHitGround = false);
    // 3) provide support during takeoff
    void supportDuringTakeOff (bool takeOff = true);
};

/*
Thing 7) tail
 */
struct PlaneTail 
{
    // 1) weight of lower rudder (float)
    float weightLowerRudder =  2400.1f;
    // 2) length of lower rudder (float )
    float lengthOfLowerRudder = 421.5f;
    // 3) things its auxiliary power unit can do (std::string)
    std::string auxPower = "helps plane turn";
    // 4) weight of upper rudder (float)
    float weigtUpperRudder = 2400.1f;
    // 5) height of upper rudder (float)
    float heightUpperRudder = 421.5f;

    // 1) its small engine powers the jet's electrical when on the ground
    void runSmallEngine (bool electricalsOn = true);
    // 2) its power unit powers the air-conditioning systems when on the ground
    void runPowerUnit (bool airConditioningOn = true);
    // 3) its rudder section turns the airplane from right to left in flight
    void turnPlane (bool lowerRudderOpen = true);
};
/*
Thing 8) passenger cabin
 */
struct PassengerCabin
{
    // 1) number of seats (int)
    int numSeats = 416;
    // 2) material of seat cover (std::string)
    std::string seatMaterial = "leather";
    // 3) number of toilets (int)
    int numToilets = 4;
    // 4) weight of carry-on luggage (float)
    float weightCarryOn = 1;
    // 5) aisle width (float)
    float aisleWidth = 42.1f;

    // 1) carry passengers
    void carryPassengers (int numPassengers = 200);
    // 2) run entertianment system
    void runEntertainmentSystem (int numOfScreens = 450);
    // 3) run 
    void eatMeals (int numOfMeals = 250);
};

/*
Thing 9) fuselage
 */
struct Fuselage
{
    // 1) thickness of fuselage wall in in (float)
    float thicknessFuselageWall = 24.2f;
    // 2) weight of exterior paint in lbs (int)
    int weightExteriorPaint = 4233;
    // 3) its material (std::string)
    std::string planeMaterial = "aluminum";
    // 4) diameter of the fuselage
    float diameterFuselage = 523.2f;
    // 5) weight of the fuselage 
    float weightFuselage = 234.4f;

    // 1) holds up the plane structure 
    void keepPlaneStructure (float fuselageDiameter = 234.3f);
    // 2) insulates from external temperature
    void keepsHeatOut (std::string fuselageMaterial = "material");
    // 3) stores cargo  
    void storeCargo (float cargoWeightLimit = 567.f);
};

/*
Thing 10) jumbo jet
 */
struct JumboJet
{
    // 1) wings
    PlaneWings rightWings;
    // 2) landing gear
    LandingGear wheels;
    // 3) tail
    PlaneTail lowerRudder;
    // 4) passenger cabin
    PassengerCabin touristClass;
    // 5) fuselage
    Fuselage lastRepair; 

    // 1) Compute fuel needed for trip
    int numOfPassengers(std::string destination, float flightDuration);
    // 2) Taxi to runway
    bool planeFly(bool safetyInspection, double windGust);
    // 3) Load or unload cargo
    bool carryCargo(int maxWeightPermitLuggagePerPassenger, bool cargoAreaInspectionPassed);
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
