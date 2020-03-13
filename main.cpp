/*
 Project 3 - Part 5 / 5
 video: Chapter 2 - Part 10
 Scope and Lifetime tasks
 
Create a branch named Part5

 video covered:
    variable scope and lifetime relative to { }
    while loops
    for loops()
 
 tasks
 
 1) add some new member functions to your types. 
 
 2) use while() or for() loops to do something interesting inside these new member functions.
         a) for example: have a loop that modifies a member variable of some object created outside the loop.
         b) when that member variable reaches a certain threshold, return it mid-loop.
         c) maybe use function parameters to control the starting value of that member variable or control the threshold
         
 3) call those new member functions in main()
 
 4) use std::cout statements to print out information about what your loops did.
 
 5) click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 
 example:
 */

#include <iostream>
namespace Example {
struct Bar 
{ 
    int num = 0; 
    Bar(int n) : num(n) { } 
};
struct Foo
{
    Bar scopeLifetimeFunc( int threshold, int startingVal ) //3), 4c) 
    {
        Bar bar(startingVal);                //4a)
        while( bar.num < threshold )         //4a) 
        { 
            bar.num += 1;                    //4a)
            
            if( bar.num >= threshold )       //4b)
                return bar;
        }
        
        return Bar {-1}; //if your startingValue >= threshold, the while loop never runs
    }
};

int main()
{
    Foo foo;
    auto bar = foo.scopeLifetimeFunc(3, 1);        //5) 
    
    std::cout << "bar.num: " << bar.num << std::endl;     //6) 
    return 0;
}
}


/*
 1)
 */
struct Bakery   
{
    Bakery () {}
    
    int numOfOvens =2;
    int amountOfBread = 250;
    int openingTime = 8;
    int closingTime = 18;

    bool checkOpen (int opening, int closing, int current);
    int bakeBread (int bakingRounds, int breadPerOven);
};

bool Bakery::checkOpen (int opening, int closing, int current)
{
    if (current > opening && current < closing)
    {
        std::cout << "Bakery is Open, Come in!" << std::endl;
        return true;
    }
    std::cout << "Bakery is Closed! Opening Times: " << opening << " to " << closing << "."  << std::endl;
    return false;
}

int Bakery::bakeBread (int bakingRounds, int breadPerOven)
{
    int totalAmount = 0;
    for (int i = 0; i < bakingRounds;  i+= 1)
    {
        std::cout << "Baked " << breadPerOven << " Breads in round " << (i+1) <<std::endl;
        totalAmount += breadPerOven;
    }
    std::cout << "Baked a total amount of: " << totalAmount << " new Breads." << std::endl;
    return (totalAmount);
}

/*
 2)
 */
struct Human 
{
    float weight;
    float height;

    Human () :
        weight (65.5f),
        height (189.5f)
    {
        std::cout << "Hello there! I'm a new Person and weigh " << weight << " Kilos." << std::endl;
    }

    void wakeUp();
    bool isHungry(int timeAwake, int stamina);
    int eatBread(int howMany, Bakery bakery);
};

void Human::wakeUp()
{
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

int Human::eatBread(int howMany, Bakery bakery)
{
    std::cout << "Breads in the Bakery: " << bakery.amountOfBread << std::endl;
    std::cout << "I'm eating " << howMany << " breads!" << std::endl;
    bakery.amountOfBread -= howMany;
    if (bakery.amountOfBread <= 0)
    {
        std::cout << "-> Bakery is out of Bread! Bake some new one via the bakeBread function." << std::endl;
        return 0;
    }
    std::cout << "-> Breads in the Bakery: " << bakery.amountOfBread << std::endl;
    return bakery.amountOfBread;
    
   
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
        int seatRow;
        bool isUsed;
        int maxWeight;
        BusSeat() : seatRow(15), isUsed(true), maxWeight(350) 
        {
            std::cout << "This is a Bus Seat" << std::endl;
        }
        void moveBackrest (bool isBack);
        void setSeathHeight (int heigth);
    };
    
    void takeSeat (BusSeat frontSeat, Human passenger);

};

void PublicBus::takeSeat(BusSeat frontSeat, Human passenger)
{
    if (passenger.weight < frontSeat.maxWeight)
    {
       std::cout << "The Passenger has a weight of " << passenger.weight << " and fits inside the bus seats capacity of " << frontSeat.maxWeight << std::endl;
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
    int health, mana, equipmentSlot;

    Wizard();

    struct WizardStaff 
    {     
        int itemIndex = 1;
        int baseDamage = 250;

        WizardStaff();

        void setSkin (int colorIndex, int logoIndex);
        int chargeUp (int chargingTime, int currentCharge);
    };

    int equipWeapon (Wizard gandalf);
    int unequipWeapon (Wizard gandalf);
    void attack (WizardStaff rareStaff, int enemyHealth);

};

Wizard::Wizard () : 
health (140),
mana (50),
equipmentSlot (1)
{
    std::cout << "New Wizard arrived. Health: " << health << " Mana: " << mana << std::endl;
}

Wizard::WizardStaff::WizardStaff ()
{
    std::cout << "That Staffs quite a rare item!" << std::endl;
}

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
    std::cout << "Attacking the Enemy!" << std::endl;
    for (int i = rareStaff.baseDamage; i >= 0; i -= 50 )
    {
        std::cout << "Enemy Health at " << enemyHealth << std::endl;
        std::cout << "Good HIT - Dealt 50 Damage!" << std::endl;
        enemyHealth -= 50;
        if (enemyHealth <= 0)
        {
            std::cout << "Enemy Eliminated!" << std::endl;
            return;
        }

    }
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
    bool isOpened;
    bool isRare;  

    CommonTreasureChest(bool rare) : isOpened (false) , isRare (rare)
    {
        if (isRare == false)
        {
             std::cout << "This is a common Treasure Chest with a Max Capacity of 5 items" << std::endl;
        }
        else if (isRare == true)
        {
            std::cout << "This is a RARE Treasure Chest with a Max Capacity of 5 items" << std::endl;
        }
    }

    bool openChest(bool openState);
    bool closeChest(bool openState);
    void lootChest();
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

void CommonTreasureChest::lootChest ()
{
    for (int i = numberOfItems; i != 0; i -= 1 )
    {
        std::cout << "Found a common item!" << std::endl;
        if (isRare == true && i == 0)
        {
            std::cout << "Legendary!!!" << std::endl;
        }
        
    }
}


/*
 6)
 */
struct AudioPlugin 
{
    bool bypass = false;
    bool initialized = true;
    int samplerate = 41000;

    AudioPlugin()
    {
        std::cout << "The Plugin is running at " << samplerate << " Samples per Second." << std::endl;
    } 
    
    void processAudio();
};

void AudioPlugin::processAudio()
{
    int i = 0;
    int sampleblock = 32;
    int processingspeed = 8;
    while (i < sampleblock)
    {
        i += processingspeed;
        std::cout << i << " out of " << sampleblock << " Samples updated.." << std::endl;
    }


}


/*
 7)
 */

struct AudioEvent 
{
    int samplerate, bitDepth;
    float length = 250.35f;
    int eventId = 15;

    AudioEvent() : samplerate(48000), bitDepth (24) 
    {
        std::cout << "Event Lenght: " << length << " Event ID: " << eventId << std::endl;
    } 

    int getLength(int eventId, int eventSamplerate);
    void generateWaveform(float eventLength, int id);
};

int AudioEvent::getLength(int eventSize, int eventSamplerate)
{
    return (eventSize*eventSamplerate);
}

void AudioEvent::generateWaveform(float eventLength, int id)
{
    if (id != 0 && eventLength > 0.1f)
    {
        std::cout << "This is the Waveform of the Event" << std::endl;
    }
}


/*
 8)
 */
struct AudioEditor 
{
    int samplerate = 48000;

    AudioEditor()
    {
        std::cout << "Splash Screen: Sound Forge 22" << std::endl;
    } 
    
    void importFile();
    void cutEvent (float cursorPosition, AudioEvent someClip);
    void processEvent (AudioEvent someAudio, AudioPlugin someAudioPlugin);
};

void AudioEditor::cutEvent (float cursorPosition, AudioEvent someClip)
{
    float cutPosition = cursorPosition + someClip.length;
    std::cout << "Cut the Event at: " << cutPosition << std::endl;
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
    Piano();

    int range;
    char color;

    void pressSustainPedal();
    void releaseSustainPedal();
    void playKeys(int startingKey, int endingKey, int noteSteps);
};

Piano::Piano() : 
range(88),
color('b')
{
    if (color == 'b')
    {
        std::cout << "I'm a black Concert Piano" << std::endl;
    }
}

void Piano::pressSustainPedal()
{
    std::cout << "Sustain Pedal is pressed" << std::endl;
}

void Piano::releaseSustainPedal()
{
    std::cout << "Sustain Pedal is released" << std::endl;
}

void Piano::playKeys(int startingKey, int endingKey, int noteSteps)
{
    std::cout << "-> Playing " << ((endingKey-startingKey+noteSteps) / noteSteps) 
    << " Keys from: " << startingKey << " to " << endingKey << std::endl;
    for (int i = startingKey; i <= endingKey; i += noteSteps)
    {
        std::cout << "Playing Key " << i << std::endl;
    }
}


/*
 10)
 */
struct ConcertHall 
{
    bool concertOngoing = false;
    int visitorCount = 1500;

    ConcertHall()
    {
        std::cout << "In This Hall fit " << visitorCount << " Visitors." << std::endl;
    } 

    void addInstrumentToStage(Piano);
};

void ConcertHall::addInstrumentToStage (Piano piano)
{
    std::cout << "A Piano with " << piano.range << " Keys has been added onto the stage!" << std::endl;
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
    TastyBreads.amountOfBread = Peter.eatBread(15, TastyBreads);
    TastyBreads.amountOfBread =  Peter.eatBread(5, TastyBreads);
    TastyBreads.amountOfBread =  Peter.eatBread(250, TastyBreads);
    TastyBreads.amountOfBread += TastyBreads.bakeBread(9,10);
     TastyBreads.amountOfBread =  Peter.eatBread(80, TastyBreads);

    std::cout << std::endl;

    PublicBus Line104;
    PublicBus::BusSeat Seat01;
    Seat01.setSeathHeight(25);
    Seat01.setSeathHeight(8);
    Line104.takeSeat(Seat01, Peter);
    
    std::cout << std::endl;

    Village CozyTown;
    CozyTown.startDay();

    std::cout << std::endl;

    Wizard GandalfTheGrey;
    Wizard::WizardStaff GandalfsStaff;
    //Calling equipWeapon function sets equipmentSlot Variable to 2, which allows the unequipWeapon functions if statement
    GandalfTheGrey.equipmentSlot = GandalfTheGrey.equipWeapon(GandalfTheGrey);  
    GandalfTheGrey.unequipWeapon(GandalfTheGrey);
    GandalfTheGrey.attack(GandalfsStaff , 250);

    std::cout << std::endl;

    CommonTreasureChest Box01 (false);
    Box01.isOpened = Box01.openChest(Box01.isOpened);
    Box01.openChest(Box01.isOpened);
    Box01.isOpened = Box01.closeChest(Box01.isOpened);
    Box01.closeChest(Box01.isOpened);
    CommonTreasureChest Box02 (true);
    Box02.lootChest();

    std::cout << std::endl;

    AudioPlugin MultibandCompressor;
    MultibandCompressor.processAudio();

    std::cout << std::endl;

    AudioEvent KickDrumSample;
    KickDrumSample.generateWaveform(25.5, 5);

    std::cout << std::endl;

    AudioEditor SoundForge;
    SoundForge.cutEvent(5.5, KickDrumSample);

    std::cout << std::endl;

    Piano GrandPiano;
    GrandPiano.pressSustainPedal();
    GrandPiano.playKeys(25,30, 1);
    GrandPiano.playKeys(50,80, 10);

    std::cout << std::endl;

    ConcertHall SidneyOpera;
    SidneyOpera.addInstrumentToStage(GrandPiano);


    std::cout << "good to go!" << std::endl;

  
}
