 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   - you should be left with only your UDTs.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */



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

    struct ColorIndicator 
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

    struct Pets
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
