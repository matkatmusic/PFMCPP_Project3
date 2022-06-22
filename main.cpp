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
 */



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

        void feed(float singlePortion, bool isHungry);
        void pet(bool isAffectionate, float minutesToPet);
        int roamNeighborhood(bool rainyWeather, float avgCatTravels = 20.f);
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

        void informTime (bool timeUpdated);
        void indicateRepairDate (int date, float needsRepair);
        bool selfCleans (std::string brand, bool settingsOn);
        
    };

    // 1) consumes fuel 
    void consumeFuel ( std::string fuelSource, bool rangeOn);
    // 2) breaks down
    void breaksDown (int ageOfHeatingElement);
    // 3) boil water
    int heatsTheKitchen (float durationOperated);

    RangeControls updatedSettings;
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
    double speed = 3.4234898;
    // 2) direction (std::string)
    std::string direction = "North";
    // 3) its definition (std:: string)
    std::string definition = "movement in air molecules";
    // 4) its cause (std:: string)
    std::string cause = "difference in gas density";
    // 5) its use (std:: string)
    std::string use = "wind energy";

    // 1) it transports seeds
     void transportSeeds (int numSeed = 4, float gust = 3.42f);
    // 2) it turns wind turbines 
     void turnTurbines (std::string direction, bool turnTurbine = true, float gust = 34.2f);
    // 3) it helps birds travel 
     void helpBirdTravel (std::string direction, bool birdFly, float gust = 34.2f);

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

    // 1) generates lift 
    void generateLift (bool planeFly, std::string drection = "East");
    // 2) reduces drag
    void reduceDrag  (float gust = 80.23f);
    // 3) lowers landing speed 
    bool lowersLandingSpeed (int drag, bool landed =  false, float landingSpeed = 30.2f);

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

    // 1) dissipates the kinetic energy of landing impact
    void reduceLandingImpact (float tirePressure = 250.2f);
    // 2) prevents the fuselage from hitting the ground
    void preventFuselageHittingGround (bool fuselageHitGround = false);
    // 3) support the plane during takeoff
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
    // 2) carry toilets
    void carryToietls (int numOfToilets);
    // 3) carry 
    void carryBlankets (int numPassengers, int numBlanketsPerPassenger);
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
    void formsPlaneStructure (float fuselageDiameter = 234.3f);
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

    // 1) carry passengers
    int carryPassengers(std::string destination, int numOfPassengers);
    // 2) Taxi to runway
    bool fly(bool safetyInspection, double gust);
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
