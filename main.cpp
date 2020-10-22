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
Thing 1) shoe
5 properties:
    1) brand 
    2) size
    3) color
    4) condition
    5) securing method
3 things it can do:
    1) be put on
    2) be taken off
    3) be thrown away
 */

/*
Thing 2) Wurlitzer
5 properties:
    1) volume level
    2) vibrato amount
    3) model
    4) condition
    5) number of keys
3 things it can do:
    1) change volume 
    2) be played
    3) turn on or off
 */

/*
Thing 3) electric bass
5 properties:
    1) number of strings
    2) type of pickups
    3) brand
    4) model 
    5) age 
3 things it can do:
    1) be played
    2) be sold
    3) be restrung
 */

/*
Thing 4) city
5 properties:
    1) population 
    2) size
    3) GDP
    4) average age
    5) country
3 things it can do:
    1) vote
    2) be afected by natural disaster
    3) build public transportation
 */

/*
Thing 5) bedroom
5 properties:
    1) ocupants name
    2) size of bed
    3) floor material 
    4) floor space in square ft
    5) time since was last cleaned
3 things it can do:
    1) be slept in
    2) be cleaned
    3) be rearranged
 */

/*
Thing 6) kitchen
5 properties:
    1) number of cabinets
    2) list of cooking utilities
    3) number of dirty dishes
    4) capacity of fridge
    5) floor space in square ft
3 things it can do:
    1) be cooked in
    2) fridge stocked up 
    3) be cleaned
 */

/*
Thing 7) bathroom
5 properties:
    1) mirror size
    2) number of sinks
    3) number of items on counter
    4) time since was last cleaned
    5) floor space in square ft
3 things it can do:
    1) shower used
    2) toilet used
    3) be cleaned
 */

/*
Thing 8) living room
5 properties:
    1) number of sitting places
    2) size of television
    3) number of windows
    4) color of walls
    5) floor space in square ft
3 things it can do:
    1) tv used 
    2) be painted
    3) furniture rearanged
 */

/*
Thing 9) garage
5 properties:
    1) number of car spots
    2) amount of doors
    3) amount of windows
    4) number of items of storage inside
    5) floor space in square ft
3 things it can do:
    1) car can be parked inside
    2) door can open 
    3) used for alternative uses 
 */

/*
Thing 10) House
5 properties:
    1) bedroom
    2) kitchen
    3) bathroom
    4) living Room
    5) garage
3 things it can do:
    1) add room
    2) be sold
    3) be demolished
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
