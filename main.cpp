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
struct MidiKeyboard
{
    int keys = 88;
    bool pitchWheel = true;
    bool modWheel = true;
    bool usbCompatable = true;
    bool metalBody = false;
    
    void playMidiNotes(bool keyPressed);
    void changePitch(bool pitchWheelUp);
    void controlMacros(bool modWheelUp);

};
void MidiKeyboard::playMidiNotes(bool)
{
  
}
void MidiKeyboard::changePitch(bool)
{

}
void MidiKeyboard::controlMacros(bool)
{

}
/*
 */
# include <string>

struct Guitar
{
    std::string manufacturer = "akai";
    bool neck = true;
    int strings = 6;
    bool jack = true;
    bool cable = true;

    void playNote(bool strum);
    void playChord(int stringNumber, bool strum);
    void playMuted(bool mute, bool strum);
};
void Guitar::playNote(bool)
{

}
void Guitar::playChord(int, bool)
{

}
void Guitar::playMuted(bool, bool)
{

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
    void answerCall(bool buttons, bool mic, bool speaker);
    void sendText(bool screen, bool buttons);
};
void MobilePhone::makeCall(bool, bool)
{

}
void MobilePhone::answerCall(bool, bool, bool)
{

}
void MobilePhone::sendText(bool, bool)
{

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

}
void Game::pause(bool)
{

}
void Game::exit()
{

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

    void recordMidi(bool, int);
    void recordAudio(int, bool);
    void outputAudio(bool);
};
void Daw::recordMidi(bool, int)
{

}
void Daw::recordAudio(int, bool)
{

}
void Daw::outputAudio(bool)
{

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
    void produceOutput(bool screen, int memoryGb);
    float saveData(int hardDriveAvailableGb);
};
void Laptop::receiveInput(bool, std::string, int)
{

}
void Laptop::produceOutput(bool, int)
{

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
    float resolution = 4000;
    bool digital = true;
    bool onButton = true;
    struct RemoteControl
    {
        int numberButtons = 10;
        
        
        void pressButton();
    };
    void switchTvOn(bool onButton);
    void changeTvChannel(RemoteControl);
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
void Television::changeTvChannel(Television::RemoteControl)
{

}
void Television::switchTvOff(Television::RemoteControl)
{

}
/*
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
void FishTank::switchLightOn(bool)
{

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
void FishTank::feedFish()
{

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

}
void Cinema::setLightLevel(int)
{

}
void Cinema::sitCustomers(int, int)
{

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

}
void Producer::recordInstrument(Laptop, Daw)
{

}
void Producer::playbackRecording(Laptop, Daw)
{

}

#include <iostream>
int main()
{
  std::cout<< "good to go !"<< std::endl;
}