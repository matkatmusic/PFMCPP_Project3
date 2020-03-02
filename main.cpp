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

struct Person
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    int distanceTraveled; 

    struct Foot
    {
        void stepForward()
        {
            //step forward function
        }
        int stepSize()
        {
           return{}; //step size function
        }
    };
    
    void run(bool startWithLeftFoot);

    Foot leftFoot, rightFoot;

};

void Person::run(bool startWithLeftFoot)
{
    if( startWithLeftFoot)
    {
        leftFoot.stepForward();
        rightFoot.stepForward();
    }
    else 
    {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }
    distanceTraveled += leftFoot.stepSize() + rightFoot.stepSize();
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
 1)
 */
struct Human 
{
    float weight = 25.5f;
    float height = 160.5f;

    void wakeUp();
    bool isHungry(int timeAwake, int stamina);
};

void Human::wakeUp()
{
    //call a waking up functionality
}

bool Human::isHungry(int timeAwake, int stamina)
{
    if (timeAwake > 8 && stamina <4 ) 
    {
        return true;
    }
    return false;
}


/*
 2)
 */
struct Bakery   
{
    int numOfOvens = 2;
    int amountOfBread = 250;
    int openingTime = 8;
    int closingTIme = 18;

    bool checkOpen (int opening, int closing, int current);
    int bakeBread (int numOfOvens, int breadPerOven);
};

bool Bakery::checkOpen (int opening, int closing, int current)
{
    if (current > opening && current < closing)
    {
        return true;
    }
    return false;
}

int Bakery::bakeBread (int numOvens, int breadPerOven)
{
    return (amountOfBread-(numOvens*breadPerOven));
}


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
        bool isUsed = false;
        int maxWeight = 15;
        void moveBackrest (bool isBack);
        void setSeathHeight (int heigth);
    };
    
    void takeSeat (BusSeat frontSeat, Human passenger);

};

void PublicBus::takeSeat(BusSeat frontSeat, Human passenger)
{
    if (passenger.weight < frontSeat.maxWeight)
    {
       // trigger a sit down function
    }
}

void PublicBus::BusSeat::moveBackrest(bool isBack)
{
    if (isBack == false)
    {
        // move the Backrest forward
    }
}


void PublicBus::BusSeat::setSeathHeight(int height)
{
    if (height > 1 && height < 15)
    {
        // call a function to change the seat height
    }
}


/*
 4)
 */
struct Village 
{
    Human villagerTom;
    Human villagerLisa;
    PublicBus redBus;

    void startDay();
};

void Village::startDay ()
{
    villagerTom.wakeUp();
    villagerLisa.wakeUp();
}


struct Wizard 
{
    int health = 160;
    int mana = 70;
    int equipmentSlot = 1;

    struct WizardStaff 
    {
        int itemIndex = 1;
        int baseDamage = 250;

        void setSkin (int colorIndex, int logoIndex);
        int chargeUp (int chargingTime, int currentCharge);
    };

    void equipWeapon (Wizard gandalf);
    void unequipWeapon (Wizard gandalf);
    void attack (WizardStaff rareStaff, int enemyHealth);

};

void Wizard::equipWeapon (Wizard gandalf)
{
    if (gandalf.equipmentSlot == 1)
    {
        // Equip the Weapon
    }
}

void Wizard::unequipWeapon (Wizard gandalf)
{
    if (gandalf.equipmentSlot == 2)
    {
        // Unequip the Weapon
    }
}

void Wizard::attack (WizardStaff rareStaff, int enemyHealth)
{
    enemyHealth -= rareStaff.baseDamage;
}

void Wizard::WizardStaff::setSkin (int colorIndex, int logoIndex)
{
    colorIndex = 5;
    logoIndex = 15;
}

int Wizard::WizardStaff::chargeUp (int chargingTime, int currentCharge)
{
    return (currentCharge * chargingTime);
}


/*
 5)
 */
struct CommonTreasureChest
{
    int numberOfItems = 5;
    bool isRare = false;
    bool isOpened = false;

    bool openChest(bool openState);
};

bool CommonTreasureChest::openChest (bool openState)
{
    return (openState == false);
}


/*
 6)
 */
struct AudioPlugin 
{
    bool bypass = false;
    bool initialized = true;
    int samplerate = 41000;
    
    void processAudio();
};

void AudioPlugin::processAudio()
{
    //Process the Audio Block
}


/*
 7)
 */

struct AudioEvent 
{
    int samplerate = 48000;
    int bitDepth = 24;
    float length = 250.35f;
    int eventId = 15;

    int getLength(int eventId, int eventSamplerate);
    void generateWaveform(float eventLength, int eventId);
};

int AudioEvent::getLength(int eventSize, int eventSamplerate)
{
    return (eventSize*eventSamplerate);
}

void AudioEvent::generateWaveform(float eventLength, int eventId)
{
    if (eventId != 0 && eventLength > 0.1f)
    {
        //generate the Audio Waveform
    }
}

/*
 8)
 */
struct AudioEditor 
{
    int samplerate = 48000;
    
    void importFile();

    void cutEvent (float cursorPosition, AudioEvent someClip);
    void processEvent (AudioEvent someAudio, AudioPlugin someAudioPlugin);
};

void cutEvent (float cursorPosition, AudioEvent someClip)
{
    float cutPosition = cursorPosition - someClip.length;
    //forward cutPosition to some logic that cuts the Audio
}

void AudioEditor::processEvent (AudioEvent someAudio, AudioPlugin someAudioPlugin)
{
    if (someAudio.eventId == 15)
    {
        someAudioPlugin.processAudio();
    }
}


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

void Piano::pressSustainPedal()
{
    //press the Sustain Pedal on the Piano
}

void Piano::releaseSustainPedal()
{
    //release the Sustain Pedal on the Piano
}


/*
 10)
 */
struct ConcertHall 
{
    bool concertOngoing = false;
    int visitorCount = 1500;

    void addInstrumentToStage(Piano);
};

void ConcertHall::addInstrumentToStage (Piano)
{
    // add the Instrument to the Stage
}


#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
