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
    int distanceTraveled; 

    struct Foot
    {
        void stepForward()
        {
            //step forward function
        }
        int stepSize()
        {
           return{}; //step size function
        }
    };
    
    void run(bool startWithLeftFoot);

    Foot leftFoot, rightFoot;

};

void Person::run(bool startWithLeftFoot)
{
    if( startWithLeftFoot)
    {
        leftFoot.stepForward();
        rightFoot.stepForward();
    }
    else 
    {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }
    distanceTraveled += leftFoot.stepSize() + rightFoot.stepSize();
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


/*
 1)
 */
struct Human 
{
    float weight = 25.5f;
    float height = 160.5f;

    void eat ();
    bool isHungry(int timeAwake, int stamina);
};

bool Human::isHungry(int timeAwake, int stamina)
{
    if (timeAwake > 8 && stamina <4 ) 
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*
 2)
 */
struct Bakery   
{
    int numOfOvens = 2;
    int amountOfBread = 250;
    int openingTime = 8;
    int closingTIme = 18;

    bool checkOpen (int opening, int closing, int current);
    int bakeBread (int numOfOvens, int breadPerOven);
};

bool Bakery::checkOpen (int opening, int closing, int current)
{
    if (current > opening && current < closing)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int Bakery::bakeBread (int numOvens, int breadPerOven)
{
    return (amountOfBread-(numOvens*breadPerOven));
}


/*
 3)
 */
struct PublicBus   
{
    int maxAmountofSeats = 50;  
    bool seatsLeft = true;

    struct BusSeat     
    { 
        int seatRow = 1;
        bool isUsed = false;
        int maxWeight = 15;
        void moveBackrest (bool isBack);
        void setSeathHeight (int heigth);
    };
    
    void takeSeat (BusSeat frontSeat, Human passenger);

};

void PublicBus::takeSeat(BusSeat frontSeat, Human passenger)
{
    if (passenger.weight < frontSeat.maxWeight)
    {
       // trigger a sit down function
    }
}



/*
 4)
 */
struct Village 
{
    Human tom;
    Human lisa;
    PublicBus redBus;

    void openShop(Bakery theBakery);
};


struct Wizard 
{
    int health = 160;
    int mana = 70;

    struct WizardStaff 
    {
        int itemIndex = 1;
        int baseDamage = 250;

        void setSkin (int colorIndex, int logoIndex);
        int chargeUp (int chargingTime, int currentCharge);
    };

    void equipWeapon (WizardStaff rareStaff);
    void unequipWeapon (WizardStaff rareStaff);
    void attack (WizardStaff rareStaff, int enemyId);
};



/*
 5)
 */
struct CommonTreasureChest
{
    int numberOfItems = 5;
    bool isRare = false;
    bool isOpened = false;

    bool openChest(bool openState);
};

bool CommonTreasureChest::openChest (bool openState)
{
    if (openState == false)
    {
        //triger function to open the Box
        return true;
    }

}



/*
 6)
 */
struct AudioPlugin 
{
    bool bypass = false;
    bool initialized = true;
    int samplerate = 41000;
    
    void processAudio();
    void drawWaveform(float sampleValue);
};



/*
 7)
 */
struct AudioEvent 
{
    int samplerate = 48000;
    int bitDepth = 24;
    float length = 250.35f;

    void getLength(int eventId);
    void generateWaveform(float length, int eventId);
};

/*
 8)
 */
struct AudioEditor 
{
    int samplerate = 48000;
    
    void importFile();

    void cutSample (AudioEvent someAudio);
    void processSample (AudioEvent someAudio, AudioPlugin someAudioPlugin);
};

/*
 9)
 */
struct Piano 
{
    int range = 88;
    char color = 'b';

    void pressSustainPedal();
    void releaseSustainPedal();
};


/*
 10)
 */
struct ConcertHall 
{
    bool concertOngoing = false;
    int visitorCount = 1500;

    void addInstrumentToStage(Piano);
};

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
