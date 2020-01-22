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

struct Pitch
{
    int interval = -12;
    double mod = 2;
    unsigned int simPitches = 3;

    struct Sweep
    {
        bool Port = false;
        float sweepTime = 100;
    };

    void wowFlutter( Sweep sweep);

    Sweep centerPitch;
};

/*
 2)
 */
struct KnobColor //FIXME see readme.md coding style guide about type names
{
    bool scopeIn = false;
    int colorSweep = 100;
    //FIXME 3) add a couple member functions.  
    //FIXME make the function parameter list for those member functions use some of your User-Defined Types
    struct Knurl
    {
        bool apiStyle = false;
        float knurlLevel = 1000;
    };

    void reflectionSpecular(Knurl knurl );
    Knurl userKnurl;
};

/*
 3)
 */
struct FacePlate //FIXME see readme.md coding style guide about type names
{
    bool showBack = false;
    //FIXME 3) add a couple member functions.  
    //FIXME make the function parameter list for those member functions use some of your User-Defined Types

    struct BrushedMetal
    {
        float shininess = 1500;
        float eraAge = 60;
    };

    void homemadeShopmade(BrushedMetal brushedMetal );
    BrushedMetal anodizedBrushedMetal;
};

/*
 4)
 */
struct PowerSwitch //FIXME see readme.md coding style guide about type names
{
    bool active = true;
    //FIXME 3) add a couple member functions.  
    //FIXME make the function parameter list for those member functions use some of your User-Defined Types

    struct SignalPass
    {
        double powerMoose = 1.0;
        float indyMoose = 1.0;
    };

    void upLowLoad(SignalPass signalPass );
    
};

/*
 5)
 */
struct MixLevel //FIXME see readme.md coding style guide about type names
{
    int wetDry = 120;
    float wetLevel = 120;

    struct Shimmer
    {
        bool shimmerActivate = false;
        float shimmerLevel = 100;
    //FIXME 3) add a couple member functions.  
    //FIXME make the function parameter list for those member functions use some of your User-Defined Types
    };

    void Shimmerous(Shimmer setShimmer );
    //FIXME 3) add a couple member functions.  
    //FIXME make the function parameter list for those member functions use some of your User-Defined Types
};

/*
 6)
 */

struct ModeControl //FIXME see readme.md coding style guide about type names
{
    int modeSet = 10;
    char A = 1;
    char B = 2;
    //FIXME 3) add a couple member functions.  
    //FIXME make the function parameter list for those member functions use some of your User-Defined Types

    struct Diffusion
    {
        float scarcity = 100;
        bool scarcityActivation = false;
        double scarcityDepth = 2000;
    };

    void Diftown(Diffusion diffusion );
};

/*
 7)
 */
struct EqControl //FIXME see readme.md coding style guide about type names
{
    bool lpOn = false;
    bool hpOn = false;
    float centerPoint = 100000;
    //FIXME 3) add a couple member functions.  
    //FIXME make the function parameter list for those member functions use some of your User-Defined Types

    struct EQ
    {
        float center = 1000;
        float qShape = 1;
        float amplitude = 0;
    };

    void eek (EQ eq);
};
    
/*
 8)
 */

struct DiffusionPad //FIXME see readme.md coding style guide about type names
{
    float difAmount = 2000;
    double modulationDiffusion = 15000;
    //FIXME 3) add a couple member functions.  
    //FIXME make the function parameter list for those member functions use some of your User-Defined Types

    struct Veiling
    {
        float color = 24;
        float earlyMix = 50;
        float lateMix = 45;
    };

    void Hiding(Veiling veiling );

};

/*
 9)
 */


struct Crush //FIXME see readme.md coding style guide about type names
{
    int crushAmount = 200;
    bool tubeDistort = false;
    //FIXME 3) add a couple member functions.  
    //FIXME make the function parameter list for those member functions use some of your User-Defined Types

    struct Smasher
    {
        float intensity = 100;
        int marshall = 12;
        bool digitalNoise = false;
    };

    void Horrible(Smasher smasher );
   
};
/*
 10)
 */

struct Feedback //FIXME see readme.md coding style guide about type names
{
    bool feedbackOn = false;
    float feedbackAmount = 1000;
    //FIXME 3) add a couple member functions.  
    //FIXME make the function parameter list for those member functions use some of your User-Defined Types

    struct TurnAround
    {
        bool turnaroundActivate = true;
        float feedbackFlow = 199;
    };

    void Scream(TurnAround turnAround);
};

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
