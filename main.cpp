/*
 Project 3 - Part 1 / 5
Video:  Chapter 2 Part 5
 User-Defined Types

 Create a branch named Part1
 
 1) write 10 user-defined types, each with a random number of member variables
    try to make the member variables have names that are related to the user-defined type.
 
 2) give the member variables relevant data types
 
 3) add a couple member functions.  
    make the function parameter list for those member functions use some of your User-Defined Types
 
 4) make 2 of the 10 user-defined types be nested class
 
 5) One of your UDTs should only use UDTs for its member variable types.   
     No primitives allowed!
 
 6) After you finish defining each type, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

/*
 example:
 */
struct CarWash            //1) a U.D.T. with a random number of member variables
{
    int numSponges = 3;
    double amountOfSoapUsedPerCar = 2.6; //2) relevant data types
    unsigned int numCarsProcessed = 0;
    
    struct Car                             //4) nested class
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        //2) relevant data types
    };
    
    void washAndWaxCar( Car car );         //3) member function with a user-defined type as the parameter.  The user-defined type parameter happens to be the nested class.
    
    Car myCar;  //5) a member variable whose type is a UDT.
};


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

    void calculateDifficulty( int problemGrade, Hold hold );

    Hold crimp;
};

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
