 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */

struct Person
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    int distanceTraveled;

    void run( bool startWithLeftFoot, int howFast );
};

struct Limb
{
    int limbLength;
    int extremitySize;

    int stepForward();
    int stepSize();
};

int Limb::stepForward()
{
    int x;
    bool forward = true;
    if( forward == true)
    {
        x = 1;
    }
    else
    {
        x = -1;
    }
    return x;
}

int Limb::stepSize()
{
    int x = ( limbLength + extremitySize ) * stepForward();
    return x;
}

void Person::run( bool startWithLeftFoot, int howFast = 1 )
{
    Limb leftFoot;
    Limb rightFoot;

    if( startWithLeftFoot == true )
    {
        leftFoot.stepForward();
        rightFoot.stepForward();
    }
    else
    {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }
    distanceTraveled += ( leftFoot.stepSize() + rightFoot.stepSize() ) * howFast; // implemented unused variable in example
}


 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */


/*
 1)
 */



struct BoulderProblem
{
    int problemGrade = 3;
    double wallAngle = 30;
    
    struct Hold
    {
        int holdType = 2;
        double holdSize = 0.8; 
    };

    int calculateDifficulty( double ropeLength );

    Hold crimp;
};

int BoulderProblem::calculateDifficulty(double ropeLength)
{
    int difficulty = ( ( problemGrade * crimp.holdType ) / crimp.holdSize ) - ropeLength;
    return difficulty;
}

/*
 2)
 */

struct TopRopeRoute
{
    double wallAngle = 10;
    int moves = 32;

    struct RouteGrade
    {
        double gradeNumber = 5.10;
        char gradeLetter = 100; // ascii letter 'd'
    };

    void buildRoute( double wallAngle, RouteGrade grade );

    RouteGrade hard;
};

/*
 3)
 */

 struct Mountain 
 {
     int height = 15;
     int routes = 20;

    void mountainFeatures( TopRopeRoute face, BoulderProblem base );

    void constructMountain( int height, int routes );
 };

/*
 4)
 */

struct CrackClimb
{
    bool isBoulder = false;
    double crackWidth = 8;
    int rockColor = 2;

    int restPoint( int holdNumber, bool isRoof );
};

/*
 5)
 */

struct Shoe
{
    float shoeSize = 8.5f;
    bool isMale = true;
    bool isBoot = false;
    int rubberType = 3;
    int agressiveness = 1;

    bool shoeFit( float shoeSize, bool isMale, int painTolerance );
};

/*
 6)
 */

struct RockClimber
{
    double experience = 25.87;
    int age = 33;
    int height = 167;
    double strength = 99.28;
    bool isMale = false;
 
    void climb( BoulderProblem blue, TopRopeRoute red, CrackClimb green );
    bool completeCheck ( int difficulty, double experience, double strength );
};

/*
 7)
 */

struct Hiker
{
    RockClimber leader;
    double stamina = 22.45;

    struct Backpack 
    {
        bool water = true;
        bool food = true;
        bool rope = true;
        
        double backpackWeight ( double water, double food, double rope );
    };

    bool hasBackpack = true;
};

/*
 8)
 */

struct Gym
{
    BoulderProblem pink;
    TopRopeRoute orange;
    CrackClimb brown;

    void setClimbs( int climbsCount, int difficultySpread );
};

/*
 9)
 */

struct Exercise
{
    int muscleGroup = 6;
    int difficulty = 3;
    bool useWeight = false;


    void doExercise ( RockClimber trainee, Hiker spotter );
    bool exerciseComplete ( int strength, double stamina );
};

/*
 10)
 */

struct TrainingPlan
{
    Exercise pushUp;
    Exercise pullUp;
    Exercise shoulderPress;
    Exercise deadLift;
    Exercise squat;

    void createPlan( int intensity, int rounds, double restPeriod );
};

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
