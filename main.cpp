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


struct Person
{
    int age;
    int heigth;
    float hairlength;
    float GPA;
    unsigned int SATScore;

    int distanceTraveled;

    struct Foot
        {
            int stepSize(int lenght);
 		    void stepForward();
        };

    Foot leftFoot;
    Foot rightFoot;


    void run(int howFast, bool startWithLeftFoot);
};


int Person::Foot::stepSize(int lenght) 
{
     return lenght;
}

void Person::Foot::stepForward() {}

void Person::run(int howFast, bool startWithLeftFoot)
{
 	if(startWithLeftFoot == true)
 	{
 		leftFoot.stepForward();
 		rightFoot.stepForward();
 	}
 	else
 	{
 		rightFoot.stepForward();
 		leftFoot.stepForward();
 	}
 	distanceTraveled += leftFoot.stepSize(howFast) + rightFoot.stepSize(howFast);
}
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
    int speakerOuputs = 4;
    int micInputs = 8;
    int lineInputs = 8;
    float gain = 70.5f;
    bool phantomPower = false;


    void amplifySound();
    bool analogToDigital (bool convertion = true);
    void invertPhase(); 
};


void AudioInterface::amplifySound()
{
    bool micConected = true;
    bool micGain = true;

    if (micConected == true)
    {
        micGain = true;
    }
}


bool AudioInterface::analogToDigital(bool convertion)
{
    bool analogConnectedToDigital = true;

    if (analogConnectedToDigital == true)
    {
        convertion = true;
    }
    else
    {
        convertion = false;
    }

    return convertion;
}


void AudioInterface::invertPhase()
{
    int quantityOfMics = 2;
    bool changePolarity = false;

    if (quantityOfMics == 2)
    {
        changePolarity = true;
    }
    else
    {
        changePolarity = false;
    }
}


//2)
struct Tree
{
    float leaves = 5293.23f;
    int seeds = 3;
    float water = 5.32f;
    int flowers = 32;
    float energy = 424.3f;


    void photosynthesis();
    bool releaseOxygen (bool isPhotosynthesisDone = true);
    void produceFruit();
};


void Tree::photosynthesis()
{
    bool oxygen = false;
    bool plantEnergy = true;
    
    if (plantEnergy == true)
    {
        oxygen = true;
    }
}


bool Tree::releaseOxygen(bool isPhotosynthesisDone)
{
    isPhotosynthesisDone = true;
    return isPhotosynthesisDone;
}


void Tree::produceFruit()
{
    int quantityOfFruitPoints = 23;
    bool fruitsOnTree = false;

    if (quantityOfFruitPoints == 0)
    {
        fruitsOnTree = false;
    }
    else
    {
        fruitsOnTree = true;
    }
}


//3)
struct Dog
{
    int legs = 4;
    float fur = 8324.5f;
    int eyes = 2;
    int nose = 1;
    int tail = 1;


    bool bark (bool isHungry = true);
    void eat();
    int jump (int bedHeight = 120);
};


bool Dog::bark(bool isHungry)
{  
    int howLoud = 10;

    if (isHungry == true)
    {
        howLoud = 10;
    }
    else
    {
        howLoud = 0;
    }
    return howLoud;
}


void Dog::eat()
{
    bool isFoodInPlate = true;
    bool dogEats = false;

    if (isFoodInPlate== true)
    {
        dogEats = true;
    }
}


int Dog::jump(int bedHeight)
{
    int jumpHeight = 120;
    bool dogJump = true;

if (jumpHeight == bedHeight)
{
    dogJump = true;
}
    return dogJump;
}


//4)
struct Monitor
{
    int woofer = 1;
    int tweeter = 2;
    int rcaInput = 2;
    int lineInput = 4;
    int auxInput = 1;


    void receiveSignal();
    void playSound();
    void changeVolume();
};


void Monitor::receiveSignal(){}


void Monitor::playSound()
{
    bool signalReceived = true;
    bool playSong = true;

    if (signalReceived == true)
    {
        playSong = true;
    }
}


void Monitor::changeVolume()
{
    bool gainMoved = true;
    float volumeLevel = 60.5f;

    if (gainMoved == false)
    {
        volumeLevel = 0.0f;
    }
}

//5)
struct Characters
{
    int body = 1;
    bool movement = true;
    int colourIndicator = 2;
    bool soundChar = true;
    int backgroundStory = 23;

    struct ColorIndicator 
    { 
        int red = 1;
        int blue = 2;
        int green = 3;
    
        int setColourSelector(int colour);
    };


    int move (int x = 2, int y = 5, int z = 7);
    void jump();
    bool run(bool isInARush = true);
};


int Characters::ColorIndicator::setColourSelector(int colour)
{
    colour = 3;
    return colour;
}


int Characters::move(int x, int y, int z)
{
    x = 13;
    y = 32;
    z = 41;
    return z;
}


void Characters::jump()
{
bool keyPressed = true;
bool charJump = true;

    if (keyPressed == true)
    {
        charJump = true;
    }
}


bool Characters::run(bool isInARush)
{
    int movePosition = 4;
    
    if (isInARush == true)
    {
        movePosition = 1;
    }
    else
    {
        movePosition = 0;
    }
    
    return movePosition;
}


//6)
struct Inventory
{
    int skillSlots = 2;
    int weapons = 25;
    int skins = 135;
    int pets = 5;
    int coins = 2134;

    struct Pets
    { 
        int cat = 1;
        int penguin = 2;
        int horse = 3;
        int bear = 4;
        int wolf = 5;
    
        int selectPet(int pet = 5);
    };
 

    void saveItem();
    void checkIfSkinEquipped();
    void addItems();
 };


int Inventory::Pets::selectPet(int pet)
{
    pet = 2;

    return pet;
}


void Inventory::saveItem()
{
    bool isGrabbed = true;
    bool getInBackpack = true;

    if (isGrabbed == true)
    {
        getInBackpack = true;
    }
}


void Inventory::checkIfSkinEquipped()
{
    bool isEquipped = true;
    bool checked = true;
    
    if (isEquipped == true)
    {
        checked = true;
    }
}

void Inventory::addItems(){}

//7)
struct Level
{
    int difficult = 4;
    int bots = 27;
    int map = 13;
    bool clip = true;
    int checkpoint = 1;


    void giveRewards();
    void saveProgress();
    void loadItems();
 };


void Level::giveRewards()
{
    bool addCoins = true;
    bool reachedCheckpoint = true;

    if (reachedCheckpoint == true)
    {
        addCoins = true;
    }
}


void Level::saveProgress(){}


void Level::loadItems()
{
    bool levelStart = false;
    bool loadScenery = true;

    if (levelStart == true)
    {
        loadScenery = true;
    }
}


//8)
struct UserInterface
{
    bool exitMenu = false;
    int levelSelector = 1;
    int characterSelection = 2;
    bool startOption = true;
    float healthBar = 99.8f;


    void showWarning(bool accountIsSuspended = true);
    void showMap();
    bool endGame (bool buttonPressed = true); 
};


void UserInterface::showWarning(bool accountIsSuspended)
{
    accountIsSuspended = true;
}


void UserInterface::showMap()
{
    bool buttonIsClicked = true;
    bool openMapWindow = false;

    if (buttonIsClicked == false)
    {
        openMapWindow = false;
    }
}


bool UserInterface::endGame(bool buttonPressed)
{
    buttonPressed = true;

    return buttonPressed;
}


//9)
struct Enemy
{
    int body = 1;
    int damage = 43;
    double speed = 4.3;
    int lives = 5;
    int reflex = 8;


    void killPlayer (int characterHealth = 0);
    int hurtPlayer (int playerDamage);
    int move (int x = 2, int y = 3, int z = 0);
};


void Enemy::killPlayer(int characterHealth)
{
    characterHealth = 0;
}


int Enemy::hurtPlayer(int playerDamage)
{
    playerDamage = 12;

    return playerDamage;
}


int Enemy::move(int x, int y, int z)
{
    x = 8;
    y = 1;
    z = -2;

    int enemyMovement = x + y + z;

    return enemyMovement;
}


//10)
struct Videogame
{
    Characters movement;
    Inventory skins;
    Level difficult;
    UserInterface healthBar;
    Enemy speed;


    void startGame();
    void loadMatch();
    void endGame();
 };

 void Videogame::startGame()
 {
     bool initializeGame = true;
     bool gameOpened = true;

     if (gameOpened == true)
     {
         initializeGame = true;
     }
 }


void Videogame::loadMatch()
{
    bool matchStartButtonClicked = false;
    bool matchStart = false;

    if (matchStartButtonClicked == true)
    {
        matchStart = true;
    }
}

void Videogame::endGame(){}


#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
