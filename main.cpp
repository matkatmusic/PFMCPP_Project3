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
    if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
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

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar(Car car); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior(Car car);
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};


/*
/*
Thing 1) GYM
5 properties:
    1) Number of Exercise Machines (int)
    2) Number of Weekly Customers (float)
    3) Average time people spend at GYM (float)
    4) Monthly cost to customer (float)
    5) amount of profit (float)
3 things it can do:
    1)provide excersise equipment 
    2)charge customers
    3)provide classes
 */

/*
Thing 2) Games Console
5 properties: 
    1) Amount of storage memory (float)
    2) Amount of downloaded games (int)
    3) Amount of power consumed per hour rms (float)
    4) HDMI Input and output (y/n) (bool)
    5) Amount of usb slots (int)
3 things it can do:
    1)Connect to the internet
    2)Play games from a disk
    3)Play Videos
 */

/*
Thing 3) Rollercoaster
5 properties:
    1) Amount of seats (int)
    2) number of max speed mph (int)
    3) Average number of laps a day (int)
    4) Amount of money to ride (float)
    5) Peak Number of riders a day (int)
3 things it can do:
    1) stop
    2) slow down
    3) speed up
 */

/*
Thing 4) Art Musuem
5 properties:
    1) Number of works of art (int)
    2) Number of statues (int)
    3) Most iconic piece (std::string" "")
    4) Number of visitors (int)
    5) Number of new pieces (int)
3 things it can do:
    1)Add new pieces
    2)Remove old pieces
    3)Restore ancient art
        
        Thing 5) Mixing Desk
    5 properties:
        1) Name of brand (std::string)
        2) Number of Input Channels (int)
        3) Number of Output Channels (int)
        4) Does have a Mix bus Compressor (bool)
        5) Amount of money (int)
    3 things it can do:
        1)Turn faders to 0
        2)Mix bus compression
        3)Initiate recording
    */

    /*
    Thing 6)
    5 properties:Imac
        1)Amount of Storage in GB (int)
        2)Number of pixels in display (int)
        3)Amount of GPU power in GHz (float)
        4)Amount of RAM (int)
        5)Model Number name (std::string)
    3 things it can do:
        1)Record inputs to the mixing desk 
        2)Store the recordings
        3)Take pictures
    */

    /*
    Thing 7)
    5 properties:Analog Compressors
        1)Number of knobs of parameters (int)
        2)Brand and model (std::string)
        3)Type of analog compressor (std::string)
        4)Amount of money to buy (float)
        5)Number of Kilowatts per Hour used (float)
    3 things it can do:
        1)Compress incoming audio
        2)Turn on
        3)Turn off
    */

    /*
    Thing 8)
    5 properties:Analog Reverb
        1)Number of presets (int)
        2)Number of largest size parameter (float)
        3)Number of knobs (int)
        4)Amount of money to buy (float)
        5)colour (std::string)
    3 things it can do:
        1)Apply bright plate reverbs
        2)Apply dark plate reverbs
        3)Apply large room reverb
    */

    /*
    Thing 9) Speakers
    5 properties:
        1)Number of Speakers (int)
        2)Size of speakers in inches (int)
        3)Number of rms watts per hour (int)
        4)Number rof max watts per hour (int)
        5)brand of speakers (std::string)
    3 things it can do:
        1)output incoming sound
        2)Turn on
        3)Control incoming sound to be louder
    */
 
 

/*Thing 10) Music Studio
5 properties:
    1)Mixing Desk 
    2)Imac
    3)Analog Compressors
    4)Analog Reverbs
    5)Speakers
3 things it can do:
    1)Output sound
    2)Mix music
    3)Compress audio
*\


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
