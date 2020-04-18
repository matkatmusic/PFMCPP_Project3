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



//1)
struct AudioInterface
{
// 1)speaker output
int speakerOuputs = 4;
// 2)mic input
int micInputs = 8;
// 3)line input
int lineInputs = 8;
// 4)gain
float gain = 70.5f;
// 5)phantom power
bool phantomPower = false;


// 1)amplify sound
void aplifySound();
// 2)convert analog to digital signal
bool analogToDigital (bool convertion = true);
// 3)invert phase
void invertPhase(); 
};


//2)
struct Tree
{
// 1)leaves
float leaves = 5293.23f;
// 2)seeds
int seeds = 3;
// 3)water
float water = 5.32f;
// 4)flowers
int flowers = 32;
// 5)energy
float energy = 424.3f;

// 1)photosynthesis
void photosynthesis();
// 2)releases oxygen
bool releaseOxygen (bool isPhotosynthesisDone = true);
// 3)produces fruits
void produceFruit();
 };


//3)
struct Dog
{
// 1)legs
int legs = 4;
// 2)fur
float fur = 8324.5f;
// 3)eyes
int eyes = 2;
// 4)nose
int nose = 1;
// 5)tail
int tail = 1;

// 1)bark
bool bark (bool isHungry = true);
// 2)eat
void eat();
// 3)jump
int jump (int bedHight = 120);
};



//4)
struct Monitor
{

// 1)woofer
int woofer = 1;
// 2)tweeter
int tweeter = 2;
// 3)rca input
int rcaInput = 2;
// 4)line input
int lineInput = 4;
// 5)aux input
int auxInput = 1;

// 1) Receives signal
void receiveSignal();
// 2) Play sound
void playSound();
// 3)Change volume
void changeVolume();
};


//5)
struct Characters
{
// 1)body
int body = 1;
// 2)movement
bool movement = true;
// 3)colour indicator
int colourIndicator = 2;
// 4)sound character activated
bool soundChar = true;
// 5)background story
int backgroundStory = 23;

struct colorIndicator 
    { 
        int red = 1;
        int blue = 2;
        int green = 3;
        
        int setColourSelector(int blue);
    };
// 1)move
int move (int x = 2, int y = 5, int z = 7);
// 2)jump
void jump();
// 3)run
bool run(bool isInARush = true);
};


//6)
struct Inventory
{

// 1)skills slots
int skillSlots = 2;
// 2)weapons
int weapons = 25;
// 3)skins
int skins = 135;
// 4)pets
int pets = 5;
// 5)coins
int coins = 2134;

struct pets
    { 
        int cat = 1;
        int penguin = 2;
        int horse = 3;
        int bear = 4;
        int wolf = 5;
        
        int selectpet(int pet = 5);
    };
// 1)save items
void saveItem();
// 2)check if skin is equipped
void checkIfSkinEquipped();
// 3)add items
void addItems();
 };


//7)
struct Level
{
// 1)difficulty
int difficult = 4;
// 2)bots
int bots = 27;
// 3)map
int map = 13;
// 4)clips
bool clip = true;
// 5)checkpoint
int checkpoint = 1;

//give rewards
void giveRewards();
//save progress
void saveProgress();
//load items
void loadItems();
 };


//8)
struct UserInterface
{
// 1)exit menu
bool exitMenu = false;
// 2)level selector
int levelSelector = 1;
// 3)character selected
int characterSelection = 2;
// 4)start option
bool startOption = true;
// 5)health bar
float healthBar = 99.8f;

// 1)show warnings
void showWarning(bool accountIsSuspended = true);
// 2)show map
void showMap();
// 3)end game
bool endGame (bool buttonPressed = true); 
};


//9)
struct Enemy
{
// 1)body
int body = 1;
// 2)damage
int damage = 43;
// 3)speed
double speed = 4.3;
// 4)lives
int lives = 5;
// 5)reflex
int reflex = 8;

// 1)kill the player
void killPlayer (int characterHealth = 0);
// 2)hurt the player
int hurtPlayer (int playerDamage);
// 3)move
int move (int x = 2, int y = 3, int z = 0);
};


//10)
struct Videogame
{
// 1)characters
Characters movement;
// 2)inventory
Inventory skins;
// 3)level
Level difficult;
// 4)user interface
UserInterface healthBar;
// 5)enemy
Enemy speed;

// 1)start the game
void startGame();
// 2)load match
void loadMatch();
// 3)end game
void endGame();
 };

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
