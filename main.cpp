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

struct Chameleon
{
    struct Color
    {
        int red;
        int green;
        int blue;
        int alpha;

        void setColor(int newRedValue, int newGreenValue, int newBlueValue);
        void setAlpha(int newAlphaValue);
    };

    // 1) Length
    float length;
    // 2) Weight
    float weight;
    // 3) Color
    Color color;
    // 4) Number of Teeth
    int numberOfTeeth;
    // 5) Scales
    int numberOfScales;

    // 1) Run
    void run(float speed, float distanceToTravel);
    // 2) Change Color
    void changeColor(int newRedValue, int newGreenValue, int newBlueValue);
    // 3) Flick Tongue
    void flickTongue(float flickDistance, int numberOfFlicks);
};


/*
2)
 */

struct FastFoodRestaurant
{
    // 1) Deep fryers
    int numDeepFryers;
    // 2) Cash registers
    int numCashRegisters;
    // 3) Profits per week
    float profitsPerWeek;
    // 4) Fries used per week
    int potatoesUsedPerWeek;
    // 5) Burger patties in freezer
    int burgersInFreezer;

    // 1) Make burger
    bool makeBurger(int numBurgers);
    // 2) Make fries
    bool makeFries(int potatoesToUse);
    // 3) Charge customer
    float chargeCustomer();
    // 4) Make special chameleon burger
    bool makeChameleonBurger(Chameleon chameleon);
};

/*
3)
 */

struct ElectricGuitar
{
    // 1) Neck length
    float neckLength;
    // 2) Volume knob position
    float volumeKnobPosition;
    // 3) Tone knob position
    float toneKnobPosition;
    // 4) Number of pickups
    int numberOfPickups;
    // 5) Number of strings
    int numberOfStrings;

    // 1) Output sound
    void outputSound();
    // 2) Increase/decrease volume
    void setVolume(float newVolumePosition);
    // 3) Adjust tone
    void setTone(float newTonePosition);
};

/*
4)
 */

struct TapePlayer
{
    struct Tape
    {
        float length;
        float currentPosition;
        bool isWritable;

        void setWritable(bool writable);
        void updatePosition(float newPosition);
    };


    // 1) Tape
    Tape tape;
    // 2) Control Buttons
    int numberOfButtons;
    // 3) Tape timer position
    float tapeTimerPosition;
    // 4) Speed Selector
    float speedSelectorPosition;
    // 5) Volume Slider
    float volumeSliderPosition;


    // 1) Play tape
    void playTape(Tape& tape, float lengthToPlay, float speedSelectorPosition);
    // 2) Rewind tape
    void rewindTape(Tape& tape);
    // 3) Record to tape
    bool recordToTape(Tape& tape);
    // 4) Reset tape timer
    bool resetTapeTimer();
};

/*
5)
 */

struct Display
{
    // 1) Number of pixels
    int numberOfPixels;
    // 2) Brightness
    float brightness;
    // 3) Width
    float widthInInches;
    // 4) Height
    float heightInInches;
    // 5) Amount of power consumed
    float powerConsumedInWatts;

    // 1) Update pixels with image information
    void updatePixels();
    // 2) Clear pixels
    void clearPixels();
    // 3) Adjust brightness 
    void setBrightness(float newBrightnessValue);
};

/*
6)
 */

struct WiFiAdapter
{
    // 1) Frequency
    float frequency;
    // 2) Upload speed
    float uploadSpeed;
    // 3) Download speed
    float downloadSpeed;
    // 4) Channel
    int channel;
    // 5) Amount of power consumed
    float powerConsumedInWatts;

    // 1) Connect to an access point
    void connectToAccessPoint();
    // 2) Upload data 
    void uploadData();
    // 3) Download data
    void downloadData();
};

/*
7)
 */

struct AudioOutputSystem
{
    // 1) Volume level
    float volumeLevel;
    // 2) Sample rate
    int sampleRate;
    // 3) Bit depth
    int bitDepth;
    // 4) number of output channels
    int numberOfOutputChannels;
    // 5) amount of power consumed
    float powerConsumedInWatts;

    // 1) Output audio
    void outputAudio();
    // 2) Receive audio input
    void receiveAudioInput();
    // 3) Adjust volume level
    void setVolumeLevel();
};

/*
8)
 */

struct CPU
{
    // 1) Clock speed in MHz
    float clockSpeedInMHz;
    // 2) Number of cores
    int numberOfCores;
    // 3) Number of threads
    int numberOfThreads;
    // 4) Cache size in MB
    float cacheSizeInMB;
    // 5) amount of power consumed
    float powerConsumedInWatts;

    // 1) Fetch instructions from memory
    void fetchInstructions(int threadNumber, int sizeOfInstructions);
    // 2) Execute instructions
    void executeInstructions(int threadNumber);
    // 3) Write data to memory
    void sendDataToRAM();
};

/*
9)
 */

struct RAM
{
    // 1) Capacity 
    int capacityInBytes;
    // 2) Clock speed
    float clockSpeedInMHz;
    // 3) Bus width
    int busWidthInBits;
    // 4) Number of pins
    int numPins;
    // 5) Amount of power consumed
    float powerConsumedInWatts;

    // 1) Write data to memory
    bool writeToMemory(int dataToWrite);
    // 2) Clear memory
    void clearMemory();
    // 3) Send data to CPU
    void sendDataToCPU();
};

/*
10)
 */

struct PortableVideoGameSystem
{
    // 1) Display
    Display display;
    // 2) WiFi Adapter
    WiFiAdapter wifiAdapter;
    // 3) Audio output system
    AudioOutputSystem audioOutput;
    // 4) CPU
    CPU cpu;
    // 5) RAM
    RAM memory;

    // 1) Load game software
    void loadSoftware();
    // 2) Show images on display
    void sendImageToDisplay();
    // 3) Play sound from speakers
    void sendSoundToSpeakers();
};

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
