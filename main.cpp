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


    struct CoffeeShop
    {
        // 5 properties:
        int numBaristasAtWork = 3;
        std::string coffeeBeanVariants = "Robusta, Arabica, Liberica";
        int numEcoFriendlyPackaging = 4;
        float amountRevenuePerDay = 2300.5f;   
        int numCustumorsServedPerHour = 12;
        // 3 Things It Can Do:
        int brewAndSellCoffee(int numCoffeeCups, float priceCoffeeCups); 
        // Returms total amount charged for x cups of coffee.
        int upsellPastriesAndSnacks(int numPastries, int numSnacks, float pricePastries, float priceSnacks); 
        // Returns total amount charged for numPastries plus numSnacks.
        void provideRelaxingCustomerExperience();
    };

    struct YogaInstitute
    {
        // 5 properties:
        int numYogaInstructors = 14;
        std::string YogaStyleOffered = "Hatha, Vinyasa, Power Yoga";
        int numOfPlanetFriendlyEquipment = 7;
        int numClassesOfferedPerWeek = 31;
        std::string communityAndMembershipPrograms = "Yoga Club, Yoga Summer Camp, Neighbor Yoga, Member-get-member";
        // 3 Things It Can Do:
        void leadYogaClasses();
        float payroleYagoInstructors(float hourlyRate, int hoursWorked); 
        // Returns the total payroll for a yoga instructor
        float towelRental(int numTowels, float  rentalPerTowel); 
        // returnss tha total cost of renting towels.
    };

    struct PublicLibrary
    {
        // 5 properties:
        int numBooksInCollection = 43569;
        std::string mediaFormatsAvailable = "Hardcover, Paperback, E-books, Audiobooks, DVDs";
            std::string technologyAndResources = "Digital Librarian, online search and reservations, Printing, Scanning, Streaming, Self Service Checkout, Self Service Return";    
        std::string typesOfEventsOffered = "Book Clubs, Author Talks, Book Signings, Children's Storytime, Art Exhibitions, Panel Discussions, Holiday Programs"; 
        std::string communityOutreachAndServices = "Bookstore, Library Cards, Bulletin Board, Newspaper Reading Area, Turist Flyers";

        //start of nested class:
        struct PersonalLenderIdCard
        {
            //5 member variables
            bool isValid = false;
            int age = 36;        
            int numBooksStatusDueReturn = 0;
            int numPrePaidCoffeeCredits = 3;
            bool CanTakeHomeSencoredMaterials = true;
            // 3 member functions
            float TopUpCoffeeCredits (float costPerCredit, int numCredits); 
            // Returns cost of toping up credits 
            float chargeLateReturns(int numLateBooks, float amountLateFee); 
            // Returns the total cost of late returns
            bool hasToiletKeyNumber3(bool getKeyBack); 
            // Returns true if the toilet key number 3 is in the possession of the person.
        }; //End of nested class

        // 3 Things It Can Do:
        void provideAccessToBooksAndResources();
        bool feesNotPaid(PersonalLenderIdCard personCardImpounded);// Used User-defined type as parameter // Returns true if the person shoud have their card impounded
        float chargeLateReturnFees(float amountDue); 
    };

    struct DogPark
    {
        // 5 properties:
        int sizeOfParkInSquareFeet = 3500;
        std::string amenitiesAvailable = "Fenced-in play areas, agility equipment, water stations, waste disposal stations, benches, shade structures";
        std::string rulesAndRegulations = "leash requirements, vaccination requirements, licensing policies, owner responsibilities, guidelines for dog behavior";
        bool communityInvolvement = true; 
        std::string accessibilityAndInclusivity = "Wheelchair-accessible paths, designated parking spaces";

        // start of nested class:
        struct Accessibility
        {
            //5 member variables
            void wheelchairAccessibility(bool wheelchairAccessiblePaths = true);
            void sensoryAccessibility(std::string tactileMaps, std::string brailleSignage);
            void cognitiveAccessibility(std::string clearSignage, std::string intuitiveWayfinding);
            void AccessibilityScore(Accessibility); // Returns a meassure for user satisfaction accsessibility elements implemented. Don't no how to calcuate this. 
            bool complaintProcesInPlace = true;
            // 3 member functions.  
            // they take multiple parameters. some parameters have default values.
            void accessibilityCheckAndMaintenance(std::string installAllRamps, bool cleearAllPaths = true, int numWorkingToilets = 5); // returns 'good to go' if all items are approved. 
            bool testingEmergincyReadyness(std::string emergencyType, std::string subjectTypeHuman, bool requiresHeartChock = false); // Returns weather went acceptable or not.
            int inforcingParkRules(int numLeachVialations, int numDogOwnerConflictSolving, bool policeInvolved); 
            // returns the number of park rules violaitons.
        }; //End of nested class    

        // 3 Things It Can Do:
        void provideOffLeashExerciseAndSocialization();
        void fosterCommunityConnections();
        void spreadsResponsibleDogOwnership();
    };

    struct DotMatrixScreen
    {
        // 5 properties:
        int numDotsPerRow = 160; 
        int numRows = 144;
        int numColumns = 160;
        float levelOfBrightnessFrom1To10 = 7;  
        float averagePowerConsumptionPerHourInWatt = 0.7f;
        // 3 things it can do:
        float setBrightness(float BrightnessLvl); 
        // Returns a float value representing the level of brightness.
        void displayImages();
        void displayGraphics();
    };

    struct DirectionalPadControler
    {
        // 5 properties:
        int numOfDirectSupported = 4;
        int numSencors = 4;  
        bool tactileFeedback = true;
        std::string physicalDesign = "xShaped";
        std::string padColor = "Black";
        // 3 things it can do:
        void controlPlayerMovement(DirectionalPadControler up);
        // Used User-defined type as parameter.
        void confirmSettings();
        void selectHighscorersInitials();
    };

    struct GameButtons
    {
        // 5 properties:
        int numGameButtons = 2;
        int tactileFeedback = true;
        std::string physicalDesign = "round, black";
        bool binarySencor = true;
        float buttonSizeØInMm = 0.9f;    
        // 3 things it can do:
        void executeAction(GameButtons buttonApressed); //Used User-defined type as parameter.
        void adjustSettings();
        void confirmHighscoerInitials();
    };

    struct Housing
    {
        // 5 properties:
        std::string housingMaterial = "plastic";
        std::string housingColor = "LightGray";
        float sizeHeightInMm = 148;
        float sizeWidthInMm = 90;
        float sizeDepthInMm = 32;
        // 3 things it can do:
        void secureGameCartridgeConnection();
        void keepElectronicComponentsInPlace();
        void offerComfertableGamingExperience();
    };

    struct GameCartridge
    {
        // 5 properties:
        bool batteryPoweredMemory = true;
        int RamCapasityInKb = 128;
        std::string cartridgeColor = "LightGray";   
        bool gameboyCompatibility = true;
        bool LockoutChip = true;
        // 3 things it can do:
        bool authenticationCheckingCartridge(bool isAuthenticated); 
        // returns true if cartridge is authenticated
        std::string gamesuccesfullyLaoded(bool gameLoaded); 
        // returns game start from stage after last completed stage
        void insertGameCartridge(GameCartridge gammeTitleA); 
        // Used User-defined type as parameter.
        // Returns string of the game status.
    };

    struct Gameboy
    {
        // 5 properties:
        DotMatrixScreen dotMatrixScreen; 
        DirectionalPadControler directionalPadControler;
        GameButtons gameButtons;
        Housing housing;
        GameCartridge gameCartridge;
        // 3 things it can do:
        bool playGame(std::string gameTitle);//Retuens true if if gaame gameTitle runs
        void loadGame(std::string gameTitle); //Returns true if gameTitle is loaded
        void storeHighScoreLists();
    };







int main()
{
    std::cout << "good to go!" << std::endl;
}
