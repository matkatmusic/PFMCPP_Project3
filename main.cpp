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

Television::Television()
{
    std::cout << "Television is being constructed!" << std::endl; 
}

int Television::increaseVolume(int decibelOutput)
{
    ++decibelOutput;
    std::cout << decibelOutput << "\n";
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
        std::cout << "Inavlid Selection \n";
    }

    std::cout << displaySetting << " Selected\n";
}

int Television::decreaseBrightness(int nitOutput)
{
    --nitOutput;
    std::cout << nitOutput << "\n";
    return nitOutput;
}

struct MassageChair
{
    int numOfVibrationControls = 9;
    int appliedPressure = 10; //measured in PSI
    float backrestReclineAngle = 34.6f;
    double massageDuration = 30.00;
    float footrestInclineAngle = 90.f;

    MassageChair();

    void giveMassage(bool startMassage);
    void playBackgroundSound(); 
    double displayTimer(double msgDuration); // displays how much time is left on massage.
};

MassageChair::MassageChair()
{
    std::cout << "MassageChair is being constructed!" << std::endl;
}

void MassageChair::giveMassage(bool startMassage)
{
    if(startMassage == true)
    {
        std::cout << "Please remove shoes, and relax!!\n";
    }
    
    std::cout << "No Massage For You!\n";
}

void MassageChair::playBackgroundSound()
{
    std::cout << "Now playing! \n";
}

double MassageChair::displayTimer(double msgDuration)
{
    std::cout << "now counting down from " << msgDuration << "minuntes\n";
    return msgDuration;
}

struct CollegeStudent
{
    int numOfEnrolledClasses = 7;
    double gpa = 3.64;
    std::string studentName = "Student's Name";
    std::string subjectMajor = "Subject Major";
    std::string expectedGraduationDate = "DD MM YY";

    CollegeStudent();

    void attendStudyHall();
    void watchTelevision(CollegeStudent newStudent);
    void danceToMusic();
};

CollegeStudent::CollegeStudent()
{
    std::cout << "CollegeStudent is being constructed!" << std::endl;
}

void CollegeStudent::attendStudyHall()
{
    std::cout << studentName << "is now attending study hall\n";
}

void CollegeStudent::watchTelevision(CollegeStudent newStudent)
{
    std::cout << newStudent.studentName << " is now watching TV\n";
}

void CollegeStudent::danceToMusic()
{
    std::cout << studentName << " is now dancing to the music\n";
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
        double globalPositionSystem;

        CatCollar();

        void repelFleas(int repellantStrength, std::string repellantExpiration);
        void attachLeash();
        int tightenCollar(int bucklePosition);
    };

    PetCat();

    void takeOffCollar(CatCollar newCollar);
    void knockOverObjects();
    void scratchVisitors();
    CatCollar replacementCollar;
};

PetCat::CatCollar::CatCollar()
{
    std::cout << "CatCollar is being constructed!" << std::endl; 
}

void PetCat::CatCollar::repelFleas(int repellantStrength, std::string repellantExpiration)
{
    std::cout << repellantStrength << "is the repellant strength of this collar\n"; 
    std::cout << repellantExpiration << "is the expiration date\n";
}

void PetCat::CatCollar::attachLeash()
{
    std::cout << "Now attaching leash...\n";
    
    if(isWaterProof == true)
    {
        std::cout << "don't be afraid to get a little wet\n";  
    }
}

int PetCat::CatCollar::tightenCollar(int bucklePosition)
{ 
    if(hasCollarBuckle == true && bucklePosition <= numOfHolesForBuckle)
    {
        --bucklePosition;
        std::cout << "collar has been tightened\n";
    }
    std::cout << "This collar only has " << numOfHolesForBuckle << " please inut a whole number smaller or equal to that\n";
    return bucklePosition;
}

PetCat::PetCat()
{
    std::cout << "PetCat is being constructed!" << std::endl;
}

void PetCat::takeOffCollar(CatCollar newCollar)
{
    std::cout << nameOfPetCat << " has removed her collar please replace it\n"; 
    replacementCollar = newCollar;
}

void PetCat::knockOverObjects()
{
    std::cout << nameOfPetCat << " has knock over an Object\n";
}

void PetCat::scratchVisitors()
{
    std::cout << nameOfPetCat << " has scratched a visitor\n";
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
        void developeHealthCondition(bool isHereditary, std::string knownSymptoms, std::string conditionName);
        void scheduleCheckUp(std::string returnDate, bool sameDoctor);
    };

    Human();

    void visitDoctor(HealthStatus updateHealthStatus);
    void goToSleep(int howLong);
    void donateBlood(bool giveLeftArm);
    HealthStatus healthStatus;
};

Human::HealthStatus::HealthStatus()
{
    std::cout << "HealthStatus is being constructed!" << std::endl;
}

Human::Human()
{
    std::cout << "Human being constructed!" << std::endl;
}

void Human::HealthStatus::contractSTD(std::string whichSTD, std::string dateContracted)
{
    std::cout << "Your tested positive for the folling STD " << whichSTD << " which was contracted on" << dateContracted <<" \n";
}

void Human::HealthStatus::developeHealthCondition(bool isHereditary, std::string knownSymptoms, std::string conditionName)
{
    std::cout << "You have noticed having" << knownSymptoms << " \n";
    std::cout << "which are symptoms of " << conditionName << " \n";
    
    if(isHereditary == true) std::cout << "this condition is hereditary";
}

void Human::HealthStatus::scheduleCheckUp(std::string returnDate, bool sameDoctor)
{
    returnDate = "Day/Month/Year";
    sameDoctor = true;
}

void Human::visitDoctor(HealthStatus updateHealthStatus)
{
    //I would ideally update all the member variables of HealthStatus here with std::cin's.
    std::cout << "Blood Pressure: " << updateHealthStatus.bloodPressureLevel << " \n";
    std::cout << "Body Mass Index: " << updateHealthStatus.bodyMassIndex << " \n";
    std::cout << "Chronic Diseases Present: " << updateHealthStatus.chronicDiseasesPresent << " \n";
    std::cout << "Date Of Last Check-Up: " << updateHealthStatus.dateOfLastCheckup << " \n";
    std::cout << "Number of Complications: " << updateHealthStatus.numOfHealthComplications << " \n";
    //here I would replace dateOfLastCheckup with todays date.
}

void Human::goToSleep(int howLong)
{
    std::cout << nameOfHuman << " is going to get " << howLong << " hours of sleep!\n";
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

SocialStatus::SocialStatus()
{
    std::cout << "SocialStatus is being constructed!" << std::endl;
}

void SocialStatus::attractMoreFriends(bool rejectNewFriend)
{
    if(rejectNewFriend == false) 
    {
        std::cout << "you now have 1 new friend added to your network!\n";
    }
    else
    {
        std::cout << "NO NEW FRIENDS!!\n";
    }
}

void SocialStatus::getExclusiveDeals()
{
    std::cout << "because of your " << netWorth << " net worth you are entitled to exclusive deals\n";
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
    void loseLimb();
};

PhysicalAttribrutes::PhysicalAttribrutes()
{
    std::cout << "PhysicalAttribrutes is being constructed!" << std::endl;
}
void PhysicalAttribrutes::selectHairColor(std::string colorChoice)
{
    std::cout << colorChoice << " has been selected as the new hair color\n";
}

float PhysicalAttribrutes::increaseWeight(float addedPounds)
{
    ++addedPounds; 
    return addedPounds;
}

void PhysicalAttribrutes::loseLimb()
{
    --amountOfLimbs;
    std::cout << "you lost a limb you now have " << amountOfLimbs << "limbs!\n";
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

Education::Education()
{
    std::cout << "Education being constructed!" << std::endl;
}

std::string Education::addDegree(std::string newestDegree)
{
    return newestDegree;
}

void Education::dropOutOfSchool()
{
    std::cout << "You have just dropped out of " << mostRecentSchool << ", what will you do now\n";
}

std::string Education::changeMajor(std::string whichMajor, std::string degreeLevel)
{
    std::cout << "we have changed your degree to " << whichMajor << "this is a " << degreeLevel << "degree.";
    return "best of luck";
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

Home::Home()
{
    std::cout << "Home being constructed!" << std::endl;
}

void Home::appreaciateInValue()
{
    
}

void Home::addRoomToHouse()
{
    ++numOfRooms;
    std::cout << "Congratulations!! you have just added a room to your house! you now have " << numOfRooms << "rooms\n";
}

std::string Home::deteriorateOverTime(std::string brokenItem)
{
    std::cout << brokenItem << " is broken, replace it now.\n";
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
    void presentIdeas(Human girlfriend);
    bool buildFurniture (Human girlfriend, bool carpetrySkills);
};

Girlfriend::Girlfriend()
{
    std::cout << "Girlfriend is being constructed!" << std::endl; 
}

std::string Girlfriend::planDinnerDate(std::string whatRestaurant, std::string whenToGo, std::string whatTime)
{
    std::string dinnerPlans = whatRestaurant + whenToGo + whatTime;
    whatRestaurant = "this Restaurnt";
    whenToGo = "Day/Month/Year";
    whatTime = "8:00pm";
    return dinnerPlans;
}

void Girlfriend::presentIdeas(Human girlfriend)
{
    std::cout << girlfriend.nameOfHuman << " has an interesting proposal you should consider\n"; 
}

bool Girlfriend::buildFurniture (Human girlfriend, bool carpetrySkills)
{
    if(carpetrySkills == true)
    {
        std::cout << girlfriend.nameOfHuman << "can build whatever you need.\n";
        return true;
    }
    std::cout << girlfriend.nameOfHuman << " cannot build you furniture.\n";
    return false;
}

int main()
{
    Example::main();

    Television samsung;
    samsung.decreaseBrightness(98);
    samsung.changeDisplaySettings();
    samsung.increaseVolume(37);

    MassageChair osakiOS4000T;
    osakiOS4000T.giveMassage(true);
    osakiOS4000T.displayTimer(60.00);
    osakiOS4000T.playBackgroundSound();
    

    CollegeStudent rickSanchez;
    rickSanchez.studentName = "Rick Sanchez";
    rickSanchez.attendStudyHall();
    rickSanchez.danceToMusic();
    rickSanchez.watchTelevision(rickSanchez);

    PetCat::CatCollar friscoBreakaway;
    friscoBreakaway.repelFleas(10, "12/12/2012");
    friscoBreakaway.attachLeash();
    friscoBreakaway.tightenCollar(3);
    
    PetCat doris;
    doris.knockOverObjects();
    doris.scratchVisitors();
    doris.takeOffCollar(friscoBreakaway);
    
    Human::HealthStatus may5thUpdate;
    may5thUpdate.contractSTD("Cold Sore", "10/28/2021");
    may5thUpdate.developeHealthCondition(false, "small blisters around body", "chickenpox");
    may5thUpdate.scheduleCheckUp("11/22/2024", true);

    Human julianneCabour;
    julianneCabour.nameOfHuman = "Julianne Cabour";
    julianneCabour.goToSleep(10);
    julianneCabour.donateBlood(false);
    julianneCabour.visitDoctor(may5thUpdate);

    SocialStatus upperClass;
    upperClass.attractMoreFriends(false);
    upperClass.bypassSocietalNorms();
    upperClass.getExclusiveDeals();

    PhysicalAttribrutes weak;
    weak.increaseWeight(7.0);
    weak.loseLimb();
    weak.selectHairColor("Purple");
    
    Education graphicDesigner;
    graphicDesigner.changeMajor("Business", "BA");
    graphicDesigner.addDegree("Computer Science");
    graphicDesigner.dropOutOfSchool();

    Home residence;
    residence.addRoomToHouse();
    residence.appreaciateInValue();
    residence.deteriorateOverTime("roofing");

    Girlfriend babe;
    babe.buildFurniture(julianneCabour, false);
    babe.presentIdeas(julianneCabour);
    babe.planDinnerDate("Arbys", "05/08/2023", "07:30");

    std::cout << "home address: " << residence.homeAddress << "\n";
    std::cout << "Social Status Occupation: " << upperClass.occupation << "\n";
    
    std::cout << "good to go!" << std::endl;
}
