/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 0) if you opted to not fill in any of your member functions in part2, 
    fill in ALL of your member functions
    
 1) Add a constructor for each User-Defined-Type.
    The constructor should be the first declaration in your UDT, before all member variables and member functions.
    add a std::cout message in the constructor that prints out the name of the class being constructed.  
    When you run your code, you'll see the order that your objects are created in the program output. 
 
 2) For each User-Defined-Type:
        amend some of the member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of EACH of your user-defined types in the main() function.  
    You should have at least 12 different variables declared in main(), because you have written 12 different types (including the nested types)

 4) For each instantiated UDT: 
        call each of that instance's member functions.
        You're doing this to show that your code doesn't produce warnings when you call the functions that take arguments.
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int thing = 0; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    std::cout << "UDT being constructed!" << std::endl; //1) 
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << thing << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'thing' equal to 0? " << (foo.thing == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.



struct Cat
{
    Cat();
    int catEars = 2;
    std::string catName = "Fluffers";
    float dailyFoodIntake = 1.4f;
    std::string furColor = "brown";
    double tailLength = 5.3432;

    struct Kitten 
    {    
        int birthYear = 2020;
        Kitten();
        bool isNice = false;
        int numLegs = 4;
        int numWhiskers = 20;
        std::string catBreed = "Tabby";
        

        void feed(bool isHungry);
        void pet(bool isAffectionate, float minutesToPet);
        void roamNeighborhood(bool rainyWeather, float avgCatTravels = 20.f);
    };

    void scratchFurniture(bool isChair = false, int numberOfFurniture = 10);
    void makeNoise(bool foodBowlEmpty = true);
    bool sleep(bool isAsleep = true);

    Kitten kittenJunior; 
};

Cat::Cat()
{
    std::cout << "Cat being constructed!" << std::endl;  
}

Cat::Kitten::Kitten()
{
    std::cout << "Kitten being constructed!" << std::endl;
}

void Cat::Kitten::feed(bool isHungry)
{
    float singlePortion = 0;
    if(isHungry)
    {
        singlePortion = 6.f;
    }
    std::cout << "Kitty can have " << singlePortion << " oz of food." << std::endl;
    
}

void Cat::Kitten::pet(bool isAffectionate, float minutesToPet)
{
    if(isAffectionate)
    {
        minutesToPet = 20.f;
    }
}
void Cat::Kitten::roamNeighborhood(bool rainyWeather, float avgCatTravels)
{
    float milesTraveled;
    if(!rainyWeather)
    {
        milesTraveled = avgCatTravels * 2;
    }
}
void Cat::scratchFurniture(bool isChair, int numFurnitureDestroyed)
{
    if(!isChair)
    {
       numFurnitureDestroyed += 1;
    }
        
}
void Cat::makeNoise(bool foodBowlEmpty)
{
    std::string noise = "";
    if(foodBowlEmpty)
    {
        noise = "meow";

    }
    else 
    {
        noise = "purr";
    }
    std::cout << "Cat goes: " << noise << std::endl;
}

struct Time
{
    int year = 2022, 
    month = 6, 
    day = 23, 
    hour = 7, 
    minute = 1, 
    second = 5;
    bool isPM = true;
};

bool Cat::sleep(bool isAsleep)
{
    Time startTime, endTime;
    startTime.hour = 0;
    endTime.hour = 5;
    
    if( startTime.hour > 0 && 
        startTime.isPM == false && 
        endTime.hour < 5 && 
        endTime.isPM == false )
    {
       return isAsleep;
    }
    return !isAsleep;
}


struct Range
{
    Range();
    int numOfRack = 3;
    int maxTempOven = 450;
    std::string fuelType = "gas";
    int numOfTops = 4;
    int width = 36;

    struct RangeControls
    {
        std::string clockSettingOption = "24hrs";
        RangeControls();
        std::string controlPanelColor = "chrome";
        int controlPanelWidth = 24;
        bool supportsWifi = true;
        bool isAnalog = false;

        void informCurrentTime (bool timeUpdated);
        void indicateRepairDate (std::string date, bool needsRepair);
        bool selfCleans (bool heavyCleaning = true, std::string setting = "");
        
    };

    void consumeFuel (std::string, int);
    void breaksDown (int ageOfHeatingElement);
    void heatsTheKitchen (int, int);

    RangeControls updatedSettings;
};

Range::Range()
{
    std::cout << "Range being constructed" << std::endl;
}

void Range::consumeFuel(std::string fuelSource = "electric", int energyEfficiency = 65)
{
    std::cout << "On average," << fuelSource << " convection oven has " << energyEfficiency << " percent cooking energy efficiency." << std::endl;
}

void Range::breaksDown (int ageOfHeatingElement)
{
    if( ageOfHeatingElement >= 50) 
    {
        std::cout << "It'll break down within a year." << std::endl;
    }
    if( ageOfHeatingElement> 10 && ageOfHeatingElement < 50)
    {
        std::cout << "Range can be used for a few more years." << std::endl;
    }
}

void Range::heatsTheKitchen(int durationOperated, int ovenTemp)
{
    int kitchenTemp = 70;
    if(durationOperated > 0 && ovenTemp > 0)
    {
        kitchenTemp = kitchenTemp + (ovenTemp / 100) * (durationOperated/4);
    }
    std::cout << "Currently kitchen temp is " << kitchenTemp << " due to oven use." << std::endl;
}


Range::RangeControls::RangeControls()
{
    std::cout << "Range controls being constructed" << std::endl;
}

void Range::RangeControls::informCurrentTime (bool timeUpdated)
{
    std::string updatedTime = "17:00:00", currentTime = "12:00:00";
    if(timeUpdated)
    {
        std::cout << "Time updated to: " << updatedTime << std::endl;
    }
    std::cout << "Current time is: " << currentTime << std::endl;

}
void Range::RangeControls::indicateRepairDate (std::string date, bool needsRepair)
{
    if(needsRepair)
    {
        std::cout << "Range needs repair by " << date << std::endl;
    }
    else
    {
        std::cout << "Range In Good Shape" << std::endl;
    }
    
}
bool Range::RangeControls::selfCleans (bool heavyCleaning, std::string setting)
{
    if( setting == "heavy")
    {
        return heavyCleaning;
    }
    return !heavyCleaning;
} 


struct ShoppingCart 
{
    ShoppingCart ();
    std::string cartMaterial = "aluminum";
    int numWheels = 4;
    std::string colorHandle = "red";
    float cartWidth = 24.1f;
    std::string cartStore = "Albertsons";

    bool carryGrocery (bool badWheels = false, float weightLimit =  40.2f);
    bool rollsDownHill (bool steepHill, bool fast);
    void isParked (int, std::string, int);
};

ShoppingCart::ShoppingCart()
{
    std::cout << "Shopping cart being constructed!" << std::endl;
}

bool ShoppingCart::carryGrocery (bool badWheels, float weight)
{
    if(badWheels && weight <= 40.2f)
    {
        return true;
    }
    return false;
}
bool ShoppingCart::rollsDownHill (bool steepHill, bool fast)
{
    if(steepHill)
    {
        return fast;
    }
    return !fast;
}
void ShoppingCart::isParked(int numCartsInCorral = 1, std::string  cartLocation = "corral", int totalNumCarts = 100)
{
    int missingCarts = totalNumCarts - numCartsInCorral;
    if(cartLocation == "corral")
        std::cout << "Cart is safely parked in " << cartLocation << std::endl;
    std::cout << missingCarts << " cart(s) need(s) to be moved to the cart coarral." << std::endl;
}

struct Wind
{
    Wind();
    double speed = 3.4234898;
    std::string direction = "North West";
    std::string definition = "movement in air molecules";
    std::string cause = "difference in gas density";
    std::string use = "wind energy";

     void transportSeeds (int, std::string, int);
     bool turnTurbines (std::string, float gust = 34.2f);
     void helpBirdTravel (std::string direction2, bool birdFly, float gust = 34.2f);
}; 

Wind::Wind()
{
    std::cout << "Wind being constructed!" << std::endl;
}

void Wind::transportSeeds (int numSeeds, std::string treeName, int milesTraveled)
{
    if(treeName == "poplar")
    {
        numSeeds = 25000000;
        milesTraveled = 20;
    }
    std::cout << "Strong wind can disperse " << numSeeds << " " << treeName << " seeds up to " << milesTraveled << " miles." << std::endl;
}

bool Wind::turnTurbines (std::string direction1, float gust)
{
    if(direction1 == "North West" && gust > 80.f)
    {
        return true;
    }
    return false;
}
void Wind::helpBirdTravel (std::string direction2, bool birdFly, float gust)
{
    std::string birdDirection = "West";
    if(direction2 == birdDirection && gust < 100)
    {
        birdFly = true;
    }
}

struct PlaneWings  
{
    PlaneWings();
    float flex = 25.3f;
    int fuelCarried = 23;
    int numOfAilerons = 4;
    int numEngines = 4;
    float wingSpan = 195.3f;

    void generateLift (bool, std::string);
    bool reduceDrag  (float tailwind = 10.f);
    void lowersLandingSpeed (int drag, bool landed =  false, float landingSpeed = 30.2f);
};

PlaneWings::PlaneWings()
{
    std::cout << "Plane wings being constructed!" << std::endl;
}

void PlaneWings::generateLift (bool upwardForce, std::string airDirection)
{   
    std::string planeStatus = "stays on the ground";
    if (airDirection == "down" && upwardForce)
    {
        planeStatus = "goes up";
    }
    std::cout << "When the air goes " << airDirection << " the upward force creates lift and the plane " << planeStatus << std::endl;
}

bool PlaneWings::reduceDrag (float tailwind)
{
    if(tailwind < 10.f) 
        return true;
    return false;
}
void PlaneWings::lowersLandingSpeed (int drag, bool landed, float landingSpeed )
{
    if(!landed)
    {
        landingSpeed -= drag;
    }
}

struct LandingGear
{
    LandingGear();
    float wheelDiameter = 3.21f;
    int numWheels = 8;
    float weightOfNose = 34.2f;
    int numMainLandingGear  = 16;
    float pressureTire = 200.1f;

    int reduceLandingImpact (float tirePressure = 250.2f, int landingSpeed = 20);
    bool preventFuselageHittingGround (bool retractLandingGear = false);
    void toggleLandingGear (bool, std::string);
};

LandingGear::LandingGear()
{
    std::cout << "Landing gear being constructed!"  << std::endl;
}

int LandingGear::reduceLandingImpact (float tirePressure, int landingSpeed)
{
    int calculateImpact = 3 * landingSpeed;
    if(tirePressure > 200) 
    {
        return calculateImpact;  
    }
    return landingSpeed;
}

bool LandingGear::preventFuselageHittingGround (bool retractLandingGear)
{
    if(!retractLandingGear)
    {
         return true;
    }
    return false;
}

void LandingGear::toggleLandingGear (bool takeOff, std::string landingGearStatus)
{
    if(takeOff && landingGearStatus == "extended")
    {
        std::cout << "Warning! Landing gear postion: " << landingGearStatus << std::endl;
    }
    else if(takeOff && landingGearStatus == "retracted")
    {
         std::cout << "Safe flight. Landing gear position: " << landingGearStatus << std::endl;
    }
    else if(!takeOff && landingGearStatus == "extended")
    {
        std::cout << "Ready to land. Landing gear position: " << landingGearStatus << std::endl;
    }
    else if(!takeOff && landingGearStatus == "retracted") 
    {
        std::cout << "Warning! Landing gear postion: " << landingGearStatus << std::endl;
    }
}

struct PlaneTail 
{
    PlaneTail();
    float weightLowerRudder =  2400.1f;
    float lengthOfLowerRudder = 62.f;
    std::string auxPower = "helps plane turn";
    float weigtUpperRudder = 2400.1f;
    float heightUpperRudder = 62.f;
    int powerConsumed = 1;
    
    void runPowerUnit (std::string);
    void consumePower (bool);
    void turnPlane (bool lowerRudderOpen = true);
};

PlaneTail::PlaneTail()
{   
    std::cout << "Plane Tail being constructed!"  << std::endl;
}

void PlaneTail::runPowerUnit (std::string planeStatus)
{ 
    bool powerUnitRunning = false; 
    if(planeStatus == "on the ground")
    {
        powerUnitRunning = true;
    }
    std::cout << "The auxilary power unit runs while the aircraft is " << planeStatus << std::endl; 
}

void PlaneTail::consumePower (bool engineRunning)
{
    if (engineRunning) 
    {
        std::cout << "Engine running" << "\n";
        powerConsumed += 1; 
    }
    std::cout << "Small engine not running" << std::endl;
    
}

void PlaneTail::turnPlane (bool lowerRudderOpen)
{
    bool right = false;
    if(lowerRudderOpen)
    {
        right = true; 
    }
    std::cout << "Stay on course" << std::endl;
}

struct PassengerCabin
{
    PassengerCabin();
    int numSeats = 416;
    std::string seatMaterial = "leather";
    int numToilets = 4;
    float weightCarryOn = 1;
    float aisleWidth = 42.1f;

    void carryPassengers (int numPassengers = 200);
    void carryToilets (int numOfToilets, int numPassengers);
    void blanketsAlert (int numPassengers, int numBlankets);
};

using namespace std;

PassengerCabin::PassengerCabin()
{   
    cout << "Passenger cabin being constructed!"  << endl;
}

void PassengerCabin::carryPassengers (int numPassengers)
{
    cout << "Carrying: " << numPassengers << " passengers"<<endl;
}

void PassengerCabin::carryToilets (int numOfToilets, int numPassengers)
{
    cout << "One toilet allocated per " << numPassengers / numOfToilets << " passengers." << endl;  
}

void PassengerCabin::blanketsAlert (int numPassengers, int numBlankets)
{
    if(numPassengers < numBlankets)
    {
        cout << "Carrying: " << numBlankets << "blankets"<<endl;
    }
    cout << "Stock " << (numPassengers - numBlankets) << " more blankets at least!" << endl;
}

struct Fuselage
{
    Fuselage();
    float thicknessFuselageWall = 24.2f;
    int weightExteriorPaint = 595;
    std::string planeMaterial = "aluminum";
    float diameterFuselage = 20.2f;
    float weightFuselage = 234.4f;

    void formsPlaneStructure (float fuselageDiameter = 234.3f);
    bool keepsHeatOut (std::string fuselageMaterial);
    void storeCargo (float);
};

Fuselage::Fuselage()
{
    std::cout << "Fuselage being constructed!" << std::endl;
}

void Fuselage::formsPlaneStructure (float fuselageDiameter)
{
    float planeBodyWidth = 20.f;
    float thicknessExteriorPaintAdds = 1.f;
    planeBodyWidth = fuselageDiameter + thicknessExteriorPaintAdds; 
}


bool Fuselage::keepsHeatOut (std::string fuselageMaterial)
{
    std::string materialName = "aluminum";
    return fuselageMaterial == materialName;
}

void Fuselage::storeCargo (float cargoWeight)
{
    int weightLimit = 1;
    if(cargoWeight < weightLimit)
    {
        std::cout << "Load cargo!" << std::endl;
    }
    std::cout << "Warning: cargo weight over limit!" << std::endl;
}

struct JumboJet
{
    JumboJet();
    PlaneWings rightWings;
    LandingGear wheels;
    PlaneTail lowerRudder;
    PassengerCabin touristClass;
    Fuselage lastRepair; 

    void carryPassengers(std::string destination, int numOfPassengers);
    bool fly(bool safetyInspection, double gust);
    void carryCargo(int maxWeightPermitLuggagePerPassenger);
    std::string carryFuel(int);
}; 

JumboJet::JumboJet()
{
    std::cout << "Jumbo jet being constructed!" << std::endl;
}

void JumboJet::carryPassengers(std::string destination, int numOfPassengers)
{
    int precipitation = 0;
    int windInBeaufort = 0;
    std::string safeWeather = (precipitation > 0 && windInBeaufort > 11)? "unsafe": "safe";
    if(safeWeather == "unsafe")
    {
         std::cout << "Flight canceled due to " << safeWeather << " weather condition." << std::endl;
    }
    std::cout << "Carrying " << numOfPassengers << " passengers to " << destination << std::endl;
}

bool JumboJet::fly(bool safetyInspection, double gust)
{
    return safetyInspection && gust < 40; 
}

void JumboJet::carryCargo(int maxWeightPermitLuggagePerPassenger)
{
    std::string checkWeight = (maxWeightPermitLuggagePerPassenger <= 1) ?  "pass": "fail";
    if(checkWeight == "pass")
    {
        std::cout << "Load cargo" << std::endl;
    }
    std::cout << "Do not load cargo" << std::endl;
}

std::string JumboJet::carryFuel(int numTanks)
{
    std::string maxFuelInGal = "";
    if(numTanks == 7) 
    {
        return maxFuelInGal = "54000";
    }
    return maxFuelInGal = "must be under 54000";
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
    Example::main();
    std::cout << "good to go!" << std::endl;

    Cat Mittens;
    
    Mittens.makeNoise(true);
    Mittens.scratchFurniture(false, 10);
    Mittens.sleep(true);

     std::cout << "Mittens has a "<< Mittens.tailLength << " inch long " << Mittens.furColor << " tail!" <<std::endl;
   
    
    Cat::Kitten MittensJunior;
    
    MittensJunior.feed(true);
    MittensJunior.pet(true, 20);
    MittensJunior.roamNeighborhood(false, 30);
    
    std::cout << "Mittens Junior is "<< (2022 - MittensJunior.birthYear) << " year old " << MittensJunior.catBreed <<std::endl;

    
    Range myRange;

    myRange.consumeFuel("electric", 65);
    myRange.breaksDown(70);
    myRange.heatsTheKitchen(7, 420);

    std::cout << "My range has a "<< myRange.fuelType << " powered oven that reaches up to " << myRange.maxTempOven << " F in temp." << std::endl;
    
    Range::RangeControls backControls;

    backControls.informCurrentTime(false);
    backControls.indicateRepairDate("July 25th 2022", true);
    backControls.selfCleans(false, "light");

    std::cout << "The most popular model is "<< backControls.controlPanelColor << " with its cotrol panel width of " << backControls.controlPanelWidth << "." << std::endl;
    
    ShoppingCart myCart;

    myCart.carryGrocery(false, 24.f);
    myCart.rollsDownHill(false, false);
    myCart.isParked(60, "unknown", 100);

    myCart.cartStore = "Costco";

    std::cout << "The shopping carts at "<< myCart.cartStore << " have " << myCart.numWheels << " wheels and are made of " << myCart.cartMaterial << "." << std::endl;

    
    Wind westerlies;

    westerlies.transportSeeds(10, "poplar", 10);
    westerlies.turnTurbines("North West", 90.f);
    westerlies.helpBirdTravel("West", false, 80);

     std::cout << "Wind defined as "<< westerlies.definition << " mainly occurs due to " << westerlies.cause << "." << std::endl;

    PlaneWings DeltaAirWings;

    DeltaAirWings.generateLift(true, "down");
    DeltaAirWings.reduceDrag(10.f);
    DeltaAirWings.lowersLandingSpeed(10, false, 50);

     std::cout << "The jumbo jet has a wingspan of "<< DeltaAirWings.wingSpan << " ft and " << DeltaAirWings.numEngines << " engines are attached to the lower side of the wings." << std::endl;

    LandingGear noseLandingGear;
    
    noseLandingGear.reduceLandingImpact(250.2f, 20);
    noseLandingGear.preventFuselageHittingGround(false);
    noseLandingGear.toggleLandingGear(true, "retracted");

     std::cout << "The nose landing gear has  "<< noseLandingGear.numMainLandingGear/4 << " wheels and the pressure in the tires is about " << noseLandingGear.pressureTire << " psi." << std::endl;

    PlaneTail DeltaAirTail;

    DeltaAirTail.runPowerUnit("on the ground");
    DeltaAirTail.consumePower(false);
    DeltaAirTail.turnPlane(false);

    std::cout << "The tip of the tail fin is  "<< DeltaAirTail.heightUpperRudder << " above the ground." << std::endl;
    
    PassengerCabin touristClass;

    touristClass.carryPassengers(200);
    touristClass.carryToilets(12, 400);
    touristClass.blanketsAlert(200, 180);

    touristClass.seatMaterial = "polyester";

    std::cout << "The passenger cabin has two  "<< touristClass.aisleWidth << " aisles and  normally carries a maximum of " << touristClass.numSeats << " people." << std::endl;
    
    Fuselage DeltaAirFuselage;

    DeltaAirFuselage.formsPlaneStructure(234.3f);
    DeltaAirFuselage.keepsHeatOut("aluminum alloy");
    DeltaAirFuselage.storeCargo(1.f);

    DeltaAirFuselage.planeMaterial = "aluminum alloy";

    std::cout << "Much of the 747 is made from  "<< DeltaAirFuselage.planeMaterial << " covered with " << DeltaAirFuselage.weightExteriorPaint << " lbs of exterior paint." << std::endl;
    
    JumboJet Delta;

    Delta.carryPassengers("Tampa", 100);
    Delta.fly(true, 30);
    Delta.carryCargo(1);

    std::cout << "A jumbo jet carries about "<< Delta.carryFuel(7) << " gallons of fuel in 7 tanks." << std::endl;

}

