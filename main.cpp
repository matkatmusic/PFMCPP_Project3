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

/*
 2)
 */
struct Bakery   
{
    int numOfOvens = 2;
    int amountOfBread = 250;
    int openingTime = 8;
    int closingTIme = 18;

    bool checkOpen (int openingTime, int closingTime);
    void bakeBread (int numOfOvens, int amountOfBread, int ovenNumber);
};

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
        int seatColor = 25;
        void moveBackrest (bool isBack);
        void setSeathHeight (int heigth);
    };
    
    void takeSeat (BusSeat frontSeat, Human passenger);

};

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

    void openChest(bool isOpened);
};


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
