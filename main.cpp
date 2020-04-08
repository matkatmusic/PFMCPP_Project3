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
