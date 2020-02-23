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
 
 1) add some new member functions to your types. 
 
 2) use while() or for() loops to do something interesting inside these new member functions.
         a) for example: have a loop that modifies a member variable of some object created outside the loop.
         b) when that member variable reaches a certain threshold, return it mid-loop.
         c) maybe use function parameters to control the starting value of that member variable or control the threshold
         
 3) call those new member functions in main()
 
 4) use std::cout statements to print out information about what your loops did.
 
 5) click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 
 example:
 */

#include <iostream>
#include <vector>
namespace Example {
struct Bar 
{ 
    int num = 0; 
    Bar(int n) : num(n) { } 
};
struct Foo
{
    Bar scopeLifetimeFunc( int threshold, int startingVal ) //3), 4c) 
    {
        Bar bar(startingVal);                //4a)
        while( bar.num < threshold )         //4a) 
        { 
            bar.num += 1;                    //4a)
            
            if( bar.num >= threshold )       //4b)
                return bar;
        }
        
        return Bar {-1}; //if your startingValue >= threshold, the while loop never runs
    }
};

int main()
{
    Foo foo;
    auto bar = foo.scopeLifetimeFunc(3, 1);        //5) 
    
    std::cout << "bar.num: " << bar.num << std::endl;     //6) 
    return 0;
}
}

//call Example::main() in main()



/*
 1)
 */
struct Human
{
    int numHands;
    float height; // in [m]
    std::string chromosome = "XX";
    int totalSteps = 0;
    bool leftFootFront = true;

    Human() // constructor
    {
        numHands = 2;
        height = 1.68f; // in [m]
        std::cout << "Human object created" << std::endl;
        std::cout << "Current foot in front: " << (leftFootFront == true ? "Left" : "Right") << " foot" << std::endl;     
    }

    struct Hand
    {
        bool isLeftHand = false;
        float fingerLength = 0.082f;        //2) in [m]
    };
    
    bool isMale( Human human );
    void addSteps(int addedSteps);
    
    Hand myLeftHand;
};

bool Human::isMale(Human human)
{
    std::size_t found = human.chromosome.find("Y");
    return (found!=std::string::npos ? true : false);
}

// Add a given number of steps and update front foot
void Human::addSteps(int addedSteps)
{
    for (int i = 0; i < addedSteps; i++)
    {
        this->totalSteps += 1;
        if ( i % 2 == 0 )
            this->leftFootFront = false;
        else
            this->leftFootFront = true;
    }

    std::cout << "Total steps: " << this->totalSteps << "\nCurrent foot in front: " << (leftFootFront == true ? "Left" : "Right") << " foot" << std::endl;
}

// ------------------------------------------------------------------
// ******************************************************************
// ------------------------------------------------------------------

/*
 2)
 */
struct Computer
{
    int numKeys;
    float processorSpeed; // in [GHz]
    bool isLaptop;
    bool isFormatted;
    int formatTime = 10;

    Computer() : numKeys(48), isLaptop(true)// constructor
    {
        processorSpeed = 4.2f; // in [GHz]
        isFormatted = false;
        std::cout << "Computer object created" << std::endl;
    }

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
    int i = 0;
    std::cout << "Formatting computer" << std::endl;
    while (i < this->formatTime)
    {
        std::cout << "Current progress: " << ++i << "0%" << std::endl;
    }
    toFormat ? (isFormatted = true) : (isFormatted = false);
}

// ------------------------------------------------------------------
// ******************************************************************
// ------------------------------------------------------------------

/*
 3)
 */
struct Watch
{
    int numBatteries;
    int totalHours;
    float weight; // in [g]
    bool isDigital;
    bool isResetted;
    float currentAlarmTime;

    Watch() // constructor
    {
        numBatteries = 1;
        totalHours = 12;
        weight = 50.0f; // in [g]
        isDigital = true;
        isResetted = true;
        std::cout << "Watch object created" << std::endl;
    }

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



// ------------------------------------------------------------------
// ******************************************************************
// ------------------------------------------------------------------

/*
 4)
 */
struct Window
{
    float height; // in [m]
    float width; // in [m]
    float weight; // in [kg]
    bool isClean;
    bool isOpen;
    bool isGlassOpaque;
    int structIntegrity;
    int currDamage;


    Window(float height_, float width_, float weight_) //constructor
    {
        this->height = height_;
        this->width = width_;
        this->weight = weight_;
        isClean = true;
        isOpen = false;
        isGlassOpaque = true;
        structIntegrity = 10;
        currDamage = 0;
        print();
    }

    void print()
    {
        std::cout << 
        "Height: " << height << "\n" << 
        "Width: " << width << "\n" << 
        "Weight: " << weight << 
        std::endl;
    }

    struct Knob
    {
        bool isSteel = true;
        int color = 5; // we don't know vectors so I'm supposing a unidimensional color scale :P
    };
    
    void cleanWindow(bool toClean);
    void openWindow(bool toOpen);
    void hammerWindow(int numBlows);
    
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

// tests the structural integrity of the window upon a bunch of hammer blows
void Window::hammerWindow(int numBlows)
{
    for (int i = 0; i < numBlows; i++)
    {
        int blowStrength = rand() % 4 + 1;
        this->currDamage += blowStrength;
        if (this->currDamage >= this->structIntegrity)
        {
            std::cout << "The window has been broken!" << std::endl;
            break;
        }
        else
        {
            std::cout << "Current damage level: " << this->currDamage << "/10" << std::endl;
        }
    }
}

// ------------------------------------------------------------------
// ******************************************************************
// ------------------------------------------------------------------

/*
 5)
 */
struct Table
{
    int numLegs;
    float height; // in [m]
    float width; // in [m]
    float weight; // in [kg]
    bool isWooden;
    bool isClean;


    Table(int numLegs_, float height_, float width_, float weight_, bool isWooden_, bool isClean_) 
    {
        numLegs = numLegs_;
        height = height_; // in [m]
        width = width_; // in [m]
        weight = weight_; // in [kg]
        isWooden = isWooden_;
        isClean = isClean_;  
        print(); 
    }

    void print()
    {
        std::cout << 
        "Num legs: " << numLegs << "\n" << 
        "Height: " << height << "\n" << 
        "Width: " << width << "\n" << 
        "Weight: " << weight << 
        std::endl;
    }

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

// ------------------------------------------------------------------
// ******************************************************************
// ------------------------------------------------------------------

/*
 6)
 */
struct Train
{
    int numCarriages;
    float height; // in [m]
    float length; // in [m]
    float width; // in [m]
    float weightPerCarriage; // in [ton]
    float maxSpeed; // in [km/h]
    bool isInMotion;
    int maxPassengersPerCarriage;

    void print()
    {
        std::cout << 
        "Num carriages: " << numCarriages << "\n" << 
        "Height: " << height << "\n" << 
        "Width: " << width << "\n" << 
        "Length: " << length << 
        std::endl;
    }

    void printCarriages()
    {
        for (int i = 0; i < this->numCarriages; i++)
        {
            std::cout << 
            "Carriage " << i+1 << ": " << this->carriages[i].numPassengers <<
            std::endl;
        }
    }

    struct Carriage
    {
        int numWindows = 10;
        bool isSeatLeather = true;
        int maxNumPassengers;
        int numPassengers;
        Carriage(int numPassengers_) 
        {
            this->numPassengers = numPassengers_;
        }
    };

    std::vector<Train::Carriage> carriages;
    

    // constructor through initializer list
    Train() : 
    numCarriages(3), height(10.0f), length(10.0f), width(3.0f), weightPerCarriage(10.0f), maxSpeed(75), isInMotion(false), maxPassengersPerCarriage(50)
    {
        print();
        for (int i = 0; i < this->numCarriages; i++)
        {
            int numPassengers = rand() % 50 + 10;
            if ( numPassengers < maxPassengersPerCarriage )
            {
                Carriage myCarriage(numPassengers);
                this->carriages.push_back(myCarriage);
            }
            else
            {
                Carriage myCarriage(maxPassengersPerCarriage);
                this->carriages.push_back(myCarriage);
                std::cout << "Maximum carriage capacity reached;\nThe extra " << numPassengers - maxPassengersPerCarriage  << " passengers in carriage " << i+1 << " must move to another carriage" << std::endl; 
            }
        }
        printCarriages();
    }


    void start();
    void stop();
};  

void Train::start()
{
    this->isInMotion = true;
    std::cout << "We're leaving!" << std::endl;
}

void Train::stop()
{
    this->isInMotion = false;
    std::cout << "We're stopping!" << std::endl;
}

// ------------------------------------------------------------------
// ******************************************************************
// ------------------------------------------------------------------

/*
 7)
 */
struct Shoe
{
    // constructor
    Shoe()
    {
        weight = 500.0f;
    }

    bool isClean = true;
    float weight; // in [g]

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

// ------------------------------------------------------------------
// ******************************************************************
// ------------------------------------------------------------------

/*
 8)
 */
struct Egg
{
    Egg(); // constructor definition (implementation outside)

    float proteinContent = 10; // in [g]
    float weight = 100; // in [g]
    int numYolks = 1;
    bool isCooked;
    
    struct Shell
    {
        bool isCracked = false;
        int color = 2;
    };
    
    void crackShell();
    void cookEgg();

    Shell myEggShell;
};  

// constructor outside
Egg::Egg() : isCooked(false)
{

}

void Egg::crackShell()
{
    this->myEggShell.isCracked = true;
}

void Egg::cookEgg()
{
    this->isCooked = true;
}

// ------------------------------------------------------------------
// ******************************************************************
// ------------------------------------------------------------------

/*
 9)
 */
struct Backpack
{
    Backpack(); // constructor definition (implementation outside)

    int numBooks = 3;
    bool contains = true;
    
    struct Book
    {
        std::string title;
        int pages;

        Book (std::string title_, int pages_)
        {
            title = title_;
            pages = pages_; 
        }
    };

    std::vector<Book> books;

    void removeLastBook();
    void addBook(Book bookToAdd);

    
    void print()
    {
        for (int i = 0; i < this->numBooks; i++)
        {
            std::cout << "Book " << i+1 << ": " << this->books[i].title << ", pages " << this->books[i].pages << std::endl;
        }
    }

};  

Backpack::Backpack()
{
    std::string subjects[5] = { "Math", "English", 
                        "Physics", "Economy", "Chemistry" };

    for (int i = 0; i < this->numBooks; i++)
    {
        int numPages = rand() % 500 + 1;
        int subjInd = rand() % 5;
        Book myBook(subjects[subjInd], numPages);
        this->books.push_back(myBook);
        // std::cout << "Book " << i+1 << ": " << this->books[i].title << ", pages " << this->books[i].pages << std::endl;
    }

    print();
    
}

void Backpack::removeLastBook()
{
    books.pop_back();
    numBooks -= 1;
    std::cout << "One book removed" << std::endl;
}

void Backpack::addBook(Backpack::Book bookToAdd)
{
    books.push_back(bookToAdd); // Add the address of the object bookToAdd to the vector (of pointers) books 
    numBooks += 1;
    print();
}

// ------------------------------------------------------------------
// ******************************************************************
// ------------------------------------------------------------------

/*
 10)
 */
struct Classroom
{
    int numDesks;
    int occupiedDesks = 12;
    float height = 3.0f; // in [m]
    float width = 4.0f; // in [m]
    float length = 5.0f; // in [kg]
    bool isBooked = true;

    Classroom() : numDesks(20)
    {

    } 

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
    human.addSteps(3);
    std::cout << "----------------------\n" << std::endl;   
    // --------------------------------
    Computer computer;
    std::cout << "The current computer is " << (computer.isFormatted ? "formatted" : "NOT formatted") << std::endl;
    computer.formatComputer(true);
    std::cout << "Now, the current computer is " << (computer.isFormatted ? "formatted" : "NOT formatted") << std::endl;
    std::cout << "----------------------\n" << std::endl;
    // --------------------------------

    std::cout << "The current window has the following properties: " << std::endl;
    Window window(3.0f,2.0f,1.5f);
    srand(unsigned(time(NULL)));
    std::cout << "---- LET'S HAMMER THE WINDOW ---" << std::endl;
    window.hammerWindow(3);
    std::cout << "----------------------\n" << std::endl; 

    // --------------------------------

    std::cout << "The current table has the following properties: " << std::endl;
    Table table(4, 1.3f, 0.6f, 15.0f, true, true);
    std::cout << "----------------------\n" << std::endl; 

    // --------------------------------

    std::cout << "The current train has the following properties: " << std::endl;
    Train train;
    train.start();
    train.stop();
    std::cout << "----------------------\n" << std::endl; 


    // --------------------------------

    Backpack backpack;
    std::cout << "The current backpack has " << backpack.numBooks << " books" <<std::endl;
    backpack.removeLastBook();
    std::cout << "The current backpack has " << backpack.numBooks << " books" <<std::endl;
    Backpack::Book myBook("Law",320);
    backpack.addBook(myBook);
    std::cout << "The current backpack has " << backpack.numBooks << " books" <<std::endl;
    std::cout << "----------------------\n" << std::endl; 

    // --------------------------------
    std::cout << "good to go!" << std::endl;
}
