/*
 Project 3 - Part 1 / 5
 Video:  Chapter 2 Part 5
 User-Defined Types
 
 Create a branch named Part1
 
 Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to reinforce the syntax habits that C++ requires.  What you create in this project will be used as the basis of Project 5 in the course.
 
 1) write 10 user-defined types in plain-English,
 in the comments above your UDT, write out, in plain-english, 3 things it can do, and 5 traits.
 ************************
 Commit after you complete this step so i can review before you proceed with the rest of the projects
 Ping me in Slack to review this step.
 Wait for me to review before proceeding with step 2.
 ************************
 
 2) define your struct for each of your 10 types.
 Copy your 3+5 comments into your struct body.
 comment them out.
 
 3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
 give the member variables relevant data types
 
 4) make the function parameter list for those member functions use some of your User-Defined Types
 You'll write definitions in part2 for these functions
 you'll call each of these functions in part3
 
 5) make 2 of the 10 user-defined types have a nested class.
 this nested class also needs member functions.
 this nested class is not considered one of your 10 UDTs.
 
 6) One of your 10 UDTs should only use UDTs for its member variable types.
 No primitives allowed!
 it still needs member variables.
 
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
 1) has vacuum cleaners
 2) has eco-friendly cleaning supplies
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
    bool hasVacuumCleaners = true; //3) member variables with relevant data types.
    //2) has eco-friendly cleaning supplies
    bool hasEcoFriendlyCleaningSupplies = true; //3) member variables with relevant data types.
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

    void playMidiNotes();
    void changePitch();
    void controlMacros();

    
};
/*
 2)guitar
 5 properties:
 1)body
 2)neck
 3)strings
 4)jack
 5)cable
 3 things it can do:
 1)play notes
 2)play chords
 3)play muted
 */
struct Guitar
{
    
    bool body = true;
    bool neck = true;
    int strings = 6;
    bool jack = true;
    bool cable = true;

    void playNote();
    void playChord();
    void playMuted();

};
/*
 3)mobile phone
 5 properties:
 1)screen
 2)buttons
 3)mic
 4)speaker
 5)usb input
 3 things it can do:
 1)make calls
 2)recieve calls
 3)send text messages
 */
struct MobilePhone
{
    
    bool screen = true;
    bool buttons = true;
    bool mic = true;
    bool speaker = true;
    bool usbInput = true;

    void makeCall();
    void answerCall();
    void sendText();

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

    void play();
    void pause();
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

    void recordMidi();
    void recordAudio();
    void outputAudio();

};
/*
 6)laptop
 5 properties:
 1)screen
 2)keyboard
 3)mouse pad
 4)speakers
 5)camera
 3 things it can do:
 1)recieve input
 2)produce output
 3)save data
 */
struct Laptop
{
    bool screen = true;
    bool keyboard = true;
    bool mousePad = true;
    int speakers = 2;
    bool camera = true;

    void recieveInput();
    void produceOutput();
    void saveData();
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
struct television
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

    void switchTvOn();
    void changeTvChannel();
    void switchTvOff();

    RemoteControl controlOn;
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

    void switchLightOn();
    void switchHeaterOn();
    void feedFish();

    Decor tropical;
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
    
    int seats = 100;
    bool screenOn = true;
    bool projectorOn = true;
    int lightLevel = 10;

    void playFilm(bool screenOn,bool projectorOn);
    void setLightLevel(int lightLevel);
    void sitCustomers();

};
/*
 10)audio interface
 5 properties:
 These 5 properties should be UDTs that you defined above.
 this goes along with the instruction:
    One of your 10 UDTs should only use UDTs for its member variable types.
 1)lcd display-shows colour-brightness-number of pixels-amount of power consumed 
 2)headphone port
 3)power switch
 4)Mic inputs (4)
 5)computer connection
 3 things it can do:
 1)capture audion input
 2)send audio to speakers
 3)show audio levels on level meters
 */
 struct Producer
 {
    Guitar producersGuitar;
    MidiKeyboard producersKeyboard;
    Laptop producersLaptop;
    MobilePhone producersPhone;
    Daw producersDaw;

    void playInstrument();
    void recordInstrument();
    void playbackRecording();

 };
 

 #include <iostream>
 int main()
 {
     std::cout << "go to go!"<< std::endl;
 }
    

