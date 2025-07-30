 

//Dennis Brown
#ifndef PHYSICS_H
#define PHYSICS_H
//This is a basic structure to represent a 2D vector(pair of x and y values to represent position and velocity)
struct Vector2 {
    float x,y;
};

//This structure represents the ball in the game(Vector2 indicating the position  and the velocity of the ball)
struct Ball {
    Vector2 position;
    Vector2 velocity;
    float radius;
};

//Defines the dimesions of the paddle
struct Paddle {
    Vector2 position;
    float width;
    float height;
};

//Groups static functions related to physics -like movement and colliision detection into one place
class Physics {
public:
    static void updateBallPosition(Ball& ball, float deltaTime);
    static void checkWallCollision(Ball& ball, float screenWidth, float screenHeight);
    static void checkPaddleCollision(Ball&, ball, const Paddle& paddle, bool isLeftPaddle);
    static void limitBallSpeed(Ball& ball, float maxSpeed);
};

#endif
