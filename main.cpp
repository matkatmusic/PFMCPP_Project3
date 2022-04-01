/*
Project 3 - Part 1e / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct below your plain-english UDT. i.e.:

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

#if false //ignore these #if #endif lines. they're just here to prevent compiler errors.
struct CarWash
{

};
#endif
/*
    - Do this for all 10 UDTs

2) Below your plain-english UDT, Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    - Do this for all 10 UDTs
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
    - Do this for all 10 UDTs
    - if your functions return something other than 'void', add a comment explaining what is being returned.  see the example code below.
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
    - Do this for all 10 UDTs
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
    if your code produces a [-Wpadded] warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */

/*
 example:  

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

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function.  it has multiple arguments, some with default values.
        //the parameter names are related to the work the function will perform.
        void fillTank(float costPerGallon, double fuelAmountInGallons = 2.0, bool requiresDiesel = false);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips); //3) returns the number of miles traveled
    };

    //wash and wax car
    void washAndWaxCar(Car carA); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage); //3) returns the total amount charged.
    //detail the car interior
    void detailInterior(Car carB);
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  

    /*
    Pay attention to the member functions that take an instance of 'Car'
    Notice that there is a member variable of the same type.

    It makes sense to pass a Car to the function 'washAndWaxCar' because car washes service MANY cars
    However, they only service ONE car at a time.
    the carBeingServiced's value would change every time you wash and wax the car. 

    I see many students who write code emulating this format, but their usage does not make logical sense.  
    Consider the following snippet:

    struct SoccerTeam
    {
        struct Manager
        {
            ...
        };

        // train their skills
        void trainPlayerSkills(Manager managerA);
    
        Manager teamManager;
    };

    It does not make sense to pass in a new Manager whenever you are going to train your team players.
    Soccer teams have ONE manager.

    a much more relevant usage would be adding a member function that hires a new manager:

    struct SoccerTeam
    {
        struct Manager
        {
            ...
        };

        void hireNewManager(Manager newManager);
    
        Manager teamManager;
    };

    We can safely assume that the 'Manager' instance that is being passed in will be replacing the current 'teamManager' variable without looking at any other code.
    This is because the function name and function argument clearly indicate what they are/what they do.

    Your function names and parameter names should make LOGICAL SENSE.
    Readers of your code should be able to INTUITIVELY understand what your function implementations will do without actually seeing the implementations.

    Keep this in mind when you define your UDTs in this project part.
    */
};

/*
Thing 1) Bicycle
5 properties:
    1) Number of wheels (int)
    2) Miles covered by month (float)
    3) Number of punctures suffered (int) 
    4) Amount of fitness gained (double)
    5) Number of gears fitted (int)
3 things it can do:
    1) Travel from point a to point b
    2) Beat busy london traffic
    3) Use cycle paths


struct Bicyle
{
    //number of wheels (int)
    int numOfWheels = 4;
    //miles covered by month (float)
    float milesCoveredInMonth = 4.2f
    //number of punctures suffered (int) 
    int puncSuffered = 1;
    //amount of fitness gained (double)
    double fitnessGained = 10;
    //number of gears fitted (int)
    int numOfGears = 11;
    //travel from point a to point b
    void travelFromAToB;
    //beat busy london traffic
    bool beatLondonTraffic = true;
    //use cycle paths
    bool UseCyclePaths = true;
};
/*


Thing 2) Coffee Machine
5 properties:
    1) Number of coffees made per week (int)
    2) Amount of water needed (float)
    3) Number of steam wands (int)
    4) Adjustable temperature control (bool)  
    5) Number of groupheads per machine (int)
3 things it can do:
    1) Will steam milk
    2) Brew espresso 
    3) Dispense hot water

struct CoffeeMachine
{
    //number of coffees made per week
    //amount of water needed
    //number of steam wands
    //adjustable temperature control
    //number of groupheads per machine
    //will steam milk
    //brew espresso
    //dispense hot water
};
 */

/*
Thing 3) Supermarket
5 properties:
    1) Number of isles  (int)
    2) Amount of frozen food per store (int)
    3) Number of tills (int)
    4) Includes self service till (bool)
    5) Number of fresh products  (double)
3 things it can do:
    1) Support healthy diet
    2) Offer budget alternatives
    3) Feed a family

struct Supermarket
{
    //number of isles
    //amount of frozen food per store
    //number of tills
    //includes self service till
    //number of fresh products
    //supper healthy diet
    //offer budget alternatives
    //feed a family
};
 */

/*
Thing 4) Toaster 
5 properties:
    1) Number of volts needed for power (float)
    2) Number of bread racks (int)
    3) Amount of toasting control (float)
    4) Number of buttons on control panel (init)
    5) Defrost function (bool)
3 things it can do:
    1) Defrost and toast bread
    2) Collect crumbs
    3) Offer snacking option

struct Toaster
{
    //number of volts needed for power
    //number of bread racks
    //amount of toasting control
    //number of buttons on control panel
    //defrost function
    //defrost and toast bread
    //collect crumbs
    //offer snacking option
};
 */

/*
Thing 5) Remote Control
5 properties:
    1) Speed Control (int)    
    2) RF reciever (double)  
    3) Steerig Control (float)
    4) Power On/Off Switch (bool)
    5) Steering Trim Control (float)
3 things it can do:
    1) Controls RC Car  
    2) Sends RF frequency to motor
    3) Controls direction

struct RemoteControl
{
    //speed control
    //rf reciever
    //steering control    
    //power on/off switch
    //steering trim control
    //controls rc car
    //sends rf frequency to motor
    //controls direction
};
 */

/*
Thing 6) Battery Pack
5 properties:
    1) Battery capacity (int)
    2) Temperature control (float)
    3) Voltage output (double)
    4) Control over charge capacity (int)
    5) Battery health monitor (char)
3 things it can do:
    1) Powers Vehicle
    2) Sends low power signal
    3) Monitors charging cycle

struct BatteryPack
{
    //battery capacity
    //temperature control
    //voltage output
    //control over charge capacity
    //battery health monitor
    //powers vehicle
    //sends low power signal
    //monitors charging cycle
};
 */

/*
Thing 7) Wheels
5 properties:
    1) Number of spokes (int)
    2) Strength (int)
    3) Lightweight (float)
    4) Can spin (bool)
    5) Durability (int)
3 things it can do:
    1) Determine grip
    2) Use momentum
    3) Increase speed

struct Wheels
{
    //number of spoked
    //strength
    //lightweight
    //can spin
    //durability
    //determine grip
    //use momentum
    //increase speed
};
 */

/*
Thing 8) Suspension
5 properties:
    1) Compression control (double)
    2) Rebound amount (char)
    3) Spring length (int)
    4) Lockout control (bool)
    5) Canister capacity (float)
3 things it can do:
    1) Dampen surface feel
    2) Protect wheels
    3) Offer comfort

struct Suspension
{
    //compression control
    //rebound amount
    //spring length
    //lockout control
    //canister capicity
    //dampen surface feel
    //offer comfort
};
 */

/*
Thing 9) Electric Motor
5 properties:
    1) Drive shaft (bool)
    2) Linear power curve (float)
    3) Torque control (float)
    4) Rated voltage amount (double)
    5) Number of magnets (int)
3 things it can do:
    1) Convert electrical power to mechanical
    2) Control power transfer to wheels
    3) Allow RC Car to move

struct ElectricMotor
{
    //drive shaft
    //linear power curve
    //torque control
    //rated voltage amount
    //number of magnets
    //convert electrical power to mechanical
    //control power transfer to wheels
    //allow rc car to move
};
 */

/*
Thing 10) RC Car        
5 properties:
    1) Remote control
    2) Battery pack
    3) Wheels
    4) Suspension
    5) Motor
3 things it can do:
    1) move from a to b
    2) race other cars
    3) attempt stunts

stuct RCCar
{
    //remote control    
    //battery pack
    //wheels
    //suspension
    //motor
    //move from a to b 
    //race other cars
    //attempt stunts
};
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

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
