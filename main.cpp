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
struct Limb
{
    void stepForward();
    int stepSize(int stepMeasurement);
};

void Limb::stepForward()
{
    
}

int Limb::stepSize(int stepMeasurement)
{
   int totalSteps = 0;
    totalSteps += stepMeasurement;
    return totalSteps;
}

struct Person
{
    Limb leftFoot;
    Limb rightFoot;
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    int distanceTraveled;

    void run(int howFast, bool startWithLeftFoot);
};

void Person::run(int howFast, bool startWithLeftFoot)
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
    distanceTraveled += leftFoot.stepSize(0) + rightFoot.stepSize(0);
    howFast = 1;
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


struct Television
{
    float levelOfVolume = 50.f;
    double levelOfBrightness = 87.56;
    int numOfScreenModes = 6;
    std::string televisionManufacturer = "Samsung";
    int numOfInputs = 4;

    int increaseVolume(int decibelOutput); //returns decibel volume ++
    void changeDisplaySettings();
    int decreaseBrightness(int nitOutput); // returns nit value --
};

int Television::increaseVolume(int decibelOutput)
{
    decibelOutput = 0;
    decibelOutput++;
    return decibelOutput;
}

void Television::changeDisplaySettings()
{
    int displaySelector = 0;
    int displaySetting = 0;
    int tvInput1 = 1;
    int tvInput2 = 2;
    int tvInputHDMI = 3;
    int tvInputBT = 4;
    std::cout << "Please select Input 1, 2, 3 HDMI, or 4 BlueTooth\n";
    std::cin >> displaySelector;
    
    if(displaySelector == 1)
    {
        displaySetting = tvInput1;
    } 
    else if(displaySelector == 2) 
    {
        displaySetting = tvInput2;
    }
    else if (displaySelector == 3)
    {
        displaySetting = tvInputHDMI;
    }
    else if (displaySelector == 4)
    {
        displaySetting = tvInputBT;
    }
    else
    {
        std::cout << "Inavlid Selection";
    }
}

int Television::decreaseBrightness(int nitOutput)
{
    nitOutput = 100.00;
    nitOutput--;
    return nitOutput;
}

struct MassageChair
{
    int numOfVibrationControls = 9;
    int appliedPressure = 10; //measured in PSI
    float backrestReclineAngle = 34.6f;
    float massageDuration = 30.f;
    float footrestInclineAngle = 90.f;

    void giveMassage();
    void playBackgroundSound(); 
    double displayTimer (double msgDuration); // displays how much time is left on massage.
};

void MassageChair::giveMassage()
{
    
}

void MassageChair::playBackgroundSound()
{
    
}

double MassageChair::displayTimer(double msgDuration)
{
    double chairClock = 0;
    char durationSelected = 'a';
    double countdown = 30.00;
    msgDuration = countdown;
    while(durationSelected == 'a')
    {
        std::cout << "how long will your massage be\n";
        std::cout << "a) 1hr, b) 30mins c) 10mins\n";
        std::cin >> durationSelected;

        if(durationSelected == 'a')
        {
        countdown = 60.00;
        }
        else if(durationSelected == 'b')
        {
        countdown = 30.00;
        }
        else if(durationSelected == 'c')
        {
        countdown = 10.00;
        }
        else
        {
        std::cout << "Invalid Selection Please Select a) b) or c)";
        }
    }
    chairClock = countdown;
    for(double i = chairClock; i > 0.0; i--)
    {
        countdown = countdown - i;
        std::cout << countdown;
    }

    return countdown;
}

struct CollegeStudent
{
    int numOfEnrolledClasses = 7;
    double gpa = 3.64;
    std::string studentName = "Bob Macdonald";
    std::string subjectMajor = "Graphic Design";
    std::string expectedGraduationDate = "08 June 2024";

    void attendStudyHall();
    void watchTelevision();
    void danceToMusic();
};

void CollegeStudent::attendStudyHall()
{
    
}

void CollegeStudent::watchTelevision()
{

}

void CollegeStudent::danceToMusic()
{
    
}


struct PetCat
{
    int numOfEyes = 2;
    double legnthOfTail = 10.35;
    std::string furColor = "Grey & White";
    int ageOfCat = 3;
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
    void takeOffCollar(CatCollar newCollar);
    void knockOverObjects();
    void scratchVisitors();
    CatCollar replacementCollar;
};

void PetCat::takeOffCollar(CatCollar newCollar)
{
    
}

void PetCat::knockOverObjects()
{
    
}

void PetCat::scratchVisitors()
{
    
}

struct Human
{
    int ageInYears = 33;
    std::string nameOfHuman = "Jason Blake";
    std::string ethnicity = "Black/African American";
    int dateOfBirth = 12181989;
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
    void visitDoctor(HealthStatus updateHealthStatus);
    void goToSleep(int howLong);
    void donateBlood(bool giveLeftArm);
    HealthStatus healthStatus;
};

void Human::visitDoctor(HealthStatus updateHealthStatus)
{
    
}

void Human::goToSleep(int howLong)
{
    
}

void Human::donateBlood(bool giveLeftArm)
{
    
}

struct SocialStatus
{
    double netWorth = 109841.65;
    std::string occupation = "Accountant";
    int numOfFriends = 28;
    double annualIncome = 181650.23; //in USD
    int numOfClubMemberships = 5;
                 
    void attractMoreFriends(bool rejectNewFriend);
    void getExclusiveDeals();
    void bypassSocietalNorms();
};

void SocialStatus::attractMoreFriends(bool rejectNewFriend)
{
    
}

void SocialStatus::getExclusiveDeals()
{
    
}

void SocialStatus::bypassSocietalNorms()
{
    
}

struct PhysicalAttribrutes
{
    int amountOfLimbs = 4;
    std::string currentEyeColor = "brown";
    float currentHieght = 5.7f;
    float currentWeight = 167.93f;
    std::string currentHairColor = "Dark Brown";

    void selectHairColor(std::string colorChoice);
    float increaseWeight(int addedPounds); //returns current weight + amount of lbs added.
    void loseLimbs();
};

void PhysicalAttribrutes::selectHairColor(std::string colorChoice)
{
    
}

float PhysicalAttribrutes::increaseWeight(int addedPounds)
{
    
}

void PhysicalAttribrutes::loseLimbs()
{
    
}

struct Education
{
    std::string mostRecentSchool = "Florida Atlantic University";
    int numOfYearsAttended = 6;
    std::string highestDegreeAttained = "Master of Arts";
    int positionInClass = 211;
    std::string subjectMajor = "Finance";
                   
    std::string addDegree(std::string newestDegree); //returns newly added degree
    void dropOutOfSchool();
    std::string changeMajor(std::string whichMajor, std::string degreeLevel); //returns options for majors in accordance with associated degree level
};

std::string Education::addDegree(std::string newestDegree)
{
    
}

void Education::dropOutOfSchool()
{
    
}

std::string Education::changeMajor(std::string whichMajor, std::string degreeLevel)
{
    
}

struct Home
{
    int numOfRooms = 5;
    double propertySize = 1373.56;
    std::string homeAddress = "123 Main St, Orange Grove CA, 34567";
    double propertyValue = 375400;
    int numOfAppliances = 10;

    void appreaciateInValue();
    void addRoomToHouse();
    std::string deteriorateOverTime(std::string brokenItem); //display what needs to be fixed.
};

void Home::appreaciateInValue()
{
    
}

void Home::addRoomToHouse()
{
    
}

std::string Home::deteriorateOverTime(std::string brokenItem)
{
    
}

struct Girlfriend
{
    Human human;
    SocialStatus socialStatus;
    PhysicalAttribrutes physicalAttribrutes;
    Education education;
    Home home;

    std::string planDinnerDate(std::string whatRestaurant, std::string whenToGo, double whatTime); //should return prompt controlled by if statements
    void presentIdeas();
    bool buildFurniture (bool carpetrySkills, Education Tradeschool); //returns true based on EducationLevel
};

std::string Girlfriend::planDinnerDate(std::string whatRestaurant, std::string whenToGo, double whatTime)
{
    
}

void Girlfriend::presentIdeas()
{
    
}

bool Girlfriend::buildFurniture (bool carpetrySkills, Education Tradeschool)
{
    
}

int main()
{
    std::cout << "good to go!" << std::endl;
}
