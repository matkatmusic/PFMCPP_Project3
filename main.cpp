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
Thing 1) Laptop
5 properties:
    1) amount of storage
    2) amount of RAM
    3) amount of video memory
    4) CPU speed
    5) number of USB sockets
3 things it can do:
    1) store information
    2) perform calculations
    3) connect to internet
 */

/*
Thing 2)
5 properties: digital piano
    1) number of keys
    2) number of stored effects
    3) number of pedals
    4) number of output sockets
    5) number of EQ sliders
3 things it can do:
    1) Play a tune
    2) connect to laptop
    3) play metronome beat
 */

/*
Thing 3) football team
5 properties:
    1) number of players
    2) market price of players
    3) possession percentage
    4) league position
    5) pass-success percentage
3 things it can do:
    1) pass accurately
    2) score goals
    3) win matches
 */

/*
Thing 4) small business
5 properties:
    1) number of employees
    2) rent paid per annum
    3) price charged per unit sold
    4) cost of materials per unit sold
    5) administration costs per annum
3 things it can do:
    1) produce widgets
    2) pay employees
    3) pay dividends
 */

/*
Thing 5) oscillator
5 properties:
    1) V/Oct input source
    2) default voltage
    3) waveform selection
    4) pulse width percentage
    5) octave selection
3 things it can do:
    1) change note
    2) select between waveforms
    3) switch between octaves
 */

/*
Thing 6) envelope generator
5 properties:
    1) attack control
    2) decay control
    3) sustain control
    4) release control
    5) input gate voltage
3 things it can do:
    1) change attack time
    2) change sustain level
    3) output gate signal
 */

/*
Thing 7) filter
5 properties:
    1) resonance control
    2) drive control
    3) cutoff control
    4) mode selection
    5) cutoff modulation input voltage
3 things it can do:
    1) change drive level
    2) switch between filter modes
    3) modulate cutoff frequency
 */

/*
Thing 8) sequencer
5 properties:
    1) voltage at clock input
    2) sequence length control
    3) input gate voltage
    4) note range control
    5) sequence voltage randomisation
3 things it can do:
    1) change length of sequence
    2) change note range of sequence
    3) randomise notes in sequence
 */

/*
Thing 9) arpeggiator
5 properties:
    1) root note input
    2) chord type selector
    3) arp mode selector
    4) gate input voltage
    5) clock input voltage
3 things it can do:
    1) change chord
    2) change arpeggio note order
    3) output gate signal
 */

/*
Thing 10) synthesizer
5 properties:
    1)  oscillator
    2) envelope generator
    3) filter
    4) sequencer
    5) arpeggiator
3 things it can do:
    1) change note frequency
    2) play random order arpeggio
    3) increase cut off frequency
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
