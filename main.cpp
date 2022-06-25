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
    int catEars = 2;
    std::string catName = "Fluffers";
    float dailyFoodIntake = 1.4f;
    std::string furColor = "brown";
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
        void roamNeighborhood(bool rainyWeather, float avgCatTravels = 20.f);
    };

    void scratchFurniture(bool isChair = false, int numberOfFurniture = 10);
    void makeNoise(std::string noise = "meow", bool foodBowlEmpty = true);
    bool sleep(bool isAsleep = true);

    Kitten kittenJunior; 
};

void Cat::Kitten::feed(float singlePortion, bool isHungry)
{
    if(isHungry)
    {
        singlePortion = 6.f;
    }
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
void Cat::makeNoise(std::string noise, bool foodBowlEmpty)
{
    if(foodBowlEmpty)
    {
        noise = "meow";
    }
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
    int numOfRack = 3;
    int maxTempOven = 450;
    std::string fuelType = "gas";
    int numOfTops = 4;
    int width = 36;

    struct RangeControls
    {
        std::string clockSettingOption = "24hrs";
        std::string controlPanelColor = "chrome";
        int controlPanelWidth = 24;
        bool supportsWifi = true;
        bool isAnalog = false;

        std::string informCurrentTime (bool timeUpdated);
        void indicateRepairDate (std::string date, bool needsRepair);
        bool selfCleans (bool heavyCleaning = true, std::string setting = "");
        
    };

    void consumeFuel ( std::string fuelSource, bool rangeOn);
    void breaksDown (int ageOfHeatingElement);
    int heatsTheKitchen (float durationOperated);

    RangeControls updatedSettings;
};
std::string Range::RangeControls::informCurrentTime (bool timeUpdated)
{
    std::string updatedTime, currentTime;
    if(timeUpdated) 
        return updatedTime;
    return currentTime;

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
        return heavyCleaning;
    return !heavyCleaning;
} 


struct ShoppingCart 
{
    std::string cartMaterial = "aluminum";
    int numWheels = 4;
    std::string colorHandle = "red";
    float cartWidth = 24.1f;
    std::string cartStore = "Albertsons";

    bool carryGrocery (bool badWheels = false, float weightLimit =  40.2f);
    bool rollsDownHill (bool steepHill, bool fast);
    bool isParked (std::string cartLocation = "corral");
};

bool ShoppingCart::carryGrocery (bool badWheels, float weight)
{
    if(badWheels && weight <= 40.2f) 
        return true;
    return false;
}
bool ShoppingCart::rollsDownHill (bool steepHill, bool fast)
{
    if(steepHill) 
        return fast;
    return !fast;
}
bool ShoppingCart::isParked (std::string cartLocation)
{
    if(cartLocation == "corral") 
        return true;
    return false;
}

struct Wind
{
    double speed = 3.4234898;
    std::string direction = "North West";
    std::string definition = "movement in air molecules";
    std::string cause = "difference in gas density";
    std::string use = "wind energy";

     bool transportSeeds (int numSeed = 4, float gust = 3.42f);
     bool turnTurbines (std::string, float gust = 34.2f);
     void helpBirdTravel (std::string direction2, bool birdFly, float gust = 34.2f);
}; 
bool Wind::transportSeeds (int numSeed, float gust)
{
    if(numSeed<=10 && gust > 30)
        return true;
    return false;

}
bool Wind::turnTurbines (std::string direction1, float gust)
{
    if(direction1 == "North West" && gust > 80.f)  
        return true;
    return false;
}
void Wind::helpBirdTravel (std::string direction2, bool birdFly, float gust)
{
    std::string birdDirection;
    if(direction2 == birdDirection && gust < 100)
    {
        birdFly = true;
    }
}

struct PlaneWings  
{
    float flex = 25.3f;
    int fuelCarried = 23;
    int numOfAilerons = 4;
    int numEngines = 4;
    float wingSpan = 195.3f;

    void generateLift (bool planeFly, std::string drection = "East");
    bool reduceDrag  (float tailwind = 10.f);
    void lowersLandingSpeed (int drag, bool landed =  false, float landingSpeed = 30.2f);
};

void PlaneWings::generateLift (bool planeFly, std::string direction)
{   
    int upwardForce =3;
    if(direction == "down" && upwardForce)
        planeFly = true;
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
    float wheelDiameter = 3.21f;
    int numWheels = 8;
    float weightOfNose = 34.2f;
    int numMainLandingGear  = 16;
    float pressureTire = 200.1f;

    int reduceLandingImpact (float tirePressure = 250.2f, int landingSpeed = 20);
    bool preventFuselageHittingGround (bool retractLandingGear = false);
    bool toggleLandingGear (bool takeOff = true);
};

int LandingGear::reduceLandingImpact (float tirePressure, int landingSpeed)
{
    int calculateImpact = 3 * landingSpeed;
    if(tirePressure > 200) 
        return calculateImpact;  
    return landingSpeed;
}
bool LandingGear::preventFuselageHittingGround (bool retractLandingGear)
{
    if(!retractLandingGear)
         return true;
    return false;
}
bool LandingGear::toggleLandingGear (bool takeOff)
{
    bool retractLandingGear = true;
    if(takeOff) 
        return !retractLandingGear;
    return retractLandingGear; 
}

struct PlaneTail 
{
    float weightLowerRudder =  2400.1f;
    float lengthOfLowerRudder = 421.5f;
    std::string auxPower = "helps plane turn";
    float weigtUpperRudder = 2400.1f;
    float heightUpperRudder = 421.5f;
    int powerConsumed = 1;
    
    void showAlertMsg (bool);
    void consumePower (bool);
    void turnPlane (bool lowerRudderOpen = true);
};

void alert()
{
    std::cout << "Electricals are running" << std::endl;
}

void PlaneTail::showAlertMsg (bool switchOn)
{ 
    // when the switch is on, alert to pilot electicals are running
    if(switchOn)
        alert();
    std::cout << "Electricals are not running" << std::endl;
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
        right = true; 
    std::cout << "Stay on course" << std::endl;
}

struct PassengerCabin
{
    int numSeats = 416;
    std::string seatMaterial = "leather";
    int numToilets = 4;
    float weightCarryOn = 1;
    float aisleWidth = 42.1f;

    void carryPassengers (int numPassengers = 200);
    void carryToilets (int numOfToilets);
    void blanketsAlert (int numPassengers, int numBlanketsPerPassenger);
};

using namespace std;

void PassengerCabin::carryPassengers (int numPassengers)
{
    cout << "Carrying: " << numPassengers << "passengers"<<endl;
}

void PassengerCabin::carryToilets (int numOfToilets)
{
    cout << "Carrying: " << numOfToilets << "toilets"<<endl;  
}

void PassengerCabin::blanketsAlert (int numPassengers, int numBlankets)
{
    if(numPassengers < numBlankets)
    {
        cout << "Carrying: " << numBlankets << "blankets"<<endl;
    }
    cout << "Stock " << (numPassengers - numBlankets) << "more blankets at least" << endl;
}

struct Fuselage
{
    float thicknessFuselageWall = 24.2f;
    int weightExteriorPaint = 4233;
    std::string planeMaterial = "aluminum";
    float diameterFuselage = 20.2f;
    float weightFuselage = 234.4f;

    void formsPlaneStructure (float fuselageDiameter = 234.3f);
    bool keepsHeatOut (std::string fuselageMaterial);
    void storeCargo (float cargoWeightLimit = 567.f);
};
void Fuselage::formsPlaneStructure (float fuselageDiameter)
{
    float planeBodyWidth = 20.f;
    planeBodyWidth = fuselageDiameter;
}
bool Fuselage::keepsHeatOut (std::string fuselageMaterial)
{
    if(fuselageMaterial == "aluminum") 
        return true;
    return false;
}
void Fuselage::storeCargo (float cargoWeight)
{
    int weightLimit = 1;
    if(cargoWeight < weightLimit)
        std::cout << "load cargo" << std::endl;
}

struct JumboJet
{
    PlaneWings rightWings;
    LandingGear wheels;
    PlaneTail lowerRudder;
    PassengerCabin touristClass;
    Fuselage lastRepair; 

    void carryPassengers(std::string destination, int numOfPassengers);
    bool fly(bool safetyInspection, double gust);
    void carryCargo(int maxWeightPermitLuggagePerPassenger);
}; 

void JumboJet::carryPassengers(std::string destination, int numOfPassengers)
{
    std::cout << "Carrying " << numOfPassengers << " to " << destination << std::endl;
}

bool JumboJet::fly(bool safetyInspection, double gust)
{
    return safetyInspection && gust < 40; 
}

void JumboJet::carryCargo(int maxWeightPermitLuggagePerPassenger)
{
    std::string checkWeight = (maxWeightPermitLuggagePerPassenger <= 1) ?  "pass": "fail";
    if(checkWeight == "pass") 
        std::cout << "Load cargo" << std::endl;
    std::cout << "Do not load cargo" << std::endl;
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
}

