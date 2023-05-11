/*
 Project 3 - Part 5 / 5
 video: Chapter 2 - Part 10
 Scope and Lifetime tasks
 
Create a branch named Part5

 video covered:
    variable scope and lifetime relative to { }
    while loops
    for loops()
 
 tasks
 
 1) add some new member functions to EACH of your types. 
 
 2) inside these new member functions, use while() and for() loops to do something interesting 
         a) example: have a loop that modifies a member variable of some object created outside the loop.
         b) when that member variable reaches a certain threshold, return it mid-loop.
         c) maybe use function parameters to control the starting value of that member variable or control the threshold
         
 3) call those new member functions in main()
 
 4) use std::cout statements to print out information about what your loops did.
    Your code should produce a lot of console output now.

 5) Remember to use pre-increment/decrement in your loops. 
 You can learn why post-increment/decrement is not ideal here:
 https://en.cppreference.com/w/cpp/language/operator_incdec 
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */

#include <iostream>
namespace Example 
{
struct Bar 
{ 
    int num = 0; 
    Bar(int n) : num(n) { } 
};
struct Foo
{
    Bar scopeLifetimeFunc( int threshold, int startingVal ) //1), 2c) 
    {
        Bar bar(startingVal);                //2a)
        while( bar.num < threshold )         //2a) 
        { 
            ++bar.num;                    //2a), 5)
            std::cout << "  increasing bar.num: " << bar.num << std::endl; //4)
            if( bar.num >= threshold )       //2b)
                return bar;
        }
        
        return Bar {-1}; //if your startingValue >= threshold, the while loop never runs
    }
};

int main()
{
    Foo foo;
    auto bar = foo.scopeLifetimeFunc(3, 1);        //3)  
    
    std::cout << "bar.num: " << bar.num << std::endl;     //4)  
    return 0;
}
}

//call Example::main() in main()



struct Television
{
    float levelOfVolume;
    double levelOfBrightness {87.56};
    int numOfScreenModes;
    std::string televisionManufacturer = "Samsung";
    int numOfInputs;
    int numOfChannels {200};

    Television();

    int increaseVolume(int decibelOutput); //returns decibel volume ++
    void changeDisplaySettings();
    int decreaseBrightness(int nitOutput); // returns nit value --
    void printTelevisionVars();
    int scanForChannels(int channelNumStart)
    {
        for(int i = channelNumStart; i < numOfChannels; ++i)
        {
            std::cout << "Discovered Channel: " << i << " \n";
        }
        return channelNumStart;
    }
};

Television::Television() : 
levelOfVolume(50.f),
numOfScreenModes(6),
numOfInputs(4)
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

void Television::printTelevisionVars()
{
    std::cout << "levelOfVolume: " << levelOfVolume << "\n";
    std::cout << "levelOfBrightness: " << levelOfBrightness << "\n";
    std::cout << "numOfScreenModes: " << numOfScreenModes << "\n";
    std::cout << "televisionManufacturer: " << televisionManufacturer << "\n";
    std::cout << "numOfInputs: " << numOfInputs << "\n\n";
}

struct MassageChair
{
    int numOfVibrationControls {9};
    int appliedPressure {10}; //measured in PSI
    float backrestReclineAngle = 34.6f;
    double massageDuration;
    float footrestInclineAngle;

    MassageChair();

    void giveMassage(bool startMassage);
    void playBackgroundSound(); 
    int displayTimer(int msgDuration); // displays how much time is left on massage.
    void printMassageChairVars();
    bool startVibration(bool startMassage)
    {
        startMassage == false ? std::cout << "would you like to start a massage?\n" : std::cout <<  "starting\n";
        while(startMassage == true)
        {
            --massageDuration;
            massageDuration < 0.1 ? startMassage = false : startMassage = true;
        }
        return startMassage;
    }  
};

MassageChair::MassageChair() :
massageDuration(30.00),
footrestInclineAngle(90.f)
{
    std::cout << "MassageChair is being constructed!" << std::endl;
}

void MassageChair::giveMassage(bool startMassage)
{
    if(startMassage == true)
    {
        std::cout << "Please remove shoes, and relax!!\n";
    }
    else
    {
        std::cout << "No Massage For You!\n";
    }
}

void MassageChair::playBackgroundSound()
{
    std::cout << "Now playing! \n";
}

int MassageChair::displayTimer(int msgDuration)
{
    std::cout << "now counting down from " << msgDuration << "minuntes\n";
    int secs = 60, mins = msgDuration;
    
    while(mins >= 0)
    {
        --secs;
        
        if(mins > 0 && secs == 0)
        {
            --mins;
            secs += 60;
            
            while(mins == 0 && secs > 0)
            {
                --secs;
            }
        }
        else if(mins == 0 && secs < 0)
        {
            std::cout << "Massage Complete\n";
            break;
        }
        std::cout << mins << " : " << secs << "\n";
    }
    return msgDuration;
}

void MassageChair::printMassageChairVars()
{
    std::cout << "numOfVibrationControls: " << numOfVibrationControls << " \n";
    std::cout << "appliedPressure: " << appliedPressure << " \n";
    std::cout << "backrestReclineAngle: " << backrestReclineAngle << "\n";
    std::cout << "massageDuration:  " << massageDuration << "\n";
    std::cout << "footrestInclineAngle: " << footrestInclineAngle << "\n\n";
}

struct CollegeStudent
{
    int numOfEnrolledClasses {7};
    double gpa {3.64};
    int booksRead = 0;
    std::string studentName = "Student's Name";
    std::string subjectMajor;
    std::string expectedGraduationDate;

    CollegeStudent();

    void attendStudyHall();
    void watchTelevision(CollegeStudent newStudent);
    void danceToMusic();
    void printCollegeStudent();
    int readBook(int totalPages)
    {
        for(int i = 1; i <= totalPages; ++i)
        {
            std::cout << "Page " << i << " complete\n";
            
            if(i == totalPages)
            {
                std::cout << "book complete\n";
                ++booksRead;
            }
        }
        std::cout << "congratulations!! you have finished book number: " << booksRead << " \n";
        return booksRead;   
    }
};

CollegeStudent::CollegeStudent() :
subjectMajor("Subject Major"),
expectedGraduationDate("DD MM YY")
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

void CollegeStudent::printCollegeStudent()
{
    std::cout << "numOfEnrolledClasses: " << numOfEnrolledClasses << " \n";
    std::cout << "gpa: " << gpa << " \n";
    std::cout << "studentName: " << studentName << "\n";
    std::cout << "subjectMajor:  " << subjectMajor << "\n";
    std::cout << "expectedGraduationDate: " << expectedGraduationDate << "\n\n"; 
}

struct PetCat
{
    int numOfEyes {2};
    double legnthOfTail {10.35};
    std::string furColor = "Grey & White";
    int ageOfCat;
    std::string nameOfPetCat;
    bool maleGender;
    bool catHungry = true;

    struct CatCollar
    {
        std::string materialOfCollar {"Nylon"};
        float collarMeasurement {10.2f};
        bool isWaterProof = true;
        bool hasCollarBuckle;
        int numOfHolesForBuckle;
        int leashLength;

        CatCollar();

        void repelFleas(int repellantStrength, std::string repellantExpiration);
        void attachLeash();
        int tightenCollar(int bucklePosition);
        void printCatCollarVars();
        int leashExtend(int desiredLength)
        {
            if(desiredLength > leashLength)
            {
                std::cout << "leash isn't that long!\n";
            }
            else
            {
                for(int i = 0; i < desiredLength; ++i)
                {
                    std::cout << "extending to " << i << " \n";
                }
            }
            return desiredLength;
        }
    };

    PetCat();

    void takeOffCollar(CatCollar newCollar);
    void knockOverObjects();
    void scratchVisitors();
    CatCollar replacementCollar;
    void printPetCatVars();
    void catEatFood()
    {
        int nomNomNom = 0;
        
        if(catHungry == true)
        {
            while(catHungry == true && nomNomNom <= 3)
            {
                ++nomNomNom;
                std::cout << "nom nom nom... im still hungry!\n";
                
                if(nomNomNom > 3)
                {
                    std::cout << "Meow... I'm Full now.\n";
                    catHungry = false;
                }   
            }
        }
    }
};

PetCat::CatCollar::CatCollar() :
hasCollarBuckle(true),
numOfHolesForBuckle(4),
leashLength(10)
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
    else
    {
        std::cout << "This collar only has " << numOfHolesForBuckle << " please inut a whole number smaller or equal to that\n";
    }
    return bucklePosition;
}

void PetCat::CatCollar::printCatCollarVars()
{
    std::cout << "materialOfCollar: " << materialOfCollar << " \n";
    std::cout << "collarMeasurement: " << collarMeasurement << " \n";
    std::cout << "isWaterProof: " << isWaterProof << "\n";
    std::cout << "hasCollarBuckle:  " << hasCollarBuckle << "\n";
    std::cout << "numOfHolesForBuckle: " << numOfHolesForBuckle << "\n\n";  
}

PetCat::PetCat() :
ageOfCat(3),
nameOfPetCat("Doris"),
maleGender(false)
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

void PetCat::printPetCatVars()
{
    std::cout << "numOfEyes: " << numOfEyes << " \n";
    std::cout << "legnthOfTail: " << legnthOfTail << " \n";
    std::cout << "furColor: " << furColor << "\n";
    std::cout << "ageOfCat:  " << ageOfCat << "\n";
    std::cout << "maleGender:  " << maleGender << "\n";    
    std::cout << "nameOfPetCat: " << nameOfPetCat << "\n\n"; 
}

struct Human
{
    int ageInYears {33};
    std::string nameOfHuman {"First Last"};
    std::string ethnicity = "Black/African American";
    int dateOfBirth;
    std::string bloodType;
    int amountOfBlood;
    bool isAngry = false;

    struct HealthStatus
    {
        int numOfHealthComplications {0};
        bool chronicDiseasesPresent {false};
        bool goToAppointment = false;
        std::string dateOfLastCheckup = "23 Feburary 2022";
        float bodyMassIndex;
        std::string bloodPressureLevel;

        HealthStatus();

        void contractSTD(std::string whichSTD, std::string dateContracted);
        void developeHealthCondition(bool isHereditary, std::string knownSymptoms, std::string conditionName);
        void scheduleCheckUp(std::string returnDate, bool sameDoctor);
        void printHealthStatusVars();
        int countdownNextVisit(int daysSinceLastVisit)
        {
            int daysLeft = 365 - daysSinceLastVisit;
            
            for(int i = daysLeft; i > 0; --i)
            {
                std::cout << i << " days left until next visit\n";
            }
            goToAppointment = true;
            return daysLeft;
        }
    };

    Human();

    void visitDoctor(HealthStatus updateHealthStatus);
    void goToSleep(int howLong);
    void donateBlood(Human girlfriend, bool giveLeftArm);
    HealthStatus healthStatus;
    void printHumanVars();
};

Human::HealthStatus::HealthStatus() :
bodyMassIndex(23.8f),
bloodPressureLevel("120/83 mmHg")
{
    std::cout << "HealthStatus is being constructed!" << std::endl;
}

Human::Human() :
dateOfBirth(12181989),
bloodType("O Negative"),
amountOfBlood(5000) //mL
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

void Human::HealthStatus::printHealthStatusVars()
{
    std::cout << "numOfHealthComplications: " << numOfHealthComplications << " \n";
    std::cout << "chronicDiseasesPresent: " << chronicDiseasesPresent << " \n";
    std::cout << "dateOfLastCheckup: " << dateOfLastCheckup << "\n";
    std::cout << "bodyMassIndex:  " << bodyMassIndex << "\n";
    std::cout << "bloodPressureLevel: " << bloodPressureLevel << "\n\n"; 
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
    updateHealthStatus.goToAppointment = false;
}

void Human::goToSleep(int howLong)
{
    std::cout << nameOfHuman << " is going to get " << howLong << " hours of sleep!\n";
}

void Human::donateBlood(Human girlfriend, bool giveLeftArm)
{
    if(giveLeftArm == true)
    {
         std::cout << "you have decided to donate from your left arm\n";
    }
    else
    {
        std::cout << "you have decided to donate from your right arm\n";
    }
    int bloodDonated = 0;
    
    while(bloodDonated < 500 || girlfriend.amountOfBlood < 4000)
    {
        bloodDonated += 100;
        girlfriend.amountOfBlood -= 100;
        std::cout << "still donating: " << bloodDonated << "/500... hang in there.\n";
    }
    std::cout << "all done, go home\n";
}

void Human::printHumanVars()
{
    std::cout << "ageInYears: " << ageInYears << " \n";
    std::cout << "nameOfHuman: " << nameOfHuman << " \n";
    std::cout << "ethnicity: " << ethnicity << "\n";
    std::cout << "dateOfBirth:  " << dateOfBirth << "\n";
    std::cout << "bloodType: " << bloodType << "\n\n"; 
}

struct SocialStatus
{
    double netWorth {109841.65};
    std::string occupation {"Accountant"};
    int numOfFriends = 28;
    double annualIncome; //in USD
    int numOfClubMemberships;

    SocialStatus();
                 
    void attractMoreFriends(bool rejectNewFriend);
    void getExclusiveDeals();
    void bypassSocietalNorms();
    double capitalGainsFromInvestment(double moneyInvested, int forHowLong)
    {
        std::cout << "your current balance before the investment is: " << netWorth << " \n";
        double interest = moneyInvested * 0.12;
        int investmentTerm = 0;
        
        while(investmentTerm < forHowLong)
        {
            moneyInvested += interest;
            std::cout << moneyInvested << " added to your bank account\n";
            netWorth += moneyInvested;
            ++investmentTerm;
        }
        std::cout << "your new balance is: " << netWorth << " \n";
        return netWorth;
    }
    void printSocialStatusVars();
};

SocialStatus::SocialStatus() :
annualIncome(181650.23),
numOfClubMemberships(5)
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

void SocialStatus::printSocialStatusVars()
{
    std::cout << "netWorth: " << netWorth << " \n";
    std::cout << "occupation: " << occupation << " \n";
    std::cout << "numOfFriends: " << numOfFriends << "\n";
    std::cout << "annualIncome:  " << annualIncome << "\n";
    std::cout << "numOfClubMemberships: " << numOfClubMemberships << "\n\n";  
}

struct PhysicalAttribrutes
{
    int amountOfLimbs {4};
    std::string currentEyeColor {"brown"};
    float currentHeight = 4.7f;
    float currentWeight;
    std::string currentHairColor;

    PhysicalAttribrutes();

    void selectHairColor(std::string colorChoice);
    float increaseWeight(float addedPounds); //returns current weight + amount of lbs added.
    void loseLimb();
    void printPhysicalAttribrutesVars();
    float hitPuberty(Human newHuman, PhysicalAttribrutes newPhysAtt)
    {
        if(newHuman.ageInYears < 16)
        {
            while(newPhysAtt.currentHeight <= 5.0f)
            {
                newPhysAtt.currentHeight += 0.1f;
                std::cout << "you grew to " << newPhysAtt.currentHeight << " wow you're getting tall!\n";
            }
        }
        else
        {
            std::cout << "you are to old to go through puberty\n";
        }
        return newPhysAtt.currentHeight;
    }
};

PhysicalAttribrutes::PhysicalAttribrutes() :
currentWeight(167.93f),
currentHairColor("Dark Brown")
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

void PhysicalAttribrutes::printPhysicalAttribrutesVars()
{
    std::cout << "amountOfLimbs: " << amountOfLimbs << " \n";
    std::cout << "currentEyeColor: " << currentEyeColor << " \n";
    std::cout << "currentHeight: " << currentHeight << "\n";
    std::cout << "currentWeight:  " << currentWeight << "\n";
    std::cout << "currentHairColor: " << currentHairColor << "\n\n";  
}

struct Education
{
    std::string mostRecentSchool {"Florida Atlantic University"};
    int numOfYearsAttended {6};
    std::string highestDegreeAttained = "Master of Arts";
    int positionInClass;
    std::string orgSubjectMajor;

    Education();
                   
    std::string addDegree(std::string newestDegree); //returns newly added degree
    void dropOutOfSchool();
    std::string changeMajor(std::string whichMajor, std::string degreeLevel); //returns options for majors in accordance with associated degree level
    void attainNewDegree(int howLongIsProgram, Education moreEducation)
    {
        for(int yrsComplete = 0; yrsComplete <= howLongIsProgram; ++yrsComplete)
        {
            int yrsLeft = howLongIsProgram - yrsComplete;
            std::cout << "you've completed " << yrsComplete << " you have " << yrsLeft << " until program is complete\n";
            ++moreEducation.numOfYearsAttended;
        }
        std::cout << "New degree compelete!\n";
    }
    void printEducationVars();
};

Education::Education() :
positionInClass(211),
orgSubjectMajor("Finance")
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

void Education::printEducationVars()
{
    std::cout << "mostRecentSchool: " << mostRecentSchool << " \n";
    std::cout << "numOfYearsAttended: " << numOfYearsAttended << " \n";
    std::cout << "highestDegreeAttained: " << highestDegreeAttained << "\n";
    std::cout << "positionInClass:  " << positionInClass << "\n";
    std::cout << "orgSubjectMajor: " << orgSubjectMajor << "\n\n"; 
}

struct Home
{
    int numOfRooms;
    double propertySize;
    std::string homeAddress = "123 Main St, Orange Grove CA, 34567";
    std::string homeColor = "New Color";
    double propertyValue {375400.00};
    int numOfAppliances {10};

    Home();

    void appreaciateInValue(int years);
    std::string newPaintColor(std::string whatColor);
    void addRoomToHouse();
    std::string deteriorateOverTime(std::string brokenItem); //display what needs to be fixed.
    void printHomeVars();
};

Home::Home() :
numOfRooms(5),
propertySize(1373.56)
{
    std::cout << "Home being constructed!" << std::endl;
}

std::string Home::newPaintColor(std::string whatColor)
{
    homeColor = whatColor;
    return whatColor;
}

void Home::appreaciateInValue(int years)
{
    for(int i = 0; i < years; ++i)
    {
        propertyValue += 10560.95;
        std::cout << "your home's value went up to" << propertyValue << " \n";
    }
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

void Home::printHomeVars()
{
    std::cout << "numOfRooms: " << numOfRooms << " \n";
    std::cout << "propertySize: " << propertySize << " \n";
    std::cout << "homeAddress: " << homeAddress << "\n";
    std::cout << "propertyValue:  " << propertyValue << "\n";
    std::cout << "numOfAppliances: " << numOfAppliances << "\n\n"; 
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
    int bringUpIssue(Human girlfriend, int timesAsked, std::string issueName)
    {
        while(timesAsked < 3)
        {
            girlfriend.isAngry = false;
            std::cout << "hey just reminding you to address the " << issueName << " \n";
            ++timesAsked;
        }
        while(timesAsked < 10)
        {
            girlfriend.isAngry = true;
            std::cout << "Are you even going to do anything about the " << issueName << " \n";
            ++timesAsked;
        }
        if(timesAsked > 10)
        {
            std::cout << "I give up, Im not wasting my energy...\n";
            girlfriend.isAngry = false;
        }
        return timesAsked;
    }
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

    Television samsung; //done
    samsung.decreaseBrightness(98);
    samsung.changeDisplaySettings();
    samsung.increaseVolume(37);
    samsung.scanForChannels(191);
    samsung.printTelevisionVars();

    MassageChair osakiOS4000T; //done
    osakiOS4000T.giveMassage(true);
    osakiOS4000T.displayTimer(1);
    osakiOS4000T.playBackgroundSound();
    osakiOS4000T.printMassageChairVars();

    CollegeStudent rickSanchez; //done
    rickSanchez.studentName = "Rick Sanchez";
    rickSanchez.booksRead = 0;
    rickSanchez.attendStudyHall();
    rickSanchez.danceToMusic();
    rickSanchez.watchTelevision(rickSanchez);
    rickSanchez.readBook(10);
    rickSanchez.printCollegeStudent();

    PetCat::CatCollar friscoBreakaway; //done
    friscoBreakaway.repelFleas(10, "12/12/2012");
    friscoBreakaway.attachLeash();
    friscoBreakaway.tightenCollar(3);
    friscoBreakaway.leashExtend(8);
    friscoBreakaway.printCatCollarVars();
    
    PetCat doris; //done
    doris.knockOverObjects();
    doris.scratchVisitors();
    doris.takeOffCollar(friscoBreakaway);
    doris.catEatFood();
    doris.printPetCatVars();
    
    Human::HealthStatus may5thUpdate; //done
    may5thUpdate.contractSTD("Cold Sore", "10/28/2021");
    may5thUpdate.developeHealthCondition(false, "small blisters around body", "chickenpox");
    may5thUpdate.scheduleCheckUp("11/22/2024", true);
    may5thUpdate.countdownNextVisit(355);
    may5thUpdate.printHealthStatusVars();

    Human julianneCabour; //done
    julianneCabour.nameOfHuman = "Julianne Cabour";
    julianneCabour.ageInYears = 13;
    julianneCabour.goToSleep(10);
    julianneCabour.donateBlood(julianneCabour, false);
    julianneCabour.visitDoctor(may5thUpdate);
    julianneCabour.printHumanVars();

    SocialStatus upperClass; //done
    upperClass.attractMoreFriends(false);
    upperClass.bypassSocietalNorms();
    upperClass.getExclusiveDeals();
    upperClass.capitalGainsFromInvestment(100, 10);
    upperClass.printSocialStatusVars();

    PhysicalAttribrutes weak; //done
    weak.currentHeight = 4.9f;
    weak.increaseWeight(7.0);
    weak.loseLimb();
    weak.selectHairColor("Purple");
    weak.hitPuberty(julianneCabour, weak);
    weak.printPhysicalAttribrutesVars();
    
    Education graphicDesigner; //done
    graphicDesigner.changeMajor("Business", "BA");
    graphicDesigner.addDegree("Computer Science");
    graphicDesigner.dropOutOfSchool();
    graphicDesigner.attainNewDegree(6, graphicDesigner);
    graphicDesigner.printEducationVars();

    Home residence; //done
    residence.addRoomToHouse();
    residence.appreaciateInValue(5);
    residence.deteriorateOverTime("roofing");
    residence.newPaintColor("white");
    residence.printHomeVars();

    Girlfriend babe; //done
    babe.buildFurniture(julianneCabour, false);
    babe.presentIdeas(julianneCabour);
    babe.planDinnerDate("Arbys", "05/08/2023", "07:30");
    babe.bringUpIssue(julianneCabour, 1, "oil change");

    std::cout << "home address: " << residence.homeAddress << "\n";
    std::cout << "Social Status Occupation: " << upperClass.occupation << "\n";
    std::cout << "good to go!" << std::endl;
}
