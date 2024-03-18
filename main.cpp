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
    float distanceTraveled;
    
    struct Foot
    {
        float latitude = 0.0f; // latitude declaired with a default value
        float stepSize();
        void stepForward();
    };

    void run(float howFast, bool startWithLeftFoot);
    Foot leftFoot;
    Foot rightFoot;
};

float Person::Foot::stepSize() 
{
    return latitude; 
}

void Person::Foot::stepForward()
{
    latitude += 0.000001f;
}

void Person::run(float howFast, bool startWithLeftFoot)
{
    if(startWithLeftFoot == true)
    {
        leftFoot.stepForward();
        rightFoot.stepForward();

    }
    else
    {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }

    distanceTraveled += (leftFoot.stepSize() + rightFoot.stepSize()) * howFast;
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

struct CoffeeShop
{
    int numBaristasAtWork = 3;
    std::string coffeeBeanVariants = "Robusta, Arabica, Liberica";
    int numEcoFriendlyPackaging = 4;
    float amountRevenuePerDay = 2300.5f;   
    int numCustumorsServedPerHour = 12;
       
    float brewAndSellCoffee(float numCoffeeCups, float                    priceCoffeeCups); 
    float upsellPastriesAndSnacks(float numPastries, float numSnacks,     float pricePastries, float priceSnacks); 
    void provideRelaxingCustomerExperience();
    };

    float CoffeeShop::brewAndSellCoffee(float numCoffeeCups, float        priceCoffeeCups)
{
    numCoffeeCups = 10;
    priceCoffeeCups = 1.5f;
    return numCoffeeCups * priceCoffeeCups;
}

    float CoffeeShop::upsellPastriesAndSnacks(float numPastries,          float numSnacks, float pricePastries, float priceSnacks)
{
    numPastries = 10;
    pricePastries = 1.5f;
    numSnacks = 10;
    priceSnacks = 1.f;
    return (numPastries * pricePastries) + (numSnacks * priceSnacks);
}    

    void provideRelaxingCustomerExperience()
{
    std::cout << "The coffee shop is relaxing and inviting." <<           std::endl;
    
}



struct YogaInstitute
{
    int numYogaInstructors = 14;
    std::string YogaStyleOffered = "Hatha, Vinyasa, Power Yoga";
    int numOfPlanetFriendlyEquipment = 7;
    int numClassesOfferedPerWeek = 31;
    std::string communityAndMembershipPrograms = "Yoga Club, Yoga Summer Camp, Neighbor Yoga, Member-get-member";
        
    void leadYogaClasses();
    float payInstructor_a(float hourlyRate, float hoursWorked); 
    float towelRental(float numTowels, float  rentalPerTowel); 
    };

    void YogaInstitute::leadYogaClasses()
{
    std::cout << "The yoga institute is leading yoga classes." <<         std::endl;
}

    float YogaInstitute::payInstructor_a(float hourlyRate, float          hoursWorked)
{
    hourlyRate = 45.5f;
    hoursWorked = 40;
    return hourlyRate * hoursWorked;
}

    float YogaInstitute::towelRental(float numTowels, float               rentalPerTowel)
{
    numTowels = 10;
    rentalPerTowel = 1.5f;
    return numTowels * rentalPerTowel;
}


struct PublicLibrary
{
    int numBooksInCollection = 43569;
    std::string mediaFormatsAvailable = "Hardcover, Paperback, E-         books, Audiobooks, DVDs";
    std::string technologyAndResources = "Digital Librarian, online       search and reservations, Printing, Scanning, Streaming, Self          Service Checkout, Self Service Return";    
    std::string typesOfEventsOffered = "Book Clubs, Author Talks,         Book Signings, Children's Storytime, Art Exhibitions, Panel           Discussions, Holiday Programs"; 
    std::string communityOutreachAndServices = "Bookstore, Library        Cards, Bulletin Board, Newspaper Reading Area, Turist Flyers";

    struct PersonalLenderIdCard
    {
        bool isValid = false;
        int age = 36;        
        int numBooksStatusDueReturn = 0;
        int numPrePaidCoffeeCredits = 3;
        bool CanTakeHomeSencoredMaterials = true;
            
        float TopUpCoffeeCredits (float costPerCredit, int                    numCredits); 
        float chargeLateReturns(int numLateBooks, float                       amountLateFee); 
        bool hasUnpaiedFees(bool hasUnpaidFees); 
    }; 
    
    void provideAccessToBooksAndResources();
    bool ImpoundPersonalLenderIdCard(bool feesNotPaid);
    float chargeLateReturnFees(float amountDue); 
};

    void PublicLibrary::provideAccessToBooksAndResources()
{
    std::cout << "The public library is providing access to books and     resources." << std::endl;
}

    bool PublicLibrary::ImpoundPersonalLenderIdCard(bool feesNotPaid)
{
    feesNotPaid = true;
    return feesNotPaid; 
    // std::cout << "Confiscate the persons Lender ID-card. " <<             std::endl;
}


struct DogPark
{
    int sizeOfParkInSquareFeet = 3500;
    std::string amenitiesAvailable = "Fenced-in play areas, agility       equipment, water stations, waste disposal stations, benches,          shade structures";
    std::string rulesAndRegulations = "leash requirements,                vaccination requirements, licensing policies, owner                   responsibilities, guidelines for dog behavior";
    bool communityInvolvement = true; 
    std::string accessibilityAndInclusivity = "Wheelchair-accessible      paths, designated parking spaces";

        struct Accessibility
        {
            void wheelchairAccessibility(bool                                     wheelchairAccessiblePaths = true);
            void sensoryAccessibility(std::string tactileMaps,                    std::string brailleSignage);
            void cognitiveAccessibility(std::string clearSignage,                 std::string intuitiveWayfinding);
            void AccessibilityScore(Accessibility);
            bool complaintProcesInPlace = true;
            
            void checkAccessibility(std::string installAllRamps, bool             cleearAllPaths = true, int numWorkingToilets = 5);
            bool testingEmergincyReadyness(std::string emergencyType,             std::string subjectTypeHuman, bool requiresHeartChock =               false);
            int inforcingParkRules(int numLeachVialations, int                    numDogOwnerConflictSolving, bool policeInvolved); 
        };

    void provideOffLeashExerciseAndSocialization();
    void fosterCommunityConnections();
    void spreadsResponsibleDogOwnership();
    };
    
    void DogPark::provideOffLeashExerciseAndSocialization()
{
    std::cout << "The dog park is providing off leash exercise and        socialization." << std::endl;
}

    void DogPark::fosterCommunityConnections()
{
    std::cout << "The dog park is fostering community connections."       << std::endl; 
}

    void DogPark::spreadsResponsibleDogOwnership()
{
    std::cout << "The dog park is spreading responsible dog               ownership." << std::endl;    
}



struct DotMatrixScreen
{
    int numDotsPerRow = 160; 
    int numRows = 144;
    int numColumns = 160;
    float levelOfBrightnessFrom1To10 = 7;  
    float averagePowerConsumptionPerHourInWatt = 0.7f;

    float setBrightness(float BrightnessLvl); 
    void displayImages();
    void displayGraphics();
};
    
    float DotMatrixScreen::setBrightness(float BrightnessLvl)
{
    BrightnessLvl = 7;
    return BrightnessLvl; 
}

    void DotMatrixScreen::displayImages()
{
    std::cout << "The dot matrix screen is displaying images." <<         std::endl;
}
    void DotMatrixScreen::displayGraphics()
{
    std::cout << "The dot matrix screen is displaying graphics." <<       std::endl;    
}

struct DirectionalPadControler
{
    int numOfDirectSupported = 4;
    int numSencors = 4;  
    bool tactileFeedback = true;
    std::string physicalDesign = "xShaped";
    std::string padColor = "Black";

    void controlPlayerMovement();
    void confirmSettings();
    void selectHighscorersInitials();
};

    void DirectionalPadControler::controlPlayerMovement()
{
    std::cout << "The directional pad controler is controlling player     movement." << std::endl;
}
    void DirectionalPadControler::confirmSettings()
{
    std::cout << "The directional pad controler is confirming             settings." << std::endl;
}
    void DirectionalPadControler::selectHighscorersInitials()
{
    std::cout << "The directional pad controler is selecting              highscorers initials." << std::endl;
}

struct GameButtons
{
    int numGameButtons = 2;
    int tactileFeedback = true;
    std::string physicalDesign = "round, black";
    bool binarySencor = true;
    float buttonSizeØInMm = 0.9f;    
     
    void executeAction();
    void adjustSettings();
    void confirmHighscoerInitials();
};

    void GameButtons::executeAction()
{
    std::cout << "The game buttons is executing action." << std::endl;
}

    void GameButtons::adjustSettings()
{
    std::cout << "The game buttons is adjusting settings." <<             std::endl;
}

    void GameButtons::confirmHighscoerInitials()
{
    std::cout << "The game buttons is confirming highscoer initials."     << std::endl;
}


struct Housing
{
    std::string housingMaterial = "plastic";
    std::string housingColor = "LightGray";
    float sizeHeightInMm = 148;
    float sizeWidthInMm = 90;
    float sizeDepthInMm = 32;

    void secureGameCartridgeConnection();
    void keepElectronicComponentsInPlace();
    void offerComfertableGamingExperience();
};

    void Housing::secureGameCartridgeConnection()
{
    std::cout << "The housing is secureing game cartridge                 connection." << std::endl;
}

    void Housing::keepElectronicComponentsInPlace()
{
    std::cout << "The housing is keeping electronic components in         place." << std::endl;    
}
    void Housing::offerComfertableGamingExperience()
{
    std::cout << "The housing is offering comfertable gaming              experience." << std::endl;
}

struct GameCartridge
{
    bool batteryPoweredMemory = true;
    int RamCapasityInKb = 128;
    std::string cartridgeColor = "LightGray";   
    bool gameboyCompatibility = true;
    bool LockoutChip = true;

    bool authenticationCheckingCartridge(bool isAuthenticated); 
    std::string gamesuccesfullyLaoded(bool gameLoaded); 
    void insertGameCartridge();
    };

    bool GameCartridge::authenticationCheckingCartridge(bool              isAuthenticated)
{
    isAuthenticated = true;
    return isAuthenticated;
}

    std::string GameCartridge::gamesuccesfullyLaoded(bool gameLoaded)
{
    gameLoaded = true;
    return "The game has been successfully loaded.";
}

    void GameCartridge::insertGameCartridge()
{
    std::cout << "The game cartridge has been inserted." << std::endl;
}

struct Gameboy
{
    DotMatrixScreen dotMatrixScreen; 
    DirectionalPadControler directionalPadControler;
    GameButtons gameButtons;
    Housing housing;
    GameCartridge gameCartridge;

    void playGame(std::string gameTitle);
    void loadGame(std::string gameTitle);
    void storeHighScoreLists();
    };

    void Gameboy::playGame(std::string gameTitle)
{
    std::cout << "The gameboy is playing " << gameTitle << std::endl;
}

    void Gameboy::loadGame(std::string gameTitle)
{
    std::cout << "Game is loading " << gameTitle << std::endl;
}

    void Gameboy::storeHighScoreLists()
{
    std::cout << "The gameboy is storing high score lists." <<            std::endl;
}

int main()
{
    std::cout << "good to go!" << std::endl;
}
