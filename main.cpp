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

        void fillTank(double fuelAmountInGallons = 2.0);  
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
struct Foot
{
    int stepSize();
    void stepForward();
};
int Foot::stepSize()
{
    return 8;
}

void Foot::stepForward()
{

}

struct Person
{	
    int age;	    
    int height;	    
    float hairLength;	    
    float GPA;
    unsigned int SATScore;
    int distanceTravelled;
    Foot leftFoot;
    Foot rightFoot;

    void run(int, bool);

};


void Person::run(int howFast, bool startWithLeftFoot)
{
    if (startWithLeftFoot)
    {
        distanceTravelled += leftFoot.stepSize() + rightFoot.stepSize();
    }
    else 
    {
        distanceTravelled += rightFoot.stepSize() + leftFoot.stepSize();
    }
    howFast -= 1;
}	



 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you decide to write empty functions, you will need to fill them in with code in part 3.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */

struct CentralProcessingUnit
{
    int numberOfCores = 8;
    float clockSpeedInGHz = 2.8f;
    int l1CacheSize = 8;
    int l2CacheSize = 16;
    int l3CacheSize = 32;

    std::string communicateWithRAM();
    std::string communicateWithMotherboard();
    float processData();
};
std::string CentralProcessingUnit::communicateWithRAM()
{
    return "Hi RAM";
}
std::string CentralProcessingUnit::communicateWithMotherboard()
{
    return "Hi Motherboard";
}
float CentralProcessingUnit::processData()
{
    float processedData = 1.0f;
    return processedData;
}

struct Cat
{

    int numLegs = 4;
    int mealSize = 5;
    float catWeight = 5.5f;
    float tailLength = 20.3f;
    int killedRats = 15;

    struct Tree
    {
        int numLeaves = 100;
        unsigned int numBranches = 20;
        float heightInMeters = 10.3f;
        int numFlowers = 1;
        std::string treeType = "Apple";

        float growTaller();
        int growBranches();
        int shedLeaves();
    };
    Tree tree;
    std::string climbTree(Tree tree);
    std::string hissAtDog();
    std::string purr();
};
float Cat::Tree::growTaller()
{
    heightInMeters += 2.5f;
    return { };
}
int Cat::Tree::growBranches()
{
    numBranches += 5;
    return { };
}
int Cat::Tree::shedLeaves()
{
    numLeaves -= 10;
    return { };
}

std::string Cat::climbTree(Cat::Tree tree1)
{
    return "Mrrrrrrow (I am stuck at "+ std::to_string(tree1.heightInMeters) + " m)";
}

std::string Cat::hissAtDog()
{
    return "HISSSSSS";
}
std::string Cat::purr()
{
    return "PURRRRRR";
}

struct Plane 
{
    int numWheels = 3;
    unsigned int numWings = 2;
    int sizeOfFuelTank = 2000;
    int numPassengers = 250;
    int numDailyFlights = 4;
    
    struct Pilot
    {
        int distanceFlown = 100000;
        int age = 30;
        float heightInCentimeters = 175.2f;
        float weightInKilograms = 68.3f;
        std::string airline = "Emirates";

        std::string flyPlane();
        std::string contactATC();
        std::string talkToCoPilot();
    };

    std::string takeOff();
    std::string land();
    std::string cruise (int altitude = 50000);
};

std::string Plane::Pilot::flyPlane()
{
    return "I believe I can fly";
}

std::string Plane::Pilot::contactATC()
{
    return "Coming in for landing";
}

std::string Plane::Pilot::talkToCoPilot()
{
    return "Do you want to take over while I take a nap?";
}

std::string Plane::takeOff()
{
    return "Up in the air now";
}

std::string Plane::land()
{
    return "Back on terra firma";
}

std::string Plane::cruise(int altitude1)
{
    return "Cruising at"+ std::to_string(altitude1) + "feet";
}

struct CoffeeShop
{
    int numTables = 10;
    int numChairs = 40;
    int numDailyCustomers = 400;
    int numCups = 10000;
    int numCoffeeMachines = 2;

    std::string takeOrder();
    std::string makeCoffee (std::string order = "Latte");
    std::string serveCoffee (std::string order = "Americano");
};

std::string CoffeeShop::takeOrder()
{
    return "May I take your order?";
}

std::string CoffeeShop::makeCoffee(std::string order1)
{
    return "I have made 1 " + order1;
}

std::string CoffeeShop::serveCoffee(std::string order1)
{
    return "Here is your " + order1;
}


struct Student
{
    int age = 20;
    float heightInCentimeters = 180.2f;
    float weightInKilos = 70.2f;
    float gpa = 3.8f;
    unsigned int greScore = 325;

    std::string study(std::string subject = "Math");
    std::string attendClass(std::string lesson = "English");   
    std::string skipClass(std::string lesson = "History");
};

std::string Student::study(std::string subject1)
{
    return "I am studying " + subject1;
}

std::string Student::attendClass(std::string lesson1)
{
    return "I am attending my " + lesson1 + " lesson";
}

std::string Student::skipClass(std::string lesson1)
{
    return "I'm missing my " + lesson1 + " class";
}

struct Teacher
{
    int age = 45;
    float heightInCentimeters = 175.2f;
    int compensation = 90000;
    std::string highestDegreeHeld = "PhD";
    std::string position = "Senior Professor";

    std::string teach();
    std::string conductPopQuiz();
    std::string gradeStudents();
};

std::string Teacher::teach()
{
    return "a + b = c";
}

std::string Teacher::conductPopQuiz()
{
    return "Good luck with your test";
}

std::string Teacher::gradeStudents()
{
    return "You got an A";
}

struct MusicDepartment
{
    int numUndergraduateStudents = 100;
    int numStaff = 15;
    int numCourses = 10;
    int numPostgraduateStudents = 30;
    int numPracticeRooms = 5;

    std::string organiseConcert();
    std::string changeCourseContents(std::string course);
    std::string addNewCourse(std::string newCourse);
};

std::string MusicDepartment::organiseConcert()
{
    return "Welcome to the concert";
}

std::string MusicDepartment::changeCourseContents(std::string course1)
{
    return "I'm changing the course contents of" + course1;
}

std::string MusicDepartment::addNewCourse(std::string newCourse1)
{
    return "We are introducing a new course: " + newCourse1;
}

struct Cafeteria
{
    float costItemOne = 3.50f;
    float costItemTwo = 5.95f;
    int numEmployees = 12;
    float costMonthlyIngredients = 1093.25f;
    float monthlyRevenue = 50096.95f;

    std::string changeMenu();
    std::string serveFood();
    float collectPayment(float payment);
};

std::string Cafeteria::changeMenu()
{
    return "New Menu";
}

std::string Cafeteria::serveFood()
{
    return "Here is your food";
}

float Cafeteria::collectPayment(float payment1)
{
    return payment1;
}

struct Library
{
    int librarianAge = 58;
    int numEmployees = 5;
    int numShelves = 50;
    int numBooks = 3000;
    float lateFees = 2.5f;

    std::string checkOutBook();
    std::string returnBook();
    float chargeLateFee(float lateFee, int numDays);
};

std::string Library::checkOutBook()
{
    return "Enjoy your book";
}

std::string Library::returnBook()
{
    return "Did you enjoy your book?";
}

float Library::chargeLateFee(float lateFee1, int numDays1)
{
    return lateFee1 * numDays1;
}

struct University
{
    Student student1;
    Teacher teacher1;
    MusicDepartment musicDepartment1;
    Cafeteria cafeteria1;
    Library library1;

    std::string conductExams();
    float collectFees(int numStudents,float yearlyFees);
    std::string holdGraduation();
};

std::string University::conductExams()
{
    return "Good luck with your exams";
}

float University::collectFees(int numStudents1, float yearlyFees1)
{
    return numStudents1 * yearlyFees1;
}

std::string University::holdGraduation()
{
    return "Good bye, good luck";
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
    std::cout << "good to go!" << std::endl;
}
