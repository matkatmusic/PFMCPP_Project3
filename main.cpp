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
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    int distanceTraveled;

    void run(int howFast, bool startWithLeftFoot);

    struct Foot
    {
        int numberOfSteps = 0;
        int step = 5;

        void stepForward()
        {
            numberOfSteps += 1;
        }
        
        int stepSize(int speed)
        {
            return speed * step;
        }
    };
    
    Foot rightFoot;
    Foot leftFoot;
};

void Person::run(int howFast, bool startWithLeftFoot)
{
    if (startWithLeftFoot == true)
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


/*
 */
#include<iostream>

struct MidiKeyboard
{
    int keys = 88;
    bool pitchWheel = true;
    bool modWheel = true;
    bool keyPressed = false;
    
    void playMidiNotes(bool keyPressed);
    void changePitch(bool pitchWheel);
    void controlMacros(bool modWheel);
};

void MidiKeyboard::playMidiNotes(bool)
{
    if(keyPressed == true)
    {
        std::cout<<"key pressed"<<std::endl;  
    }
    else
    {
        std::cout<<"key not pressed"<<std::endl;
    } 
}

void MidiKeyboard::changePitch(bool)
{
    if(pitchWheel == true)
    {
        std::cout<<"pitch wheel"<<std::endl;
    }
    else
    {
        std::cout<<"no pitch wheel"<<std::endl;
    }
}

void MidiKeyboard::controlMacros(bool)
{
    if(modWheel == true)
    {
        std::cout<<"mod wheel"<<std::endl;
    }
    else
    {
        std::cout<<"no mod wheel"<<std::endl;
    }
}
/*
 */
# include <string>

struct Guitar
{
    std::string manufacturer = "akai";
    bool neck = true;
    int strings = 6;
    bool strum;
    bool muted;

    int playNote(bool strum);
    void playChord(int stringNumber, bool strum);
    void playMuted(bool mute, bool strum);
    void strummingGuitar();
    void strummingMuted();
};

int Guitar::playNote(bool)
{
    if(strings > 0)
    {
        return strings;
    }
    else
    {
        return 0;
    }
}

void Guitar::playChord(int, bool)
{
    if(strings > 0 || strum == true)
    {
        strummingGuitar();
    }
    else
    {
        strings = 0;
    }   
}

void Guitar::playMuted(bool, bool)
{
    if(strings > 0 || strum == true || muted == true)
    {
        strummingMuted();    
    }
    else
    {
        strings = 0;
    }
}
/*
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
    void answerCall(bool buttons, bool mic);
    void sendText(bool screen, bool buttons);
};

void MobilePhone::makeCall(bool, bool)
{
    std::cout<<"Calling"<<std::endl;
}

void MobilePhone::answerCall(bool, bool)
{
    std::cout<<"Answered Call"<<std::endl;
}

void MobilePhone::sendText(bool, bool)
{
    std::cout<<"Text Sent"<<std::endl;
}
/*
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

void Game::play(int)
{
    if(players == 1 || players == 2)
    {
        std::cout<<"welcome player to the game"<<std::endl;
    }
    else
    {
        std::cout<<"choose players"<<std::endl;
    }
}

void Game::pause(bool)
{
    std::cout<<"Game Paused"<<std::endl;
}

void Game::exit()
{
    std::cout<<"Game Over"<<std::endl;
}
/*
 */
struct Daw
{
    int audioTracks =16;
    int midiTracks = 16;
    bool plugins = true;
    bool stereoOutput = true;
    bool stereoInput = true;

    float recordMidi(bool plugins, int midiTracks);
    float recordAudio(int audioTracks, bool stereoInput);
    float outputAudio(bool stereoOutput);
};

float Daw::recordMidi(bool, int)
{
    return(midiTracks);
}

float Daw::recordAudio(int, bool)
{
    return(stereoOutput);   
}

float Daw::outputAudio(bool)
{
    if(stereoOutput == true)
    {
        std::cout<<"audio playing"<<std::endl;
    }
    else
    {
        std::cout<<"no audio"<<std::endl;
    }
}
/*
 */
#include <string>
struct Laptop
{
    int screenresolution = 4000;
    bool keyboard = true;
    std::string password = "password";
    int hardDriveAvailableGb = 256;
    int memoryGb = 8; 

    void receiveInput(bool keyboard, std::string password, int memoryGb);
    float produceOutput(bool screen, int memoryGb);
    float saveData(int hardDriveAvailableGb);
};

void Laptop::receiveInput(bool, std::string, int)
{
    if(password == "password")
    {
        std::cout<<"welcome user"<<std::endl;
    }
    if(password != "password")
    {
        std::cout<<"incorrect password"<<std::endl;
    }
    else
    {
        std::cout<<"enter password"<<std::endl;
    }

}

float Laptop::produceOutput(bool, int)
{
    return(memoryGb);
}

float Laptop::saveData(int)
{
    return(hardDriveAvailableGb);
}
/*
 */
struct Television
{
    bool flatScreen = true;
    bool surroundSound = true;
    int heightCm = 60;
    int lengthCm = 80;
    bool onButton = true;
    
    struct RemoteControl
    {
        int numberButtons = 10;
        bool channelUp;
        bool channelDown;
        int channel = 1;
        
        void pressButton();
        void changeTvChannel(int channel);
    };
    
    void switchTvOn(bool onButton);
    void switchTvOff(RemoteControl);

    RemoteControl controlOn, controlOff;
};

void Television::switchTvOn(bool)
{
    if (onButton == true)
    {
        controlOn.pressButton();
    }
      
    else
    {
        controlOff.pressButton();
    }
}

void changeTvChannel(int)      
{
    std::cout<<"T.V Channel"<<std::endl;     
}

void Television::switchTvOff(Television::RemoteControl)
{
    std::cout<<"television off"<<std::endl;
}
/*
 */
#include<iostream>

struct FishTank
{
    float waterTempCelcius = 25.0f;
    int heightCm = 30;
    int lengthCm = 90;
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
    void feedFish(int gallons);

    Decor tropical, marine;
};

void FishTank::switchLightOn(bool)
{
    std::cout<<"light is on"<<std::endl;
}

void FishTank::switchHeaterOn(float)
{
    if(waterTempCelcius > 25.0f)
    {
        marine.cleanDecor();
    }
      
    else
    {
        tropical.cleanDecor();
    }
}

void FishTank::feedFish(int)
{
    if(gallons <= 50)
    {
        std::cout<<"feed fish once a week"<<std::endl;  
    }
    if(gallons <= 100 || gallons > 50)
    {
        std::cout<<"feed fish twice a week"<<std::endl;
    }
    else
    {
        std::cout<<"feed fish at least three times a week"<<std::endl;
    }        
}
/*
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

void Cinema::playFilm(bool, bool)
{
    if(screenOn == true || projectorOn == true)
    {
        std::cout<<"Quiet Please Movie is On"<<std::endl;
    }
    else
    {
        std::cout<<"Movie will Start soon"<<std::endl;
    }
}

void Cinema::setLightLevel(int)
{
    if(lightLevel == 0)
    {
        std::cout<<"turn lights on"<<std::endl;
    }
    if(lightLevel == 10)
    {
        std::cout<<"turn lights down"<<std::endl;
    }
    else
    {
        lightLevel = 5;
        std::cout<<"mid lighting"<<std::endl;
    }
}

void Cinema::sitCustomers(int, int)
{
    if(freeSeats < 1)
    {
        std::cout<<"Sorry all seats are taken"<<std::endl;
    }
    else
    {
        std::cout<<"Please select seat"<<std::endl;
    }
}
/*
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

void Producer::playInstrument(Guitar, MidiKeyboard)
{
    std::cout<<"producer playing instrument"<<std::endl;   
}

void Producer::recordInstrument(Laptop, Daw)
{
    std::cout<<"recording"<<std::endl;
}

void Producer::playbackRecording(Laptop, Daw)
{
    std::cout<<"playing"<<std::endl;
}

#include <iostream>
int main()
{
  std::cout<< "good to go !"<< std::endl;
}