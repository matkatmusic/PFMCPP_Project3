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
   
//    5 properties:
//      1) grade std::string
    std::string grade = "11";
//      2) gpa float
    float gpa = 3.2f;
//      3) number of friends int
    int numFriends = 3;
//      4) favorite class std::string
    std::string favClass = "Math";
//      5) major std::string
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
//    3 things it can do:
//        1) Homework
    Class thisClass;
    void doHomework(Class test);
//        2) Take exams
    void takeExams();
//        3) disrupt class
    void disruptClass();

};

struct Employee
{
//.    5 properties:
//      1) job title std::string
    std::string jobTitle = "Designer";
//      2) hourly wage float
    float hourlyWage = 3.5f;
//      3) shift number int
    int shiftNumber = 2;
//      4) Name std::string
    std::string name = "Ted";
//      5) Employee Id int
    int employeeId = 57;
//    3 things it can do:
//        1) come to work
    void comeToWork();
//        2) work shift
    void workShift(int shiftNumber);
//        3) collect pay
    float collectPay(float hourlyWage);

};

struct Computer
{
//    5 properties:
//      1) Files int
    int files = 10;
//      2) Directories int
    int directories = 3;
//      3) hard drive std::string
    std::string hardDrive = "C";
//      4) ram float
    float ram = 96.2f;
//      5) cpu float
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
//    3 things it can do:
//        1) boot an ooperating system
    File currentFile;
    void bootComputer();
//        2) run software
    bool runSofware(std::string type);
//        3) save files
    void saveFile(File file);
    
};
struct Building
{
//    5 properties:
//      1) rooms int
    int rooms = 16;
//      2) hallways int

    int hallways = 8;
//      3) elevators int
    int elevators = 1;
//      4) carpet float
    float carpet = 19.3f;
//      5) ceilings int
    int ceilings = 8;        
//      3 things it can do:
//        1) provide a place of business
    void providePlaceOfBusiness(std::string businessType);
//        2) provide a dwelling
    void provideDwelling(int squareFeet);
//        3) provide space for government work
    void provideSpaceForGovWork(int squareFeet);
    
};

struct Burner
{
//.    5 properties:
//        1) type std::string
    std::string type = "Gas";
//        2) maxHeatTemp float
    float maxHeatTemp = 320.5f;
//        3) circumference float
    float circumference = 16.4f;
//        4) diameter float
    float diameter = 10.2f;
//        5) drippan int
    int dripPan = 5;
//    3 things it can do:
//        1) broil
    void broil(std::string foodType);
//        2) boil
    void boil(int burnerNumber);
//        3) fry
    void fry(int burnerNumber);

};

struct Racks
{
//.    5 properties:
//      1) numRacks int
    int numRacks = 3;
//      2) material std::string
    std::string material = "Metal";
//      3) brand std::string
    std::string brand = "Kenmore";
//      4) maxTemp float
    float maxTemp = 530.4f;

    float widthInInches = 20.6f;
/*        5) i really just cant think of another property         of a stupid oven rack */
//    3 things it can do:
//        1) induction cooking
    void inductionCooking(int rackNumber);
//        2) invection cooking
    void invectionCooking(int rackNumber);
//    3) hold food
    void holdFood(int rackNumber);
    
};


struct OvenDoor
{
//      5 properties:
//        1)numhandles int
    int numHandles = 2;
//        2) numWindows int
    int numWindows = 1;
//        3) brand std::string
    std::string brand = "Kenmore";
//        4) frameBuildingMaterial std::string
    std::string frameMaterial = "Metal";
//        5) insulationType std::string
    std::string insulationType = "None";
//    3 things it can do:
//        1) open
    void open();
//        2) close
    void close();
//        3) hold in heat
    void holdInHeat();

};

struct TemperatureGuage
{
//    5 properties:
//        1) typeofDisplay std::string
    std::string displayType = "digital";
//        2) temperature float
    float temperature = 200.7f;
//        3) time float
    float time = 160.5f;
//        4) material std::string
    std::string material = "glass";
//  power std::string (on or off could be bool)
    bool power = true;
//    3 things it can do:
//        1) display temperature
    int displayTemperature();
//        2) raise temperature
    void raiseTemperature();
//        3) lower temperature
    void lowerTemperature();
    
};

struct Timer
{
//    5 properties:
//      1) currentTime float
    float currentTime = 610.6f;
//      2) type std::string
    std::string type = "digital";
//      3) material std::string
    std::string material = "glass";
//      4) brand std::string
    std::string brand = "Kenmore";
//      5) amountTimeLeft float
    float secondsRemaining = 234.5f;
//    3 things it can do:
//        1) Countdown Timer
    float countDownTimer(float timeAmount);
//        2) display current time
    float displayCurrentTime();
//     3) can be manually set
    void setTime(float time);
    

};

struct Oven
{
    Burner burner;
    Timer timer;
    TemperatureGuage tempGuage;
    OvenDoor ovenDoor;
    Racks racks;
    void turnOnBurner(Burner burner);
    void setTimer(float time);
    TemperatureGuage setTemp(int Temp);
};








int main()
{
    std::cout << "good to go!" << std::endl;
}
