 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */

struct Person
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    int distanceTraveled = 0;
    
    float run(int howFast, bool startWithLeftFoot);
    
    struct Foot
    {
        bool hasMoved;
        void stepForward() {
            this->hasMoved = true;
        }
        float stepSize() { return 1; }
    };
    Foot leftFoot, rightFoot;
};

float Person::run(int howFast, bool startWithLeftFoot)
{
    if ( startWithLeftFoot == true)
    {
        // stepForward returns void
        leftFoot.stepForward(); 
        rightFoot.stepForward();
    }
    else
    {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }
    // stepSize returns int
    return distanceTraveled += leftFoot.stepSize()*howFast + rightFoot.stepSize()*howFast;
}



 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

/*
 1)
 */
struct Human
{
    int numHands = 2;
    float height = 1.68f; // in [m]
    
    struct Hand
    {
        bool isLeftHand = false;
        float fingerLength = 0.082f;        //2) in [m]
    };
    
    void isMale( Human human );
    
    Hand myLeftHand;
};

/*
 2)
 */
struct Computer
{
    int numKeys = 48;
    float processorSpeed = 4.2f; // in [GHz]
    bool isLaptop = true;

    struct App
    {
        bool isStandalone = true;
        float appSize = 300.0f; // in [MB]
    };
    
    void formatComputer(bool toFormat);
    
    App JUCE;
};


/*
 3)
 */
struct Watch
{
    int numBatteries = 1;
    int totalHours = 12;
    float weight = 50.0f; // in [g]
    bool isDigital = true;

    struct Wristband
    {
        bool isLeather = true;
        int color = 25; // we don't know vectors so I'm supposing a unidimensional color scale :P
    };
    
    void reset(bool toReset);
    void setAlarm(float timeAlarm);
    
    Wristband myPlasticWB;
}; 

/*
 4)
 */
struct Window
{
    float height = 2.0f; // in [m]
    float width = 1.0f; // in [m]
    float weight = 20.0f; // in [kg]
    bool isClean = true;
    bool isGlassOpaque = true;

    struct Knob
    {
        bool isSteel = true;
        int color = 5; // we don't know vectors so I'm supposing a unidimensional color scale :P
    };
    
    void cleanWindow(bool toClean);
    void openWindon(bool toOpen);
    
    Knob myKnob;
}; 

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

    struct Tablecloth
    {
        bool isPlastic = true;
        float height = 1.5f; // in [m]
        float width = 1.0f; // in [m]
    };
    
    void cleanTable(bool toClean);
    void placeTablecloth(Tablecloth myTablecloth);
    
    Tablecloth myTablecloth;
}; 

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

/*
 7)
 */
struct Shoe
{

    float weight = 500; // in [g]

    struct Lace
    {
        float length = 2; // in [m]
        int color = 25;
    };
    
    struct Logo
    {
        int color = 25;
        int logoIndex = 2; // assuming a preexisting vector including all the logos
    };

    void clean(Shoe myShoe);
    void tieLace(Shoe myShoe, Lace myLace);

};  

/*
 8)
 */
struct Egg
{
    float proteinContent = 10; // in [g]
    float weight = 100; // in [g]
    int numYolks = 1;
    
    struct Shell
    {
        bool isCracked = false;
        int color = 2;
    };
    
    void crackShell(Shell myEggShell);
    void cookEgg();

    Shell myEggShell;
};  

/*
 9)
 */
struct Graph
{
    int numNodes = 10;
    bool isFullyConnected = true;
    
    void initializeGraph(Graph myGraph);
    void printGraph(Graph myGraph);
    int maxNode(Graph myGraph);

};  


/*
 10)
 */
struct Classroom
{
    int numDesks = 20;
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
    
    void spawnDesk(Classroom myClass, Desk myDesk);
    int howManyFreeDesks(Classroom myClass);


}; 
 

#include <iostream>
int main()
{
    Person person;
    std::cout << "Total distance " << person.run(5.0f, true) << std::endl;
    // Test if left foot has moved
    std::cout << "Left foot has " << (person.leftFoot.hasMoved ? "" : "not ") << "moved" <<  std::endl;
    // Test if right foot has moved
    std::cout << "Right foot has " << (person.leftFoot.hasMoved ? "" : "not ") << "moved" <<  std::endl;        

    std::cout << "good to go!" << std::endl;
}
