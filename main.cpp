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
 1)midi keyboard
 5 properties:
 1)keys
 2)pitch wheel
 3)mod wheel
 4)usb lead
 5)body
 3 things it can do:
 1)plays midi notes
 2)changes pitch
 3)changes macros
 */
struct MidiKeyboard
{
    int keys = 88;
    bool pitchWheel = true;
    bool modWheel = true;
    bool usbCompatable = true;
    bool metalBody = false;
    
    void playMidiNotes(int keys);
    void changePitch(bool pitchWheel);
    void controlMacros(bool modWheel);
};
/*
 2)guitar
 5 properties:
 1)manufacturer
 2)neck
 3)strings
 4)jack
 5)cable
 3 things it can do:
 1)play notes
 2)play chords
 3)play muted
 */
# include <string>
struct Guitar
{
    std::string manufacturer = "akai";
    bool neck = true;
    int strings = 6;
    bool jack = true;
    bool cable = true;

    void playNote(int strings);
    void playChord(int strings);
    void playMuted(bool neck, int strings);
};
/*
 3)mobile phone
 5 properties:
 1)screen
 2)buttons
 3)mic
 4)speaker
 5)brand
 3 things it can do:
 1)make calls
 2)recieve calls
 3)send text messages
 */
# include <string> 
struct MobilePhone
{
    bool screen = true;
    bool buttons = true;
    bool mic = true;
    bool speaker = true;
    std::string brand = "sony"; 

    void makeCall(bool buttons, bool mic);
    void answerCall(bool buttons, bool mic, bool speaker);
    void sendText(bool screen, bool buttons);
};
/*
 4)game
 5 properties:
 1)players
 2)levels
 3)objects
 4)enemies
 5)allies
 3 things it can do:
 1)play
 2)pause
 3)exit
 */
struct Game
{
    int players = 2;
    int levels = 10;
    bool objects = true;
    bool enemies = true;
    int allies = 2;

    void play(int players);
    void pause(bool objects);
    void exit();
};
/*
 5)digital audio workstation/DAW
 5 properties:
 1)audio tracks
 2)midi tracks
 3)plugins
 4)stereo output
 5)stereo input
 3 things it can do:
 1)record midi
 2)record audio
 3)output audio
 */
struct Daw
{
    int audioTracks =16;
    int midiTracks = 16;
    bool plugins = true;
    bool stereoOutput = true;
    bool stereoInput = true;

    void recordMidi(bool plugins, int midiTracks);
    void recordAudio(int audioTracks, bool stereoInput);
    void outputAudio(bool stereoOutput);
};
/*
 6)laptop
 5 properties:
 1)screen
 2)keyboard
 3)passwor
 4)harddrive
 5)ram
 3 things it can do:
 1)recieve input
 2)produce output
 3)save data
 */
#include <string>
struct Laptop
{
    int screenresolution = 4000;
    bool keyboard = true;
    std::string password = "password";
    int hardDriveAvailableGb = 256;
    int memoryGb = 8; 

    void recieveInput(bool keyboard, std::string password, int memoryGb);
    void produceOutput(bool screen, int memoryGb);
    void saveData(int hardDriveAvailableGb);
};
/*
 7)television
 5 properties:
 1)screen type lcd/oled ect
 2)speaker type surround/stereo ect
 3)dimensions
 4)resolution
 5)digital or analogue
 3 things it can do:
 1)dispaly television channels
 2)change television channels
 3)switch off
 */
struct Television
{
    bool flatScreen = true;
    bool surroundSound = true;
    int heightCm = 60;
    int lengthCm = 80;
    float resolution = 4000;
    bool digital = true;

    struct RemoteControl
    {
        int numberButtons = 10;
        bool onButton = true;
    };

    void switchTvOn(RemoteControl);
    void changeTvChannel(RemoteControl);
    void switchTvOff(RemoteControl);

    RemoteControl controlOn, controlOff;
};
/*
 8)fish tank
 5 properties:
 1)water temp
 2)dimesions
 3)gallons
 4)lighton
 5)decor
 3 things it can do:
 1)switch light on
 2)switch heater on
 3)switch off
 */
struct FishTank
{
    float waterTempCelcius = 25.0f;
    int heightCm = 30;
    int lengthCm = 90;
    int depthCm = 30;
    int gallons = 50;
    bool lightOn = true;

    struct Decor
    {
        bool livePlants = true;
        int numberOfPlants = 6;
        bool corals = false;
        int numberOfCorals = 0;
        bool rocks = true;
        int numberOfRocks = 5;
        void cleanDecor();
    };

    void switchLightOn(bool lightOn);
    void switchHeaterOn(float waterTempCelcius);
    void feedFish();

    Decor tropical, marine;
};
/*
 9)cinema
 5 properties:
 1)seats
 2)screen
 3)projector
 4)film
 5)lights
 3 things it can do:
 1)project film
 2)turn lights down
 3)seat customers
 */
struct Cinema
{
    int freeSeats = 100;
    int seats = 100;
    bool screenOn = true;
    bool projectorOn = true;
    int lightLevel = 10;

    void playFilm(bool screenOn,bool projectorOn);
    void setLightLevel(int lightLevel);
    void sitCustomers(int seats, int freeSeats);
};
/*
 10)producer
 5 properties:
 These 5 properties should be UDTs that you defined above.
 this goes along with the instruction:
    One of your 10 UDTs should only use UDTs for its member variable types.
 1)Guitar 
 2)Midi keyboard
 3)computer
 4)mobile phone
 5)d a w
 3 things it can do:
 1)play instrument
 2)record instrument
 3)play recorded track
 */
struct Producer
{
    Guitar producersGuitar;
    MidiKeyboard producersKeyboard;
    Laptop producersLaptop;
    MobilePhone producersPhone;
    Daw producersDaw;

    void playInstrument(Guitar, MidiKeyboard);
    void recordInstrument(Laptop, Daw);
    void playbackRecording(Laptop, Daw);
};
 

#include <iostream>
int main()
{
    std::cout << "go to go!"<< std::endl;
}
    

