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

1) define an empty struct for each of your 10 types. i.e.:

struct CarWash
{

};

2) Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
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
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};


/*
Thing 1) Can plant
5 properties:
    1) tin amount
    2) raw fish amount
    3) autoclave capacity
    4) cans per day
    5) worker/workhours
3 things it can do:
    1) produce canned fish
    2) load boxes with goods in warehouse
    3) produce bio scrap
 */

struct CanPlant
{
    //tin amount
    int tinAmount = 1000;
    //raw fish amount
    double rawFish = 100.21;
    //autoclave capacity
    int autoclaveLoad = 300;
    //cans per day
    int dayCansOut = 900;
    //worker/workhours
    float workHours = 12;
    
    //Can plant office worker
    struct OfficeWorker
    {
        //operator Id
        int callOperatorId = 1;
        //internal phone number
        int intNumber = 1301;
        //name
        std::string operatorName = "Elena";
        //working hours start
        float hourStart = 5.5f;
        //working hours end
        float hourEnd = 12.0f;
        
        //make a call
        void makeCall(int customerId = 0, float time = 0);
        //pickup a call
        void pickCall(int number, float time);
        //reserve the order
        int reserveGood(int customerId, int amount = 0);
    };
    
    //produce canned fish
    int produceCans(double slicedFish, int tinAmount);
    //load boxes with goods in warehouse
    void loadBoxes(int boxes, int wareHouseNumber);
    //produce bio scrap
    double reportScrapOut(double rawFish, float workHours);
};
    
/*
Thing 2) SIP provider
5 properties:
    1) supported codecs
    2) number of simultaneous calls
    3) FAX support protocol
    4) price
    5) SLA conditions
3 things it can do:
    1) do calls
    2) charge customer
    3) lease traffic
 */
struct SipProvider
{
    //supported codecs
    std::string codecName = "G729";
    //number of simultaneous calls
    int calls = 2;
    //FAX support protocol
    bool t38 = false;
    //price
    double price = 0;
    //SLA conditions
    int slaType = 1;
    
    //do calls
    bool makeCall(int src, int dst);
    //charge customer
    float chargeCustomer(double time, int customerId);
    //lease traffic
    float traficCount(double time);
};
/*
Thing 3) Cat
5 properties:
    1) number of paws
    2) list of fur colours
    3) gender
    4) age
    5) number of lives
3 things it can do:
    1) eat
    2) sleep
    3) do mew
 */

struct Cat
{
    //number of paws
    int paw = 4;
    //list of fur colours
    char colour = 'B';
    //gender
    bool gender = 0; //0 female, 1 male
    //age
    float age = 3.5f;
    //number of lives
    int liveNumber = 1;

    //eat
    void eat(char foodType);
    //sleep
    void sleep (float time);
    //do mew
    void mew (int count);
};
/*
Thing 4) Spaceship
5 properties:
    1) orbit height
    2) engine type
    3) number of crew 
    4) country of origin
    5) name
3 things it can do:
    1) dock to space station
    2) fly around planets
    3) explore space
 */

struct SpaceShip
{
    //orbit height
    float orbitHeight = 1000;
    //engine type
    std::string engineType = "rocket";
    //number of crew 
    int crewNum = 3;
    //country of origin
    std::string country = "RU";
    //name
    std::string name = "Salyut";
    
    //spaship's crew meber
    struct CrewMember
    {
        //member's personal id
        int memberId = 0;
        //member's name
        std::string name = "Rob";
        //member's role
        std::string jobRole = "scientist";
        //member's weight
        float weight = 70.0f;
        //member's age
        float age =33.3f;
        
        //do main job
        void examineAnimal(int date, float time, Cat cat);
        //record results
        bool recordTest(int date, float time, int testNum=0);
        //do additional mandatory job
        void examineCrew (int date, float time, CrewMember memberId);
    };

    //dock to space station
    bool dock();
    //fly around planets
    void makeLoop(int planetNum = 3);
    //explore space
    bool takeOf(float startTime);

};

/*
Thing 5) DAC
5 properties:
    1) samplerate
    2) bit depth
    3) SNR
    4) amount of power consumed
    5) dynamic range
3 things it can do:
    1) recieve PCM signal
    2) correct errors 
    3) produce analogue signal
 */
struct DAC
{
    //samplerate
    int sampleRate = 48000;
    //bit depth
    int bitDepth = 24;
    //SNR
    int SNR = 112;
    //amount of power consumed
    float amountOfPoerwConsumed = 0.9f;
    //dynamic range
    double dynamicRange = 9.9;
    
    //recieve PCM signal
    void readInput(int channelNum = 0);
    //correct errors 
    bool checkError(double sampleNum);
    //produce analogue signal
    void audioOut(int channelNum = 0);
};
/*
Thing 6) power unit
5 properties:
    1) weight
    2) otput voltage
    3) input voltage
    4) output current
    5) operating and storage temperature ranges
3 things it can do:
    1) input power from outlet
    2) convert voltage
    3) protect circuit
 */

struct PowerUnit
{
    //weight
    float weight = 1.2f;
    //otput voltage
    double outVolt = 12;
    //input voltage
    double inVolt = 220;
    //output current
    int outCurrent = 1;
    //operating and storage temperature ranges
    int maxOutTemp = 80;
     
    //input power from outlet
    bool getElectricity(int outletStandart=1);
    //convert voltage
    double convertVoltage(double inVolt, double outVolt);
    //protect circuit
    bool status(int circuitId = 1);
};
/*
Thing 7) VCA
5 properties:
    1) frequency responce
    2) insertion loss
    3) attenuation
    4) price
    5) number of channels
3 things it can do:
    1) attenuate signal
    2) consume power
    3) recieve control signal
 */
struct VCA
{
    //frequency responce
    float freqResponse = 0.5f;
    //insertion loss
    double insertLoss = 0.01;
    //attenuation
    int attenuation = -100;
    //price
    float price = 3;
    //number of channels
    int channelNum = 2;
    
    //attenuate signal
    void attenuate(int coefficient = -50);
    //consume power
    void inputPower(int amountOfPower = 20);
    //recieve control signal
    int readKnob (double knobAngle = 10.123);
};
/*
Thing 8) headphone amplifier
5 properties:
    1) SNR
    2) output power
    3) output impendance
    4) frequency range
    5) input voltage 
3 things it can do:
    1) input signal
    2) amplify signal
    3) produce noise
 */
struct HeadphoneAmp
{
    //SNR
    int SNR = 112;
    //output power
    float outPower = 600.0f;
    //output impendance
    int outImpendance = 32;
    //frequency range
    int maxFreq = 20000;
    //input voltage
    double inVolt = 12;
    
    //input signal
    void getInput(int channelNum = 0);
    //amplify signal
    void doAmp(int channelNum = 0);
    //produce noise
    bool noiseReduction(int filterNum = 3);
};
/*
Thing 9) body
5 properties:
    1) height
    2) width
    3) depth
    4) colour
    5) material
3 things it can do:
    1) hold internal parts
    2) protect circuit
    3) collect dust
 */
struct Body
{
    //height
    float height = 6.5f;
    //width
    float width = 15.0f;
    //depth
    float depth = 10.5f;
    //colour
    char colour = 'B';
    //material
    char material = 'W';
    
     //hold internal parts
     bool checkTheBolt(int circuitId = 1);
     //protect circuit
     bool checkShortCircuit(int circuitId = 1);
     //collect dust
     void alarmOverDust(float time = 10);
};
/*
Thing 10) Audio monitor controller
5 properties:
    1) DAC
    2) power unit
    3) VCA
    4) headphone amplifier
    5) body
3 things it can do:
    1) control volume
    2) set input sources
    3) toggle crosfeed effect
 */

struct MonitorController
{
    //left channel DAC
    DAC DACLeft;
    //right channel DAC
    DAC DACRight;
    //power supply unit
    PowerUnit PSU0;
    //volt controlled attenuator
    VCA VCA0;
    //left channle amplifier
    HeadphoneAmp AmpLeft;
    //right channle amplifier
    HeadphoneAmp AmpRight;
    //body of controller
    Body body0;

    //control volume
    void setVol(int amount = 0);
    //set input sources
    bool selectSource(int sourceNum, bool status=0);
    //toggle crosfeed effect
    bool toggleCrossfeed(bool status = 0);
};
   
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
