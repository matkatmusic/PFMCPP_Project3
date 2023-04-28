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


struct Television
{
    // 1) level of volume (float)
    float levelOfVolume = 50.f;
    // 2) level of brightness (double)
    double levelOfBrightness = 87.56;
    // 3) number of screen modes (int)
    int numOfScreenModes = 6;
    // 4) television manufacturer (std::string)
    std::string televisionManufacturer = "Samsung";
    // 5) number of inputs (int)
    int numOfInputs = 4;

    //3 things it can do:
    // 1) increase volume
    int increaseVolume(int decibelOutput); //returns decibel volume ++
    // 2) change display settings
    void changeDisplaySettings();
    // 3) decrease brightness
    double decreaseBrightness(int nitOput); // returns nit value --
};

struct MassageChair
{
    //1) number of vibration controls (int)
    int numOfVibrationControls = 9;
    //2) amount of pressure applied (int)
    int appliedPressure = 10; //measured in PSI
    //3) degree of backrest recline (float)
    float backrestReclineAngle = 34.6f;
    //4) amount of time per massage (float)
    float massageDuration = 30.f;
    //5) degree of footrest incline (float)
    float footrestInclineAngle = 90.f;

    //3 things it can do:
    //1) give massage
    void giveMassage();
    //2) play background sound
    void playBackgroundSound(); 
    //3) display timer
    double displayTimer (double massageDuration); // displays how much time is left on massage.
};

struct CollegeStudent
{
    //1) number of enrolled classes (int)
    int numOfEnrolledClasses = 7;
    //2) grade point average (double)
    double gpa = 3.64;
    //3) name of student (std::string)
    std::string studentName = "Bob Macdonald";
    //4) subject of major (std::string)
    std::string subjectMajor = "Graphic Design";
    //5) expected graduation date (std::string)
    std::string expectedGraduationDate = "08 June 2024";

    //3 things it can do:
    //1) attend study hall
    void attendStudyHall();
    //2) watch television
    void watchTelevision();
    //3) dance to music
    void danceToMusic();
};

struct PetCat
{
    //1) number of eyes (int)
    int numOfEyes = 2;
    //2) legnth of tail (double)
    double legnthOfTail = 10.35;
    //3) color of fur (std::string
    std::string furColor = "Grey & White";
    //4) age of pet cat (int)
    int ageOfCat = 3;
    //5) name of pet cat (std::string)
    std::string nameOfPetCat = "Doris";

    struct CatCollar
    {
        std::string materialOfCollar = "Nylon";
        float collarMeasurement = 10.2f;
        bool isWaterProof = true;
        bool hasCollarBuckle = true;
        int numOfHolesForBuckle = 4;

        void repelFleas(int repellantStrength, double repellantExpiration);
        double attachLeash();
        double trackLocation(bool containsGPS, double locationX, double locationY); //returns GPS coordinants
    };
    //3 things it can do:
    //1) break cat food robot
    void takeOffCollar(CatCollar newCollar);
    //2) knock over objects
    void knockOverObjects();
    //3) scratch visitors
    void scratchVisitors();
    CatCollar replacementCollar;
};

struct Human
{
    //1) age in years (int)
    int ageInYears = 33;
    //2) name (std::string)
    std::string nameOfHuman = "Jason Blake";
    //3) ethnicity (std::string)
    std::string ethnicity = "Black/African American";
    //4) date of birth (int)
    int dateOfBirth = 12181989;
    //5) blood type (std:: string)
    std::string bloodType = "O Negative";

    struct HealthStatus
    {
        int numOfHealthComplications = 0;
        bool chronicDiseasesPresent = false;
        std::string dateOfLastCheckup = "23 Feburary 2022";
        float bodyMassIndex = 23.8f;
        std::string bloodPressureLevel = "120/83 mmHg";

        void contractSTD(std::string whichSTD, std::string dateContracted);
        void developeHealthCondition(bool isHeredity, std::string knownSymptoms, std::string conditionName);
        void scheduleCheckUp(std::string returnDate, bool sameDoctor);
    };   
    //3 things it can do:
    //1) visit the doctor
    void visitDoctor(HealthStatus updateHealthStatus);
    //2) go to sleep
    void goToSleep(int howLong);
    //3) donate blood
    void donateBlood(bool giveLeftArm);
    HealthStatus healthStatus;
};

struct SocialStatus
{
    //1) net worth (double)
    double netWorth = 109841.65;
    //2) occupation (std::string)
    std::string occupation = "Accountant";
    //3) number of friends (int)
    int numOfFriends = 28;
    //4) amount of income per year (double)
    double annualIncome = 181650.23; //in USD
    //5) number of club memberships (int)
    int numOfClubMemberships = 5;
                 
    //3 things it can do:
    //1) attract more friends
    void attractMoreFriends(bool rejectNewFriend);
    //2) get exclusive deals
    void getExclusiveDeals();
    //3) bypass societal norms
    void bypassSocietalNorms();
};

struct PhysicalAttribrutes
{
    //1) amount of limbs (int)
    int amountOfLimbs = 4;
    //2) eye color (std::string)
    std::string currentEyeColor = "brown";
    //3) hieght (float)
    float currentHieght = 5.7f;
    //4) weight(float)
    float currentWeight = 167.93f;
    //5) hair color (std:: string)
    std::string currentHairColor = "Dark Brown";

    //3 things it can do:
    //1) select hair color
    void selectHairColor(std::string colorChoice);
    //2) increase weight
    float increaseWeight(int addedPounds); //returns current weight + amount of lbs added.
    //3) lose limbs
    void loseLimbs();
};

struct Education
{
    //1) name of most recent school (std::string)
    std::string mostRecentSchool = "Florida Atlantic University";
    //2) number of years attended (int)
    int numOfYearsAttended = 6;
    //3) highest degree attained (std::string)
    std::string highestDegreeAttained = "Master of Arts";
    //4) position in class (int)
    int positionInClass = 211;
    //5) major studied (std::string)
    std::string subjectMajor = "Finance";
                   
    //3 things it can do:
    //1) add degree
    std::string addDegree(std::string newestDegree); //returns newly added degree
    //2) drop out of school
    void dropOutOfSchool();
    //3) change major
    std::string changeMajor(std::string whichMajor, std::string degreeLevel); //returns options for majors in accordance with associated degree level
};

struct Home
{
    //1) number of rooms (int)
    int numOfRooms = 5;
    //2) property size (double)
    double propertySize = 1373.56;
    //3) location of home (std::string)
    std::string homeAddress = "123 Main St, Orange Grove CA, 34567";
    //4) property value (double)
    double propertyValue = 375400;
    //5) number of appliances (int)
    int numOfAppliances = 10;

    //3 things it can do:
    //1) increase in value over time
    void appreaciateInValue();
    //2) add room to house
    void addRoomToHouse();
    //3) deteriorate over time
    std::string deteriorateOverTime(std::string brokenItem); //display what needs to be fixed.
};

struct Girlfriend
{
    Human human;
    SocialStatus socialStatus;
    PhysicalAttribrutes physicalAttribrutes;
    Education education;
    Home home;

    //1) plan dinner date
    std::string planDinnerDate(std::string whatRestaurant, std::string whenToGo, double whatTime); //should return prompt controlled by if statements
    //2) present ideas
    void presentIdeas();
    //3) build furniture
    bool buildFurniture (bool carpetrySkills, Education Tradeschool); //returns true based on EducationLevel
};
int main()
{
    std::cout << "good to go!" << std::endl;
}
