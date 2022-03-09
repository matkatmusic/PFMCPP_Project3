/*
Project 3 - Part 1a-d / 5
Video:  Chapter 2 Part 5
User-Defined Types

Create a branch named Part1

Purpose: The entire purpose of this 5-part project is to get you 
writing C++ code that compiles and to reinforce the syntax habits 
that C++ requires.  
What you create in this project will be used as the basis of 
Project 5 in C++ Language Fundamentals.

************************
Part1 purpose:  Learn to write User-Defined Types (UDTs)

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps, all on the same branch.
    Part 1a: you will learn to think about an object in terms of 
    its sub-objects.
    
    Part 1b: you will write 4 un-related UDTs in plain english.
    
    Part 1c: you will write 1 UDT in plain english that will be 
    made of 5 related sub-objects.
    
    Part 1d: you will write plain-english UDTs for the 5 
    sub-objects that form the UDT defined in Part 1c.
    
    Part 1e: you will convert those 10 plain-english UDTs into code 
    that runs.
************************
*/

/*
Part 1a - Lesson
1) Look at the picture of the car interior (Part1a pic.jpg).  
    It's in the list of files on the left in Replit.
    Fill in the blanks below which break this car interior down 
    into sub-objects.

Several sub-objects are listed below that make up this car's interior.
    you're going to name several things that you'll find on each 
    subobject.
    you're going to name several things that each subobject can do.
    If you've seen "Family Feud", we are going to do what they do 
    in that show.

    A few blanks are filled in for you already.

Main Object: Car Interior
Sub Object 1: Steering Wheel
    Name 4 things you'll find on the:    Steering Wheel
        1) paddle shifters
        2) 'cruise control' controls
        3) cabin audio controls
        4) turn signal lever
    Name 2 things you can do with the:   Steering Wheel
        1) adjust cruise control settings.
        2) adjust music volume
        
Sub Object 2: Instrument Cluster
    Name 4 things you'll find on the:   Instrument Cluster
        1) speedometer  
        2) rpm indicator
        3) oil temperature indicator
        4) gas level indicator
    Name 3 things you can do with the:   Instrument Cluster
        1) See which drive configuration you're in (park, neutral, etc)
        2) check your speed
        3) check your engine's rpm
    
Sub Object 3: Environment Controls
    Name 3 things you'll find on the:    Environment Controls
        1) seat heater controls
        2) airflow temperature knob
        3) air recycle button
    Name 3 things you can do with the:   Environment Controls
        1) increase the airflow
        2) raise the temperature of the air that's flowing
        3) turn on the seat heater

Sub Object 4: Infotainment System
    Name 3 things you'll find on the:    Infotainment System
        1) audio on/off button
        2) radio frequency dial
        3) hazard indicator controls
    Name 3 things you can do with the:   Infotainment System
        1) change radio stations
        2) raise the music volume
        3) turn on hazard indicators

Sub Object 5: Seat 
    Name 3 things you'll find on the:    Seat
        1) backrest
        2) lever to move the seat
        3) seat cushion
    Name 2 things you can do with the:   Seat
        1) lean the seat backward   
        2) slide the seat closer to the steering wheel
*/

/*
Part 1b - Lesson
Now you have some basic understanding of how to think of an object 
in terms of its sub-objects.

Next, write 4 un-related UDTs in plain english:
*/
/*
 example:  
 
Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - the amount of water used per week.
        - amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior

    Notice that I did not use "has a vacuum cleaner" or "Has 
    eco-friendly cleaning supplies" as one of the properties.
    
    Writing 'has a ___" checks whether or not your object **has the 
    ability to do something**.
    Instead, I wrote "number of vacuum cleaners" and "number of 
    eco-friendly cleaning supplies".  
    
    These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' 
    (has a) as a member variable type.
    Instead, prefer the other primitive types.

    In addition to the usual primitives (covered in Project 2), you 
    can use 'std::string' to represent strings in this project.
 */

/*
===================
Part 1b Assignment: 1 Step
===================
1)  Fill in the 4 UDTs below with a random UDT in plain english.
    These 4 UDTs do not need to be related.
        a) For each plain-english UDT, write out 5 traits or 
        properties and 3 things it can do.
        b) remember: these properties will eventually become
        primitives.
        c) pick properties that can eventually be represented with 
        'int float double bool char std::string'.
*/

 /*
Part 1c - Lesson
You have just finished practicing writing out a UDT that is has 
5 properties and can perform 3 actions.  

Now you will write 1 UDT in plain english. 

This UDT will be different than the previous 4 you wrote: It will 
use UDTs to describe its 5 properties, as opposed to using C++ 
primitives to describe the 5 properties.

You will define these 5 'property' UDTs in Part 1d.
 */

 /*
Part 1c example:
    Cell Phone

    A Cell Phone is built using the following 5 UDTs:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

    Notice that I did not use "has a display" or "Has memory" or 
    "has a cpu" as one of the properties of the CellPhone.
    
    Writing 'has a ___" checks whether or not your object **has 
    the ability to do something**.
    Instead, I wrote "Display" or "CPU".  These are specific 
    objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' 
    (has a) as a member variable type.
    Instead, prefer the other primitive types.

    When you choose your 5 smaller parts, remember that each of 
    these 5 Sub Objects will need to be defined with 5 primitive 
    properties and 3 actions EACH.
*/
/*
===================
Part 1c assignment: 2 steps
===================

1) write the name of the primitive type you'll be using after each 
    property in UDTs 1-4 from Part 1b:
    pick properties that can be represented with 
    'int float double bool char std::string'.
    example: 
        Display:
            Number of Pixels (int)
            Amount of Power consumed (milliwatt-hours) (float)
            Brightness (double)
            area in cm2 (int)
            brand (std::string)

2) Fill in the 10th UDT below.
Define an object that is made of 5 sub-objects.
    These 5 sub-objects will not be defined using Primitives, but instead will be their own UDTs 
    you'll define these 5 sub-objects in Part 1d.
*/

/*
Part 1d - Lesson
You now know how to define a UDT that is composed of other UDT.
Now you will learn how to break down those sub-object UDTs into 
their 5 properties and 3 actions.

The goal of Part 1d is to get you to think about breaking down an 
object into smaller and smaller objects, until the smallest object 
is made of up only C++ primitives and std::string. 

Revisiting the previous example:  
Cell Phone

A Cell Phone is made up of the following 5 properties/sub-objects 
and 3 actions:
    Display
    Memory
    CPU
    Radio
    Applications
3 actions:
    make a call
    send a text
    run an application.

These 5 properties can be broken down into their own sub-objects 
and properties. 

If we break down the first property 'Display' into its 5 properties 
we get:
    brightness
    amount of power consumed.
    pixels
    width in cm
    height in cm

the Display's brightness can be represented with a Primitive, 
such as a double. 

The amount of power consumed can also be represented with a 
Primitive, such as a float or integer (i.e. 250mWa)

The 'pixels' property must be represented with an array of Pixel 
instances, as the screen has more than 1 row of pixels.
    Arrays have not been discussed and can't be used in this 
    project.
    Instead, we can use an Integer primitive to store the 
    Number of Pixels:

Display:
    Number of Pixels
    Amount of Power consumed (milliwatt-hours)
    Brightness
    width in cm
    height in cm

As you can see, the 'Display' UDT has been broken down to the 
point of being able to describe it with C++ primitives. 
*/

/*
===================
Part 1d assignment: 3 Parts.
===================

1) Fill in #5 - #9 below with plain-english UDTs for the 5 
properties you created for UDT #10. 
    example: 
        If #10's first property was 'Engine', then `Thing 5)` 
        will be `Engine`. 
        You will need to provide 5 properties and 3 member 
        functions of that Engine object in plain English.
        Remember to pick properties that can be represented 
        with 'int float double bool char std::string'.

2) write the name of the primitive type you'll be using after 
each property for UDTs 5 - 9.
    You already did this for UDTs 1-4 in Part 1c.
    Pick properties that can be represented with 
    'int float double bool char std::string'
    example: 
        Display:
            Number of Pixels (int)
            Amount of Power consumed (milliwatt-hours) (float)
            Brightness (double)
            width in cm (int)
            height in cm (int)

Step 3 is written below UDTs 5 - 9
*/

/*
===================
Part 1d assignment: Step 3
===================
You've just defined 10 UDTs!
4 of them are unrelated (UDTs 1-4).
5 of them form the sub-objects that make up the 10th UDT. 

MOVE THEM BELOW this block comment and put them in numerical order 
(1 - 10) starting on line 473
    DO NOT COPY. 
    I do not want to see 2 copies of your Plain-English UDTs.  
    I only want to see the 10 UDTs written BELOW this block comment, in numerical order (1 - 10).

After you have MOVED your 10 UDTs, send me a DM with your pull request link.
I will review the pseudo-code that you have written.
*/

/*
Thing 1) dog
5 properties:
    1) fur color (std::string)
    2) weight (float)
    3) age (int)
    4) number of cat roommates (int)
    5) number of walks needed per day (int)
3 things it can do:
    1) play at the dog park
    2) chew furniture
    3) bark at other dogs
 */

/*
Thing 2) synthesizer
5 properties:
    1) attack fader position (int)
    2) lfo depth position (float)
    3) lfo rate (float)
    4) filter cutoff amount (float)
    5) noise level (int)
3 things it can do:
    1) assign lfo to another parameter
    2) play a sequence
    3) lower the volume
 */

/*
Thing 3) laptop
5 properties:
    1) battery level (int)
    2) wifi signal reception level (float)
    3) color of the computer (std::string)
    4) age of the computer (int)
    5) number of times it's been dropped (int)
3 things it can do:
    1) adjust the display brightness
    2) capture a screenshot
    3) send an email
 */

/*
Thing 4) refrigerator
5 properties:
    1) number of vegetables inside (int)
    2) temperature inside (float)
    3) location within the house (std::string)
    4) power draw (double)
    5) time elapsed making ice (float)
3 things it can do:
    1) dispense water
    2) store food
    3) adjust temperature inside
 */

/*
Thing 5) drive shaft
5 properties:
    1) material composition (std::string)
    2) rotations per minute (int)
    3) torque amount in N*m (double)
    4) length in cm (float)
    5) engaged with transmission (bool)
3 things it can do:
    1) increase speed
    2) increase torque
    3) fail structurally
 */

/*
Thing 6) engine
5 properties:
    1) fuel flow rate (float)
    2) cylinder arrangement pattern (std::string)
    3) number of spark plug misfires (int)
    4) valve pulse width percentage (int)
    5) horsepower generated (float)
3 things it can do:
    1) adjust valve timing
    2) command spark plugs to power
    3) bypass airflow
 */

/*
Thing 7) battery
5 properties:
    1) voltage level (float)
    2) current draw in amps (double)
    3) weight (float)
    4) volume in m^3 (int)
    5) age (int)
3 things it can do:
    1) charge
    2) discharge
    3) catch on fire
 */

/*
Thing 8) coolant plumbing circuit
5 properties:
    1) number of valves (int)
    2) efficiency percentage (float)
    3) pump power draw in watts (float)
    4) fan speed percentage (int)
    5) type of coolant (std::string)
3 things it can do:
    1) adjust air flow by adjusting fan speed
    2) adjust coolant flow 
    3) leak coolant
 */

/*
Thing 9) engine controller
5 properties:
    1) number of outputs (int)
    2) highest temperature reading (float)
    3) highest temperature channel name (std::string)
    4) data rate in Hz (int)
    5) output voltage (float)
3 things it can do:
    1) command a different fuel flow amount
    2) cruise control
    3) raise an alert on the dash
 */

/*
Thing 10) car components
5 properties:
    1) drive shaft
    2) engine
    3) battery
    4) coolant plumbing circuit
    5) engine controller
3 things it can do:
    1) idle
    2) impart torque on the differential
    3) misfire spark plugs
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
