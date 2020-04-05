/*
Project 3 - Part 1 / 5
Video:  Chapter 2 Part 5
User-Defined Types

Create a branch named Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to reinforce the syntax habits that C++ requires.  What you create in this project will be used as the basis of Project 5 in the course.   

1) write 10 user-defined types in plain english
   - This step will involve several checkpoints before it is complete.

Checkpoint 1:
    Fill in #1 - 4 with a random UDT in plain english
    These 4 UDTs do not need to be related.
    For each plain-english UDT, write out 3 things it can do, and 5 traits or properties.

************************
    Commit after you complete this step so i can review before you proceed
    Ping me in Slack to review this step.
    Wait for me to review before proceeding to the next Checkpoint
************************

Checkpoint 2:
    For the 10th UDT, come up with an object that is made of 5 smaller parts.
    Here is an example:
    Cell Phone

    A Cell Phone is made up of the following 5 properties:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

************************
    Commit after you complete this step so i can review before you proceed
    Ping me in Slack to review this step.
    Wait for me to review before proceeding to the next Checkpoint
************************

Checkpoint 3: 

    Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, until the smallest object is made of up only C++ primitives. 

    These 5 things can be broken down into their own sub-objects and properties. 

    For example: Display
    A Display has the following 5 traits or properties:
        pixels
        amount of power consumed.
        brightness.
        width
        height

    the Display's brightness can be represented with a Primitive, such as a double. 
    The amount of power consumed can also be represented with a Primitive.
    The 'pixels' must be represented with an array of Pixel instances.  Arrays have not been discussed and can't be used in this project.
    Instead, we can use an Integer primitive to describe the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed
        Brightness

    Notice that I did not write "has a display" or "Has memory" or "has a cpu"  
    Writing 'has a ___" checks whether or not your object *has the ability to do something*.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    In C++ terms, this means to I want you to avoid bool (has a) as a member variable type.
    Instead, prefer the other primitive types when you get to step 2)

************************
    Commit after you complete this step so i can review before you proceed
    Ping me in Slack to review this step.
    Wait for me to review before proceeding with step 2.
************************
  
 2) define your struct for each of your 10 types. 
    - Copy your 3 actions & 5 traits into your struct body.
    - comment them out.
    - I recommend compiling after finishing each one and making sure it compiles without errors or warnings before moving on to writing the next UDT.
 
 3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
 4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions in part2 for these functions
    - you'll call each of these functions in part3
 
 5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs at least 2 member functions.
    - these nested classes are not considered one of your 10 UDTs.
 
 6) your 10th UDTs should only use 5 of your other UDTs for its member variable types.   
    - No primitives allowed!
 
 7) After you finish defining each type, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

/*
 example:  

//1) write out, in plain-english, 5 traits and 3 things it can do.
Car Wash   
5 properties:
    1) vacuum cleaners
    2) eco-friendly cleaning supplies
    3) stores the amount of water used per week.
    4) stores amount of profit made per week
    5) number of cars serviced per day

3 things it can do:
    1) wash and wax car
    2) charge customer
    3) detail the car interior
 */
struct CarWash //2)        
{
    //2) has vacuum cleaners
    int numVacuumCleaners = 3; //3) member variables with relevant data types.
    //2) has eco-friendly cleaning supplies
    int numEcoFriendlyCleaningSupplies = 20; //3) member variables with relevant data types.
    //2) stores the amount of water used per week.
    float waterUsedPerWeek = 200.f; //3) member variables with relevant data types.
    //2) stores amount of profit made per week
    float profitPerWeek = 495.95f; //3) member variables with relevant data types.
    //2) number of cars serviced per day
    int numberOfCarsServiced = 10; //3) member variables with relevant data types.
    
    //5) make 2 of the 10 user-defined types have a nested class. 
    struct Car   
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);   
    };

    /* 
    member functions with a user-defined type as the parameter.
    The user-defined type parameter happens to be the nested class.
    */

    //2) wash and wax car
    void washAndWaxCar( Car car );
    //2) charge customer
    float chargeCustomer();
    //2) detail the car interior
    void detailInterior( Car car );
    
               
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};


/*
1)
 */

struct Lizard
{
    // 1) Length
    // 2) Weight
    // 3) Color
    // 4) Teeth
    // 5) Scales

    // 1) Run
    // 2) Eat
    // 3) Flick Tongue
};


/*
2)
 */

struct AudioInterface
{
    // 1) Inputs
    // 2) Outputs
    // 3) Sample rate
    // 4) Preamps
    // 5) USB Port

    // 1) Output audio
    // 2) Receive Input
    // 3) Convert digital data to analog signal
};

/*
3)
 */

struct ElectricGuitar
{
    // 1) Body
    // 2) Neck
    // 3) Bridge
    // 4) Pickups
    // 5) Electronics

    // 1) Output sound
    // 2) Increase/decrease volume
    // 3) Adjust tone
};

/*
4)
 */

struct TapePlayer
{
    // 1) Tape Slot
    // 2) Control Buttons
    // 3) Power Button
    // 4) Speed Selector
    // 5) Headphone jack

    // 1) Play tape
    // 2) Rewind tape
    // 3) Eject Tape
};

/*
5)
 */

struct Display
{
    // 1) Number of pixels
    // 2) Brightness
    // 3) Width
    // 4) Height
    // 5) Amount of power consumed

    // 1) Update pixels with image information
    // 2) Clear pixels
    // 3) Adjust brightness 
};

/*
6)
 */

struct WiFiAdapter
{
    // 1) Frequency
    // 2) Upload speed
    // 3) Download speed
    // 4) Channel
    // 5) Amount of power consumed

    // 1) Connect to an access point
    // 2) Upload data 
    // 3) Download data
};

/*
7)
 */

struct audioOutputSystem
{
    // 1) Volume level
    // 2) Sample rate
    // 3) Bit depth
    // 4) number of output channels
    // 5) amount of power consumed

    // 1) Output audio
    // 2) Receive audio input
    // 3) Adjust volume level
};

/*
8)
 */

struct CPU
{
    // 1) Clock speed in MHz
    // 2) Number of cores
    // 3) Number of threads
    // 4) Cache size in MB
    // 5) amount of power consumed

    // 1) Fetch instructions from memory
    // 2) Execute instructions
    // 3) Write data to memory
};

/*
9)
 */

struct RAM
{
    // 1) Capacity 
    // 2) Clock speed
    // 3) Bus width
    // 4) Number of pins
    // 5) Amount of power consumed

    // 1) Write data to memory
    // 2) Clear memory
    // 3) Send data to CPU
};

/*
10)
 */

struct PortableVideoGameSystem
{
    // 1) Display
    // 2) WiFi Adapter
    // 3) Audio output system
    // 4) CPU
    // 5) RAM

    // 1) Load game software
    // 2) Show images on display
    // 3) Play sound from speakers
};

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
