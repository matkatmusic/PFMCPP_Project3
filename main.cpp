/*
Project 3 - Part 1d / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3. 
Part1 will be broken up into 5 separate steps 
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, 
    until the smallest object is made of up only C++ primitives. 

    Continuing the previous example:  Cell Phone

    A Cell Phone is made up of the following 5 properties/sub-objects and 3 actions:
        Display
        Memory
        CPU
        Radio
        Applications
    3 actions:
        make a call
        send a text
        run an application.

    These 5 properties can be broken down into their own sub-objects and properties. 

    If we break down the first property 'Display' into its 5 properties we get:
        brightness
        amount of power consumed.
        pixels
        width in cm
        height in cm

    the Display's brightness can be represented with a Primitive, such as a double. 

    The amount of power consumed can also be represented with a Primitive, such as a float or integer (i.e. 250mWa)
    
    The 'pixels' property must be represented with an array of Pixel instances, as the screen has more than 1 row of pixels.
        Arrays have not been discussed and can't be used in this project.
        Instead, we can use an Integer primitive to store the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed (milliwatt-hours)
        Brightness
        width in cm
        height in cm
************************

1) Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10
    example: 
        If #10's first property was 'Engine', then your `Thing 5)` will be `Engine` and 
        you will need to provide 5 properties and 3 member functions of that Engine object in plain English
*/

/*
Thing 1) Can plant
5 properties:
    1) tin amount
    2) raw fish amount
    3) autoclave capacity
    4) cans per day
    5) worker/workhours
3 things it can do:
    1) produce canned fish
    2) load boxes with goods in warehouse
    3) produce bio scrap
 */

/*
Thing 2) SIP provider
5 properties:
    1) supported codecs
    2) number of simultaneous calls
    3) FAX support protocol
    4) price
    5) SLA conditions
3 things it can do:
    1) do calls
    2) charge customer
    3) lease traffic
 */

/*
Thing 3) Cat
5 properties:
    1) number of paws
    2) list of fur colours
    3) gender
    4) age
    5) number of lives
3 things it can do:
    1) eat
    2) sleep
    3) do mew
 */

/*
Thing 4) Spaceship
5 properties:
    1) orbit height
    2) engine type
    3) number of crew 
    4) country of origin
    5) name
3 things it can do:
    1) dock to space station
    2) fly around planets
    3) explore space
 */

/*
Thing 5) DAC
5 properties:
    1) samplerate
    2) bit depth
    3) SNR
    4) amount of power consumed
    5) dynamic range
3 things it can do:
    1) recieve PCM signal
    2) correct errors 
    3) produce analogue signal
 */

/*
Thing 6) power unit
5 properties:
    1) weight
    2) otput voltage
    3) input voltage
    4) output current
    5) operating and storage temperature ranges
3 things it can do:
    1) input power from outlet
    2) convert voltage
    3) protect circuit
 */

/*
Thing 7) VCA
5 properties:
    1) frequency responce
    2) insertion loss
    3) attenuation
    4) price
    5) number of channels
3 things it can do:
    1) attenuate signal
    2) consume power
    3) recieve control signal
 */

/*
Thing 8) headphone amplifier
5 properties:
    1) SNR
    2) output power
    3) output impendance
    4) frequency range
    5) input voltage 
3 things it can do:
    1) input signal
    2) amplify signal
    3) produce noise
 */

/*
Thing 9) body
5 properties:
    1) height
    2) width
    3) depth
    4) colour
    5) material
3 things it can do:
    1) hold internal parts
    2) protect circuit
    3) collect dust
 */

/*
Thing 10) Audio monitor controller
5 properties:
    1) DAC
    2) power unit
    3) VCA
    4) headphone amplifier
    5) body
3 things it can do:
    1) control volume
    2) set input sources
    3) toggle crosfeed effect
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
