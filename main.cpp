/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On a new branch:

 1) Add a constructor for each User-Defined-Type.
 
 2) Instantiate 1 or 2 instances of each of your user-defined types in the main function at the bottom of that file, and call some of those member functions.
 
 3) make them print out something interesting via std::cout
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type
{
    int a; //a member variable
    UDT() { a = 0; }             //3) the constructor
    void printThing()            //1) the member function
    {
        std::cout << "UDT::printThing() " << a << std::endl;  //5) printing out something interesting
    }
};

int main()
{
    UDT foo;              //4) instantiating a UDT in main()
    foo.printThing();     //4) calling a member function of the instance that was instantiated.
    
    return 0;
}
}

//insert Example::main() into main() of user's repo.



/*
 1)
 */
struct Human 
{
    float weight = 25.5f;
    float height = 160.5f;

    Human ()
    {
        std::cout << "Hello there! I'm a new Person." << std::endl;
    }

    void wakeUp();
    bool isHungry(int timeAwake, int stamina);
};

void Human::wakeUp()
{
    //call a waking up functionality
    std::cout << "I'm finally awake!" << std::endl;
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
    int closingTime = 18;

    Bakery ()
    {
        std::cout << "The Bakery is open between " <<  openingTime << " and " << closingTime << std::endl;
    }

    bool checkOpen (int opening, int closing, int current);
    int bakeBread (int numOfOvens, int breadPerOven);
};

bool Bakery::checkOpen (int opening, int closing, int current)
{
    if (current > opening && current < closing)
    {
        std::cout << "Bakery is Open, Come in!" << std::endl;
        return true;
    }
    std::cout << "Bakery is Closed!" << std::endl;
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

    PublicBus()
    {
       std::cout << "New Bus is here with a capacity of " << maxAmountofSeats << std::endl;
    }

    struct BusSeat     
    { 
        int seatRow = 1;
        bool isUsed = false;
        int maxWeight = 15;
        BusSeat(){std::cout << "This is a Bus Seat" << std::endl;}
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
        std::cout << "The Seats Backrest has been moved forward.." << std::endl;
    }
}


void PublicBus::BusSeat::setSeathHeight(int height)
{
    if (height > 1 && height < 15)
    {
        std::cout << "The Seat Height has been chagned to " << height << std::endl;
    }
    else
    {
        std::cout << "The Seat can't be adjusted to this height" << std::endl;
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

    Village(){std::cout << "The Village has been build" << std::endl;}

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

    Wizard()
    {
        std::cout << "New Wizard arrived. Health:" << health << " Mana: " << mana << std::endl;
    }

    struct WizardStaff 
    {     
        int itemIndex = 1;
        int baseDamage = 250;

        WizardStaff(){};

        void setSkin (int colorIndex, int logoIndex);
        int chargeUp (int chargingTime, int currentCharge);
    };

    int equipWeapon (Wizard gandalf);
    int unequipWeapon (Wizard gandalf);
    void attack (WizardStaff rareStaff, int enemyHealth);

};

int Wizard::equipWeapon (Wizard gandalf)
{
    if (gandalf.equipmentSlot == 1)
    {
        std::cout << "I've Equipped my Staff!" << std::endl; 
        return 2;
    }
    return 1;
}

int Wizard::unequipWeapon (Wizard gandalf)
{
    if (gandalf.equipmentSlot == 2)
    {
        std::cout << "Unequipped Weapon!" << std::endl;
        return 2;
    }
    return 1;
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

    CommonTreasureChest()
    {
        std::cout << "This is a common Treasure Chest with a Max Capacity of 5 items" << std::endl;
    }

    bool openChest(bool openState);
    bool closeChest(bool openState);
};

bool CommonTreasureChest::openChest (bool openState)
{
    if (openState == false) 
    {
        std::cout << "You've opened the Box, sadly there's nothing in it!" << std::endl;
        return true;
    }
    std::cout << "This Box is already opened.. find another one!" << std::endl;
    return false;
}

bool CommonTreasureChest::closeChest (bool openState)
{
    if (openState == true) 
    {
        std::cout << "You've closed the Box and locked it" << std::endl;
        return false;
    }
    std::cout << "You can't lock an already locked box" << std::endl;
    return true;
}


/*
 6)
 */
struct AudioPlugin 
{
    bool bypass = false;
    bool initialized = true;
    int samplerate = 41000;

    AudioPlugin(){std::cout << "The Plugin is running at " << samplerate << " Samples per Second." << std::endl;}
    
    void processAudio();
};

void AudioPlugin::processAudio()
{
    std::cout << "Processing the Audio Block" << std::endl;
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
    Example::main();

    Human Peter;
    Peter.wakeUp();

    std::cout << std::endl;

    Bakery TastyBreads;
    TastyBreads.checkOpen(8, 18, 20);
    TastyBreads.checkOpen(8, 18, 10);

    std::cout << std::endl;

    PublicBus Line104;
    PublicBus::BusSeat Seat01;
    Seat01.setSeathHeight(25);
    Seat01.setSeathHeight(8);
    
    std::cout << std::endl;

    Village CozyTown;
    CozyTown.startDay();

    std::cout << std::endl;

    Wizard GandalfTheGrey;
    //Calling equipWeapon function sets equipmentSlot Variable to 2, which allows the unequipWeapon functions if statement
    GandalfTheGrey.equipmentSlot = GandalfTheGrey.equipWeapon(GandalfTheGrey);  
    GandalfTheGrey.unequipWeapon(GandalfTheGrey);

    std::cout << std::endl;

    CommonTreasureChest Box01;
    Box01.isOpened = Box01.openChest(Box01.isOpened);
    Box01.openChest(Box01.isOpened);
    Box01.isOpened = Box01.closeChest(Box01.isOpened);
    Box01.closeChest(Box01.isOpened);

    std::cout << std::endl;

    AudioPlugin MultibandCompressor;
    MultibandCompressor.processAudio();

    std::cout << std::endl;


    std::cout << "good to go!" << std::endl;
}
