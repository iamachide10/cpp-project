
//Dennis Brown
# include "physics.h"
#include <cmath>

//Updates the position of the ball based on it's velocity and deltatime(how much time has passed)
void Physics :: updateBallPosition(Ball& ball, float deltaTime) {
    ball.position.x += ball.velocity.x * deltaTime;
    ball.position.y += ball.velocity.y * deltaTime;
}

//Checks if the ball hits the top or bottom of the screen and if so, bounces it by reversing it's vetical direction)
void Physics :: checkWallCollision(Ball& ball, float screenWidth, float screenHeight) {
    if (ball.position.y - ballradius <= 0 || ball.position.y + ball.radius >= screenHeight) {
        ball.velocity.y *= -1;
    }
}

//Checks if the ball hits a paddle and makes it bounce back, and it also adds a bit of spin based on where on the paddle the ball hits
void Physics ::checkPaddleCollision(Ball& ball, const Paddle& paddle, bool isLeftPaddle) {
    bool collisionX = isLeftPaddle ?
        ball.position.x - ball.radius <= paddle.position.x + paddlewidth :
        ball.position.x + ball.radius >= paddle.position.x;

    bool collisionY = ball.position.y + ball.radius >= paddle.position.y &&
                      ball.position.y - ball.radius <= paddle.position.y + paddle.height;

    if (collisionX && collisionY) {
        ball.velocity.x *= -1;

        // Optional: Add some variation based on where it hits the paddle
        float paddleCenterY = paddle.position.y + paddle.height / 2.0f;
        float impactOffset = (ball.position.y - paddleCenterY) / (paddle.height / 2.0f);
        ball.velocity.y += impactOffset * 50.0f;  // tweak this value to control vertical deflection
    }
}

//Prevents the ball from moving too fast by scaling it's velocity down if it exceeds a given maxSpeed.
void Physics::limitBallSpeed(Ball& ball, float maxSpeed) {
    float speed = std::sqrt(ball.velocity.x * ball.velocity.x + ball.velocity.y * ball.velocity.y);
    if (speed > maxSpeed) {
        ball.velocity.x = (ball.velocity.x / speed) * maxSpeed;
        ball.velocity.y = (ball.velocity.y / speed) * maxSpeed;
    }
}
