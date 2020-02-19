/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On a new branch:

 1) Add a constructor for each User-Defined-Type.
 
 2) Instantiate a few of your user-defined types in the main function at the bottom of that file, and call some of those member functions.
 
 3) make them print out something interesting via std::cout
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type
{
    int a; //a member variable
    UDT() { a = 0; }             //3) the constructor
    void printThing()            //1) the member function
    {
        std::cout << "UDT::printThing() " << a << std::endl;  //5) printing out something interesting
    }
};

int main()
{
    UDT foo;              //4) instantiating a UDT in main()
    foo.printThing();     //4) calling a member function of the instance that was instantiated.
    
    return 0;
}
}

//insert Example::main() into main() of user's repo.


/*
 1)
 */
struct Human
{
    int numHands = 2;
    float height = 1.68f; // in [m]
    std::string chromosome = "XX";
    
    struct Hand
    {
        bool isLeftHand = false;
        float fingerLength = 0.082f;        //2) in [m]
    };
    
    bool isMale( Human human );
    
    Hand myLeftHand;
};

bool Human::isMale(Human human)
{
    std::size_t found = human.chromosome.find("Y");
    return (found!=std::string::npos ? true : false);
}

/*
 2)
 */
struct Computer
{
    int numKeys = 48;
    float processorSpeed = 4.2f; // in [GHz]
    bool isLaptop = true;
    bool isFormatted = false;

    struct App
    {
        bool isStandalone = true;
        float appSize = 300.0f; // in [MB]
    };
    
    void formatComputer(bool toFormat);
    
    App JUCE;
};

void Computer::formatComputer(bool toFormat)
{
    toFormat ? (isFormatted = true) : (isFormatted = false);
}


/*
 3)
 */
struct Watch
{
    int numBatteries = 1;
    int totalHours = 12;
    float weight = 50.0f; // in [g]
    bool isDigital = true;
    bool isResetted = true;
    float currentAlarmTime;

    struct Wristband
    {
        bool isLeather = true;
        int color = 25; // we don't know vectors so I'm supposing a unidimensional color scale :P
    };
    
    void reset(bool toReset);
    void setAlarm(float timeAlarm);
    
    Wristband myPlasticWB;
}; 

void Watch::reset(bool toReset)
{
    toReset ? (isResetted = true) : (isResetted = false);
}

void Watch::setAlarm(float timeAlarm)
{
    this->currentAlarmTime = timeAlarm;
}
/*
 4)
 */
struct Window
{
    float height = 2.0f; // in [m]
    float width = 1.0f; // in [m]
    float weight = 20.0f; // in [kg]
    bool isClean = true;
    bool isOpen = false;
    bool isGlassOpaque = true;

    struct Knob
    {
        bool isSteel = true;
        int color = 5; // we don't know vectors so I'm supposing a unidimensional color scale :P
    };
    
    void cleanWindow(bool toClean);
    void openWindow(bool toOpen);
    
    Knob myKnob;
}; 

void Window::cleanWindow(bool toClean)
{
    toClean ? (isClean = true) : (isClean = false);
}

void Window::openWindow(bool toOpen)
{
    toOpen ? (isOpen = true) : (isOpen = false);
}

/*
 5)
 */
struct Table
{
    int numLegs = 4;
    float height = 2.0f; // in [m]
    float width = 1.0f; // in [m]
    float weight = 20.0f; // in [kg]
    bool isWooden = true;
    bool isClean = true;

    struct Tablecloth
    {
        bool isPlastic = true;
        float height = 1.5f; // in [m]
        float width = 1.0f; // in [m]
    };
    
    void cleanTable(bool toClean);
    void placeTablecloth(Tablecloth myTablecloth);
    
    Tablecloth currentTablecloth;
}; 

void Table::cleanTable(bool toClean)
{
    toClean ? (isClean = true) : (isClean = false);
}

void Table::placeTablecloth(Table::Tablecloth myTablecloth)
{
    this->currentTablecloth = myTablecloth;
}

/*
 6)
 */
struct Train
{
    int numCarriages = 20;
    float height = 10.0f; // in [m]
    float length = 10.0f; // in [m]
    float width = 3.0f; // in [m]
    float weightPerCarriage = 10.0f; // in [ton]
    float maxSpeed = 75; // in [km/h]
    bool isInMotion = false;

    struct Carriage
    {
        int numWindows = 10;
        bool isSeatLeather = true;
        int maxNumPassengers = 25;
    };
    
    void start();
    void stop();
    
    Carriage myCarriage;
};  

void Train::start()
{
    this->isInMotion = true;
}

void Train::stop()
{
    this->isInMotion = false;
}


/*
 7)
 */
struct Shoe
{
    bool isClean = true;
    float weight = 500; // in [g]

    struct Lace
    {
        float length = 2; // in [m]
        int color = 25;
        bool isTied = false;
    };
    
    struct Logo
    {
        int color = 25;
        int logoIndex = 2; // assuming a preexisting vector including all the logos
    };

    void clean();
    void tieLace();

    Lace myCurrentLace;
};  

void Shoe::clean()
{
    this->isClean = true;
}

void Shoe::tieLace()
{
    this->myCurrentLace.isTied = true;
}


/*
 8)
 */
struct Egg
{
    float proteinContent = 10; // in [g]
    float weight = 100; // in [g]
    int numYolks = 1;
    bool isCooked = false;
    
    struct Shell
    {
        bool isCracked = false;
        int color = 2;
    };
    
    void crackShell();
    void cookEgg();

    Shell myEggShell;
};  

void Egg::crackShell()
{
    this->myEggShell.isCracked = true;
}

void Egg::cookEgg()
{
    this->isCooked = true;
}

/*
 9)
 */
#include <vector>
struct Backpack
{
    int numBooks = 3;
    bool contains = true;
    
    struct Book
    {
        std::string title;
        int pages;
    };

    std::vector<Book*> books;

    void removeLastBook();
    void addBook(Book bookToAdd);

};  

void Backpack::removeLastBook()
{
    books.pop_back();
    numBooks -= 1;
}

void Backpack::addBook(Book bookToAdd)
{
    books.push_back(&bookToAdd); // Add the address of the object bookToAdd to the vector (of pointers) books 
    numBooks += 1;
}


/*
 10)
 */
struct Classroom
{
    int numDesks = 20;
    int occupiedDesks = 12;
    float height = 3.0f; // in [m]
    float width = 4.0f; // in [m]
    float length = 5.0f; // in [kg]
    bool isBooked = true;

    struct Desk
    {
        bool isWooden = true;
        float height = 1.5f; // in [m]
        float width = 2.0f; // in [m]
    };
    
    // Desk myDesk;

    void spawnDesk();
    int howManyFreeDesks();
}; 

void Classroom::spawnDesk()
{
    this->numDesks += 1;
}

int Classroom::howManyFreeDesks()
{
    return numDesks - occupiedDesks;
}
 

#include <iostream>
int main()
{
    Example::main();
    std::cout << "----------------------\n" << std::endl;

    
    // --------------------------------
    Human human;
    std::cout << "The first considered human is " << (human.isMale(human) ? "male" : "female") << std::endl;
    std::cout << "----------------------\n" << std::endl;   
    // --------------------------------
    Computer computer;
    std::cout << "The current computer is " << (computer.isFormatted ? "formatted" : "NOT formatted") << std::endl;
    computer.formatComputer(true);
    std::cout << "Now, the current computer is " << (computer.isFormatted ? "formatted" : "NOT formatted") << std::endl;
    std::cout << "----------------------\n" << std::endl;
    // --------------------------------

    std::cout << "good to go!" << std::endl;
}
