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
Thing 1) dog
5 properties:
    1) fur color (std::string)
    2) weight (float)
    3) age (int)
    4) number of cat roommates (int)
    5) number of walks needed per day (int)
3 things it can do:
    1) play at the dog park
    2) chew furniture
    3) bark at other dogs
 */

/*
Thing 2) synthesizer
5 properties:
    1) attack fader position (int)
    2) lfo depth position (float)
    3) lfo rate (float)
    4) filter cutoff amount (float)
    5) noise level (int)
3 things it can do:
    1) assign lfo to another parameter
    2) play a sequence
    3) lower the volume
 */

/*
Thing 3) laptop
5 properties:
    1) battery level (int)
    2) wifi signal reception level (float)
    3) color of the computer (std::string)
    4) age of the computer (int)
    5) number of times it's been dropped (int)
3 things it can do:
    1) adjust the display brightness
    2) capture a screenshot
    3) send an email
 */

/*
Thing 4) refrigerator
5 properties:
    1) number of vegetables inside (int)
    2) temperature inside (float)
    3) location within the house (std::string)
    4) power draw (double)
    5) time elapsed making ice (float)
3 things it can do:
    1) dispense water
    2) store food
    3) adjust temperature inside
 */

/*
Thing 5) drive shaft
5 properties:
    1) material composition (std::string)
    2) rotations per minute (int)
    3) torque amount in N*m (double)
    4) length in cm (float)
    5) engaged with transmission (bool)
3 things it can do:
    1) increase speed
    2) increase torque
    3) fail structurally
 */

/*
Thing 6) engine
5 properties:
    1) fuel flow rate (float)
    2) cylinder arrangement pattern (std::string)
    3) number of spark plug misfires (int)
    4) valve pulse width percentage (int)
    5) horsepower generated (float)
3 things it can do:
    1) adjust valve timing
    2) command spark plugs to power
    3) bypass airflow
 */

/*
Thing 7) battery
5 properties:
    1) voltage level (float)
    2) current draw in amps (double)
    3) weight (float)
    4) volume in m^3 (int)
    5) age (int)
3 things it can do:
    1) charge
    2) discharge
    3) catch on fire
 */

/*
Thing 8) coolant plumbing circuit
5 properties:
    1) number of valves (int)
    2) efficiency percentage (float)
    3) pump power draw in watts (float)
    4) fan speed percentage (int)
    5) type of coolant (std::string)
3 things it can do:
    1) adjust air flow by adjusting fan speed
    2) adjust coolant flow 
    3) leak coolant
 */

/*
Thing 9) engine controller
5 properties:
    1) number of outputs (int)
    2) highest temperature reading (float)
    3) highest temperature channel name (std::string)
    4) data rate in Hz (int)
    5) output voltage (float)
3 things it can do:
    1) command a different fuel flow amount
    2) cruise control
    3) raise an alert on the dash
 */

/*
Thing 10) car components
5 properties:
    1) drive shaft
    2) engine
    3) battery
    4) coolant plumbing circuit
    5) engine controller
3 things it can do:
    1) idle
    2) impart torque on the differential
    3) misfire spark plugs
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
