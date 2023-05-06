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




struct Television
{
    float levelOfVolume = 50.f;
    double levelOfBrightness = 87.56;
    int numOfScreenModes = 6;
    std::string televisionManufacturer = "Samsung";
    int numOfInputs = 4;

    Television();

    int increaseVolume(int decibelOutput); //returns decibel volume ++
    void changeDisplaySettings();
    int decreaseBrightness(int nitOutput); // returns nit value --
};

int Television::increaseVolume(int decibelOutput)
{
    ++decibelOutput;
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

    std::cout << displaySetting << "Selected\n";
}

int Television::decreaseBrightness(int nitOutput)
{
    nitOutput = 100.00;
    --nitOutput;
    std::cout << nitOutput;
    return nitOutput;
}

struct MassageChair
{
    int numOfVibrationControls = 9;
    int appliedPressure = 10; //measured in PSI
    float backrestReclineAngle = 34.6f;
    float massageDuration = 30.f;
    float footrestInclineAngle = 90.f;

    MassageChair();

    void giveMassage();
    void playBackgroundSound(); 
    double displayTimer (double msgDuration); // displays how much time is left on massage.
};

void MassageChair::giveMassage()
{
   std::cout << "Please remove shoes, and relax!!\n"; 
}

void MassageChair::playBackgroundSound()
{
    std::cout << "Now playing\n";
}

double MassageChair::displayTimer(double msgDuration)
{
    double chairClock = 0;
    char durationSelected = 'a';
    double countdown = 30.00;
    msgDuration = countdown;
    std::cout << "how long will your massage be\n";
    std::cout << "a) 1hr, b) 30mins c) 10mins\n";

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
    
    chairClock = countdown;
    return countdown;
}

struct CollegeStudent
{
    int numOfEnrolledClasses = 7;
    double gpa = 3.64;
    std::string studentName = "Bob Macdonald";
    std::string subjectMajor = "Graphic Design";
    std::string expectedGraduationDate = "08 June 2024";

    CollegeStudent();

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
    bool maleGender = false;

    struct CatCollar
    {
        std::string materialOfCollar = "Nylon";
        float collarMeasurement = 10.2f;
        bool isWaterProof = true;
        bool hasCollarBuckle = true;
        int numOfHolesForBuckle = 4;

        CatCollar();

        void repelFleas(int repellantStrength, double repellantExpiration);
        double attachLeash();
        double trackLocation(bool containsGPS, double locationX, double locationY); //returns GPS coordinants
    };

    PetCat();

    void takeOffCollar(CatCollar newCollar);
    void knockOverObjects();
    void scratchVisitors();
    CatCollar replacementCollar;
};

void PetCat::takeOffCollar(CatCollar newCollar)
{
    std::cout << "Your cat has removed her collar please replace it\n"; 
    replacementCollar = newCollar;
}

void PetCat::knockOverObjects()
{
    std::cout << "Your cat has knock over an Object\n";
}

void PetCat::scratchVisitors()
{
    std::cout << "You cat has scratched a visitor\n";
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

        HealthStatus();

        void contractSTD(std::string whichSTD, std::string dateContracted);
        void developeHealthCondition(bool isHeredity, std::string knownSymptoms, std::string conditionName);
        void scheduleCheckUp(std::string returnDate, bool sameDoctor);
    };

    Human();

    void visitDoctor(HealthStatus updateHealthStatus);
    void goToSleep(int howLong);
    void donateBlood(bool giveLeftArm);
    HealthStatus healthStatus;
};

void Human::HealthStatus::contractSTD(std::string whichSTD, std::string dateContracted)
{
    whichSTD = "None";
    dateContracted = "N/A";
    std::cout << "Your tested positive for the folling STD" << whichSTD << "which was contracted on" << dateContracted <<" \n";
}

void Human::HealthStatus::developeHealthCondition(bool isHeredity, std::string knownSymptoms, std::string conditionName)
{
    isHeredity = true;
    knownSymptoms = "None";
    conditionName = "N/A";
}

void Human::HealthStatus::scheduleCheckUp(std::string returnDate, bool sameDoctor)
{
    returnDate = "Day/Month/Year";
    sameDoctor = true;
}

void Human::visitDoctor(HealthStatus updateHealthStatus)
{
    updateHealthStatus.contractSTD("STD Name", "Day/Month/Year");
    
}

void Human::goToSleep(int howLong)
{
    howLong = 8; //in hours 
}

void Human::donateBlood(bool giveLeftArm)
{
    if(giveLeftArm == true)
    {
         std::cout << "you have decided to donate from your left arm\n";
    }
    else
    {
        std::cout << "you have decided to donate from your right arm\n";
    }
}

struct SocialStatus
{
    double netWorth = 109841.65;
    std::string occupation = "Accountant";
    int numOfFriends = 28;
    double annualIncome = 181650.23; //in USD
    int numOfClubMemberships = 5;

    SocialStatus();
                 
    void attractMoreFriends(bool rejectNewFriend);
    void getExclusiveDeals();
    void bypassSocietalNorms();
};

void SocialStatus::attractMoreFriends(bool rejectNewFriend)
{
    rejectNewFriend = false;
}

void SocialStatus::getExclusiveDeals()
{
    std::cout << "you are entitled to exclusive deals";
}

void SocialStatus::bypassSocietalNorms()
{
    std::cout << "you are NOT beholden to social norms";
}

struct PhysicalAttribrutes
{
    int amountOfLimbs = 4;
    std::string currentEyeColor = "brown";
    float currentHieght = 5.7f;
    float currentWeight = 167.93f;
    std::string currentHairColor = "Dark Brown";

    PhysicalAttribrutes();

    void selectHairColor(std::string colorChoice);
    float increaseWeight(float addedPounds); //returns current weight + amount of lbs added.
    void loseLimbs();
};

void PhysicalAttribrutes::selectHairColor(std::string colorChoice)
{
    colorChoice = "New Color";
}

float PhysicalAttribrutes::increaseWeight(float addedPounds)
{
    ++addedPounds; 
    return addedPounds;
}

void PhysicalAttribrutes::loseLimbs()
{
    std::cout << "you lost a limb";
}

struct Education
{
    std::string mostRecentSchool = "Florida Atlantic University";
    int numOfYearsAttended = 6;
    std::string highestDegreeAttained = "Master of Arts";
    int positionInClass = 211;
    std::string subjectMajor = "Finance";

    Education();
                   
    std::string addDegree(std::string newestDegree); //returns newly added degree
    void dropOutOfSchool();
    std::string changeMajor(std::string whichMajor, std::string degreeLevel); //returns options for majors in accordance with associated degree level
};

std::string Education::addDegree(std::string newestDegree)
{
    newestDegree = "Degree Name";
    return newestDegree;
}

void Education::dropOutOfSchool()
{
    
}

std::string Education::changeMajor(std::string whichMajor, std::string degreeLevel)
{
    whichMajor = "New Major Name";
    degreeLevel = "AA, AS, BA, BS, MA, MS, or PHD";
    return "you have changed majors";
}

struct Home
{
    int numOfRooms = 5;
    double propertySize = 1373.56;
    std::string homeAddress = "123 Main St, Orange Grove CA, 34567";
    double propertyValue = 375400;
    int numOfAppliances = 10;

    Home();

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
    brokenItem = "Item that is broken";
    return brokenItem;
    
}

struct Girlfriend
{
    Human human;
    SocialStatus socialStatus;
    PhysicalAttribrutes physicalAttribrutes;
    Education education;
    Home home;

    Girlfriend();

    std::string planDinnerDate(std::string whatRestaurant, std::string whenToGo, std::string whatTime); //should return prompt controlled by if statements
    void presentIdeas();
    bool buildFurniture (bool carpetrySkills, Education tradeschool); //returns true based on EducationLevel
};

std::string Girlfriend::planDinnerDate(std::string whatRestaurant, std::string whenToGo, std::string whatTime)
{
    std::string dinnerPlans = whatRestaurant + whenToGo + whatTime;
    whatRestaurant = "this Restaurnt";
    whenToGo = "Day/Month/Year";
    whatTime = "8:00pm";
    return dinnerPlans;
}

void Girlfriend::presentIdeas()
{
    
}

bool Girlfriend::buildFurniture (bool carpetrySkills, Education tradeschool)
{
    carpetrySkills = false;
    tradeschool.numOfYearsAttended = 0;
    tradeschool.mostRecentSchool = "N/A";
    tradeschool.highestDegreeAttained = "N/A";
    tradeschool.positionInClass = 0;
    tradeschool.subjectMajor = "N/A";
    return false;
}

int main()
{
    Example::main();
    
    std::cout << "good to go!" << std::endl;
}
