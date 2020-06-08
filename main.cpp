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
