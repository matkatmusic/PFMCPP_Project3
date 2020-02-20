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
 struct human
 {
    float weight = 25.5f;
    float height = 160.5f;

    void sleep ();
    bool isHungry(int timeAwake, int stamina);
 };

/*
 2)
 */
 struct bakery  
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
 struct publicBus  
 {
    int maxAmountofSeats = 50;  
    bool seatsLeft = true;

    struct busSeat    
    { 
        int seatRow = 1;
        int seatColor = 25;
    };
    
    void takeSeat (busSeat frontSeat, human passenger);

 };

/*
 4)
 */
struct village
{
    human tom;
    human lisa;
    publicBus redBus;

    void openShop(bakery theBakery);
};


 struct wizard
 {
    int health = 160;
    int mana = 70;

    struct wizardStaff
    {
        int itemIndex = 1;
        int baseDamage = 250;
    };

    void equipWeapon (wizardStaff rareStaff);
    void unequipWeapon (wizardStaff rareStaff);
    void attack (wizardStaff rareStaff, int enemyId);
 };

/*
 5)
 */
struct commonTreasureChest
{
    int numberOfItems = 5;
    bool isRare = false;
    bool isOpened = false;

    void openChest(bool isOpened);
};


/*
 6)
 */
struct audioPlugin
{
    bool bypass = false;
    bool initialized = true;
    int samplerate = 41000;
    
    void processAudio();
    void drawWaveform(float sampleValue);
}



/*
 7)
 */
struct audioEvent
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
 struct audioEditor
 {
    int samplerate = 48000;
    
    void importFile();


    void cutSample (audioEvent someAudio);
    void processSample (audioEvent someAudio, audioPlugin someAudioPlugin);
 };

/*
 9)
 */
 struct piano;
 {
    int range = 88;
    int color = black;

    void pressSustainPedal{};
    void releaseSustainPedal{};
 };


/*
 10)
 */
 struct concertHall
 {
     bool concertOngoing = false;
     int visitorCount = 1500;

     void addInstrumentToStage(piano);
 };

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
