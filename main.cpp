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
        3) volume controls 
        4) turn signal controls
    Name 2 things you can do with the:   Steering Wheel
        1) adjust cruise control settings.
        2) turn down the radio
        
Sub Object 2: Instrument Cluster
    Name 4 things you'll find on the:   Instrument Cluster
        1) Speedometer
        2) Fuel gauge
        3) Odometer
        4) Turn signal indicators
    Name 3 things you can do with the:   Instrument Cluster
        1) view current speed
        2) view how much fuel is left
        3) view which direction the car is moving
    
Sub Object 3: Environment Controls
    Name 3 things you'll find on the:    Environment Controls
        1) air quality control
        2) heater
        3) A/C
    Name 3 things you can do with the:   Environment Controls
        1) set climate control on auto
        2) turn on heater
        3) turn off A/C

Sub Object 4: Infotainment System
    Name 3 things you'll find on the:    Infotainment System
        1) radio
        2) car rearview
        3) time
    Name 3 things you can do with the:   Infotainment System
        1) set radio channels
        2) activate parking assistance
        3) set time

Sub Object 5: Seat 
    Name 3 things you'll find on the:    Seat
        1) headrest 
        2) seatbelt
        3) base
    Name 2 things you can do with the:   Seat
        1) lean back
        2) sit 
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
Thing 1) Cat
5 properties:
    1) number of ears  (int)
    2) its name (std::string)
    3) amount of daily food intake (float)
    4) color of its fur (std::string)
    5) length of its tail (double)
3 things it can do:
    1) it can scratch furniture
    2) it can make noises
    3) it can sleep
 */

/*
Thing 2) Range
5 properties:
    1) number of racks in the oven (int)
    2) maximum temperature its oven can reach (int)
    3) its fuel type (std::string)
    4) number of cooktops (int)
    5) its width and height (float)
3 things it can do:
    1) bake cookies 
    2) heat up food
    3) boil water
 */

/*
Thing 3) shopping cart
5 properties: 
    1) its material (std::string)
    2) number of wheels (int)
    3) color of its handle (std::string)
    4) its width and height (float)
    5) which store it belongs to (std::string)
3 things it can do:
    1) carries groceries 
    2) it can roll down a hill
    3) can be parked in a cart corral 
 */

/*
Thing 4) wind
5 properties:
    1) speed (double)
    2) direction (std::string)
    3) its definition (std:: string)
    4) its cause (std:: string)
    5) its use (std:: string)
3 things it can do:
    1) it transports seeds
    2) it turns wind turbines 
    3) it helps birds travel 
 */

/*
Thing 5) wings
5 properties:
    1) flexibility in ft - can flex 26.25ft before they fail (float)
    2) amount of fuel each wing carries in gal (int)
    3) number of ailerons on the rear of the wings (int)
    4) number of engines attached to the lower side of the wings (int)
    5) wingspan  in ft  (int)
3 things it can do:
    1) generate lift 
    2) reduce drag
    3) permit lower landing speed 
 */

/*
Thing 6) landing gear
5 properties:
    1) diameter of each wheel (float)
    2) number of wheels (int)
    3) weight of the nose landing gear (float)
    4) number of the four main landing gear mechanisms (int)
    5) pressure of the tires (float)
3 things it can do:
    1) dissipate the kinetic energy of landing impact
    2) prevent the fuselage from hitting the ground
    3) provide support during takeoff
 */

/*
Thing 7) tail
5 properties:
    1) weight of lower rudder (float)
    2) length of lower rudder (float )
    3) things its auxiliary power unit can do (std::string)
    4) weight of upper rudder (float)
    5) height of upper rudder (float)
3 things it can do:
    1) its small engine powers the jet's electrical when on the ground
    2) its power unit powers the air-conditioning systems when on the ground
    3) its rudder section helps turn the airplane from right to left in flight
 */

/*
Thing 8) passenger cabin
5 properties:
    1) number of seats (int)
    2) material of seat cover (std::string)
    3) number of toilets (int)
    4) weight of carry-on luggage (float)
    5) aisle width (float)
3 things it can do:
    1) seats passengers
    2) provides entertianment system
    3) provides waste removal system
 */

/*
Thing 9) fuselage
5 properties:
    1) thickness of fuselage wall in in (float)
    2) weight of exterior paint in lbs (int)
    3) its material (std::string)
    4) diameter of the fuselage
    5) weight of the fuselage 
3 things it can do:
    1) it gives the jet its structure
    2) it provides heat insulation
    3) it provides sound insulation 
 */

/*
Thing 10) jumbo jet
5 properties:
    1) wings
    2) landing gear
    3) tail
    4) passenger cabin
    5) fuselage
3 things it can do:
    1) it can transport passengers
    2) it can fly
    3) it can carry cargo
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
