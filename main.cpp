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
    int stSize;
    void stepForward();
    int stepSize();
};

struct Person 
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    int distanceTraveled;
    Limb leftFoot, rightFoot;

    void run(bool startWithLeftFoot);
};

void Person::run(bool startWithLeftFoot)
{
   if(startWithLeftFoot)
   {
       leftFoot.stepForward();
       rightFoot.stepForward();
   }
   else
   {
       rightFoot.stepForward();
       leftFoot.stepForward();
   }

    distanceTraveled += rightFoot.stepSize() + leftFoot.stepSize();
}

void Limb::stepForward()
{
    std::cout << "took a step";
}

int Limb::stepSize()
{
    return stSize;
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

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

struct Student
{
    std::string name = "Ted";
    std::string grade = "11";
    float gpa = 3.2f;
    int numFriends = 3;
    std::string favClass = "Math";
    std::string major = "English";

    struct Class
    {
        std::string className = "Calculus";
        std::string classSylabus = "....";
        char highGrade = 'A';
        char lowGrade = 'F';
        std::string classMaterial = "....";

        void teachClass(std::string className);
        void takeClass(std::string className);
        float assignHomework(Student student, std::string className = "English");
    };

    Class thisClass;
    void doHomework(Class test);
    void takeExams();
    void disruptClass();
};

void Student::doHomework(Class test)
{
    std::cout << "Homework is done for class: " << test.className;
}

void Student::takeExams()
{
    std::cout << "zexams are finished!";
}

void Student::disruptClass(){
    std::cout << "Student throws a paper ball towards the teacher";
}

void Student::Class::teachClass(std::string classDistinction){
    std::cout << classDistinction<< " is in session";
}

void Student::Class::takeClass(std::string classDistinction)
{
    std::cout << "Taking class : " << classDistinction; 
}

float Student::Class::assignHomework(Student student, std::string classDistinction)
{
    std::cout << student.name << " has been assigned homework for "<< classDistinction;
    return 1.0f;
}

struct Employee
{
    std::string jobTitle = "Designer";
    float hourlyWage = 3.5f;
    int shiftNumber = 2;
    std::string name = "Ted";

    int employeeId = 57;
    void comeToWork();
    void workShift(int shiftNumber);
    float collectPay(float hourlyWage);
};

void Employee::comeToWork()
{
    std::cout << "Heading to work for the day";
}

void Employee::workShift(int shift)
{
    std::cout << name << " is starting work on shift number: " << shift;  
}

float Employee::collectPay(float wage)
{
    float pay = 8*wage;
    std::cout << name << " just got paid.";
    return pay;
}

struct Computer
{
    int files = 10;
    int directories = 3;
    std::string hardDrive = "C";
    float ram = 96.2f;
    float cpu = 16.7f;

    struct File
    {
        std::string fileType = "Excel";
        std::string fileName = "Test";
        int fileSize = 100000;
        std::string fileExtension = "xslx";
        std::string fileLocation = "C\\:Files";
        File getFile(std::string fileName);
        float loadFile(std::string fileName);
        std::string getFileType(std::string fileName, std::string fileExtension);
    };

    File currentFile;
    void bootComputer();
    bool runSofware(std::string type);
    void saveFile(File file);   
};

void Computer::bootComputer()
{
    std::cout << "Computer is booting";
}

bool Computer::runSofware(std::string type)
{
    std::cout << type << " is now running";
    bool isRunning = true;
    return isRunning;
}

void Computer::saveFile(File file)
{
    std::cout << file.fileName << " has been saved";
}

Computer::File Computer::File::getFile(std::string file)
{
    std::cout << "retrieving " << file;
    return *this;
}

float Computer::File::loadFile(std::string file)
{
    std::cout << file << " has been loaded";
    return 1.0f;
}

std::string Computer::File::getFileType(std::string file, std::string fileExt)
{
    std::cout << "Your file " << file << "." << fileExt << " is a Word document";
    return "running";
}

struct Building
{
    int rooms = 16;
    int hallways = 8;
    int elevators = 1;
    float carpet = 19.3f;
    int ceilings = 8;        

    void providePlaceOfBusiness(std::string businessType);
    void provideDwelling(int squareFeet);
    void provideSpaceForGovWork(int squareFeet);  
};

void Building::provideDwelling(int squareFeet)
{
    std::cout << "You have " << squareFeet << " squarefeet in which to live";
}

void Building::providePlaceOfBusiness(std::string businessType)
{
    std::cout << "You have now rented space for your " << businessType << " business";
}

void Building::provideSpaceForGovWork(int squareFeet)
{
    std::cout << "You now have " << squareFeet << " squarefeet in which to run your govt offices";
}

struct Burner
{
    std::string type = "Gas";
    float maxHeatTemp = 320.5f;
    float circumference = 16.4f;
    float diameter = 10.2f;
    int number = 1;

    void broil(std::string foodType);
    void boil(int burnerNumber);
    void fry(int burnerNumber);
};

void Burner::boil(int burnerNumber)
{
    std::cout << "Now boiling on burner number " << burnerNumber;
}

void Burner::broil(std::string foodType)
{
    std::cout << "Now broiling " << foodType;
}

void Burner::fry(int burnerNumber)
{
    std::cout << "Now frying on burner number " << burnerNumber; 
}

struct Racks
{
    int numRacks = 3;
    std::string material = "Metal";
    std::string brand = "Kenmore";
    float maxTemp = 530.4f;
    float widthInInches = 20.6f;

    void inductionCooking(int rackNumber);
    void invectionCooking(int rackNumber);
    void holdFood(int rackNumber);
    
};

void Racks::holdFood(int rackNumber)
{
    std::cout << "Now holding food on rack number " << rackNumber;    
}

void Racks::inductionCooking(int rackNumber)
{
    std::cout << "Now induction cooking on rack number " << rackNumber;
}

void Racks::invectionCooking(int rackNumber)
{
    std::cout << "Now invection cooking on rack number " << rackNumber;
}

struct OvenDoor
{
    int numHandles = 2;
    int numWindows = 1;
    std::string brand = "Kenmore";
    std::string insulationType = "None";

    void open();
    void close();
    void holdInHeat();
};

void OvenDoor::open()
{
    std::cout << "Oven door is now open";
}

void OvenDoor::close()
{
    std::cout << "Oven door is now closed";
}

void OvenDoor::holdInHeat()
{
    std::cout << "Oven door is holding in heat";
}

struct TemperatureGuage
{
    std::string displayType = "digital";
    float temperature = 200.7f;
    std::string material = "glass";
    bool power = true;

    float displayTemperature();
    void raiseTemperature();
    void lowerTemperature();  
};

float TemperatureGuage::displayTemperature()
{
    std::cout << this->temperature;
    return this->temperature;
}

void TemperatureGuage::raiseTemperature()
{
    std::cout << "Temperature has been raised by 5 degrees";
}

void TemperatureGuage::lowerTemperature()
{
    std::cout << "Temperature has been lowered by 5 degrees";
}

struct Timer
{
    float currentTime = 610.6f;
    std::string type = "digital";
    std::string material = "glass";
    std::string brand = "Kenmore";
    int secondsRemaining = 234;

    float countDownTimer(float timeAmount);
    float displayCurrentTime();
    void setTime(float time);
};

float Timer::countDownTimer(float timeAmount)
{
    std::cout << "You have " << timeAmount << "minutes left in the timer";
    return timeAmount - 1;
}

float Timer::displayCurrentTime()
{
    std::cout << "The current time is " << this->currentTime << " minutes past midnight";
    return this->currentTime;
}

void Timer::setTime(float time)
{
    std::cout << "You have set the time to " << time << " minutes past midnight";
}

struct Oven
{
    Burner burner;
    Timer timer;
    TemperatureGuage tempGuage;
    OvenDoor ovenDoor;
    Racks racks;

    void turnOnBurner();
    int getTimer();
    TemperatureGuage setTemp(int temp);
};

void Oven::turnOnBurner()
{
    std::cout << "Burner number " << this->burner.number << " has been turned on";      
}

int Oven::getTimer()
{
    std::cout << this->timer.secondsRemaining << " seconds are remaining";
    return this->timer.secondsRemaining;
}

TemperatureGuage Oven::setTemp(int temp)
{
    std::cout << "The tem is now set to " << temp;
    return this->tempGuage;
}








int main()
{
    std::cout << "good to go!" << std::endl;
}
