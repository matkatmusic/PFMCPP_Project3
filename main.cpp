/*
 Project 3 - Part 1 / 5
Video:  Chapter 2 Part 5
 User-Defined Types

 Create a branch named Part1
 
 1) write 10 user-defined types, each with a random number of member variables
    try to make the member variables have names that are related to the user-defined type.
 
 2) give the member variables relevant data types
 
 3) add a couple member functions.  
    make the function parameter list for those member functions use some of your User-Defined Types
 
 4) make 2 of the 10 user-defined types be nested class
 
 5) One of your UDTs should only use UDTs for its member variable types.   
     No primitives allowed!
 
 6) After you finish defining each type, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

/*
 example:
 */
struct CarWash            //1) a U.D.T. with a random number of member variables
{
    int numSponges = 3;
    double amountOfSoapUsedPerCar = 2.6; //2) relevant data types
    unsigned int numCarsProcessed = 0;
    
    struct Car                             //4) nested class
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        //2) relevant data types
    };
    
    void washAndWaxCar( Car car );         //3) member function with a user-defined type as the parameter.  The user-defined type parameter happens to be the nested class.
    
    Car myCar;  //5) a member variable whose type is a UDT.
};


/*
 1)
 */
struct Person
{
    int numHands = 2;
    float height = 1.68f; // in [m]
    
    struct Hand
    {
        bool isLeftHand = false;
        float fingerLength = 0.082f;        //2) in [m]
    };
    
    void isMale( Person person );
    
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
    std::cout << "good to go!" << std::endl;
}
