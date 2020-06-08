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
*/
struct CellPhone
{

};
/*
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
Thing 1) Prophet-6
5 properties:
    1)  number of oscillators
    2)  FX on/off
    3)  filter cutoff amount
    4)  distortion amount
    5)  keyboard notes (int)
3 things it can do:
    1)  modulate cutoff
    2)  play sequence
    3)  turn on FX
 */

/*
Thing 2) Tr-808
5 properties:
    1)  number of voices
    2)  step trigger (bool)
    3)  level amount per voice
    4)  preset number
    5)  tempo bpm
3 things it can do:
    1)  program sequence
    2)  adjust tone
    3)  change the world
 */

/*
Thing 3) Electric Guitar
5 properties:
    1)  volume level
    2)  tone level
    3)  number of strings
    4)  tuning pegs rotation degree
    5)  seymour duncan pickups (bool)
3 things it can do:
    1)  play music
    2)  feedback
    3)  guitar spin
 */

/*
Thing 4) Granular Synth
5 properties:
    1)  grain size
    2)  grain density
    3)  playback position
    4)  varispeed of sample
    5)  random
3 things it can do:
    1)  granulate
    2)  change playback position
    3)  modulate grain size
 */

/*
Thing 5) Oscillators
5 properties:
    1)  -12v power consumption
    2)  +12v power consumption
    3)  waveshape value
    4)  output type (sine, saw, waveshaper)
    5)  FM attenuator value
3 things it can do:
    1)  outputs wave
    2)  hard sync
    3)  receives pitch CV
 */

/*
Thing 6) Filters
5 properties:
    1)  filter type (HP, LP, BP)
    2)  FM attenuator value
    3)  cutoff value
    4)  resonance value
    5)  gain value
3 things it can do:
    1)  filter audio
    2)  track 1v/oct
    3)  change filter cutoff
 */

/*
Thing 7) Envelopes
5 properties:
    1)  attack time
    2)  decay time
    3)  sustain level
    4)  release time
    5)  hold time
3 things it can do:
    1)  output CV
    2)  receive gate/trigger
    3)  engage cycle mode
 */

/*
Thing 8) VCAs
5 properties:
    1)  number of audio inputs
    2)  number of cv inputs
    3)  cascading cv inputs (bool)
    4)  boost switch
    5)  number of audio outputs
3 things it can do:
    1)  receive cv
    2)  output audio/cv
    3)  mute output
 */

/*
Thing 9) CV Sequencer
5 properties:
    1)  number of channels
    2)  channel output level
    3)  number of steps
    4)  clock mode(slave or master)
    5)  scale select (int)
3 things it can do:
    1)  output cv
    2)  receive clock
    3)  arpeggiate steps
 */

/*
Thing 10) Modular Synth
5 properties:
    1)  oscillators
    2)  filters
    3)  envelopes
    4)  VCAs    
    5)  CV Sequencer
3 things it can do:
    1)  changes pitch
    2)  cross modulates
    3)  modulate decay time of AD envelope
 */

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
