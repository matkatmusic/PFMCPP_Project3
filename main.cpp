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
#include <iostream>
using namespace std;

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
struct Dog
{
    int numLegs = 4;
    float weight = 4.6f;
    
    struct DogRace
    {
        bool pedigree = true;
        string race;
    };

    string getRace (DogRace race);

    DogRace myDogRace;
};
/*
 2)
 */

struct FileType
{
    string format;
    string type;
};

struct AudioFile
{
    int bitDepth  = 24;
    int sampleRate = 44100;
    int bitsPerMilisecond = (sampleRate * bitDepth) / 1000;
    void typeOfAudioFile (FileType type);

    FileType fileType;
};    
/*
 3)
 */
struct MusicTrack
{
    int beatsPerMinute;
    char key = 'C';
    
    struct TimeSignature
    {
        int bars = 4;
        int beats = 4;
    };

    TimeSignature timeSignature;

    double barDuration (int BPM, TimeSignature signature);
};

/*
 4)
 */
struct BankAccount
{
    struct Money
    {
        string currency;
        float amount;
    };

    bool active = true;

    float Balance (Money money);
    Money moneyInAccount;
};
/*
 5)
 */
struct Soles
{
    int durability = 10;
};
struct BootLaces
{
    int length = 25;
};
struct Boots
{
    string color = "red";
    bool haveLaces = true;
    bool waterproof = true;
    int howWorn (Soles soles);
    BootLaces laces;
};

/*
 6)
 */
struct Coffee
{
    struct Roast
    {
        int level = 7;
    };

    struct Ground
    {
        float grainSize = 0.7f;
    };

    Roast coffeeRoast;
    Ground coffeeGround;
    string taste (Roast, Ground);
};

/*
 7)
 */
 
struct Model
{
    int airplaneModel = 1;
};

struct Airplane
{
    Model airplane;
    int passengerCapacity = 250;
    float fuelCapacity = 5000;
    float DistanceCapacity(float, int, Model);
};

/*
 8)
 */
struct Cellphone
{
    enum Color  
    {
        red,
        blue,
        white,
        silver,
        gold
    }; 

    Color col = red;

    float displaySize = 3.2f;

    int resolution[2] = {1920, 1080};  

    void changeResolution(int[], int[]);
};
/*
 9)
 */
struct Book
{
    int numberOfPages = 257;
    int currentPage = 5;

    string author = "Charles Dickens"; 

    struct Version
    {
        bool illustrated = true;
        bool hardCover = false;
    }; 

    Version bookVersion;

    void flipPage(int);
};
/*
 10)
 */
struct Cup
{
    float capacity; 

    enum Material 
    {
        glass,
        porcelain,
        plastic
    }; 

    Material mat = plastic;
    
    void fillCup(float);
};

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
    
}

