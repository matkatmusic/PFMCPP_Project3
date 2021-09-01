/*
Project 3 - Part 1a / 5
Video:  Chapter 2 Part 5
User-Defined Types

Create a branch named Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps, all on the same branch
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************




1) Look at the picture of the car interior (Part1a pic.jpg).  
    Fill in the blanks below which break this car interior down into sub-objects.

    Several sub-objects are listed below that make up this car's interior.
        you're going to name several things that you'll find on each subobject
        you're going to name several things that each subobject can do.
        If you've seen "Family Feud", we are going to do what they do in that show

        A few blanks are filled in for you already.

Main Object: Car Interior
Sub Object 1: Steering Wheel
    Name 4 things you'll find on the:    Steering Wheel
        1) paddle shifters
        2) 'cruise control' controls
        3)  music controls
        4)  horn
    Name 2 things you can do with the:   Steering Wheel
        1) adjust cruise control settings.
        2) adjust music volume
        
Sub Object 2: Instrument Cluster
    Name 4 things you'll find on the:   Instrument Cluster
        1) speedometer
        2) milage 
        3) fuel gauge 
        4) warning signs
    Name 3 things you can do with the:   Instrument Cluster
        1)inidicate
        2)window wipe
        3)spray liquid
    
Sub Object 3: 
    Name 3 things you'll find on the :   Environment Controls
        1) Air Cooler Control
        2) Radio Contols
        3) Hazard Lights Control
    Name 3 things you can do with the:  Environment Controls
        1) Adjust or Turn on/off the Air Cooler 
        2)  Turn on/off the Air Cooler 
        3) Turn on/off the hazard lights 

Sub Object 4: 
    Name 3 things you'll find on the: Infotainment System  
        1) Sat Nav
        2) Emails
        3) Videos
    Name 3 things you can do with the: Infotainment System 
        1) Set a route on the Sat Nav
        2) Send an email
        3) Play a film 

Sub Object 5: 
    Name 3 things you'll find on the: Seat 
        1) Seat headrest mechanism
        2) Seat back postition adjustment
        3) Seat bottom position adjustment
    Name 2 things you can do with the: Seat  
        1)Adjust the headrest
        2)Adjust the back position 
*/

struct dog
{
int Age;
float breedNumber;
bool male;
unsigned char dogTrainingGrade;

void run (int howFast, bool startWithLeftPaw);
void rollover (int howMany, bool clockwise);
};





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
