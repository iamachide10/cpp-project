#include "ball.h"
// for rand()
#include <cstdlib>
     //setting the size of the field
Ball::Ball(int w, int h) : width(w), height(h) {
    reset();
}

void Ball::reset() {
    x = width / 2;
    y = height / 2;

    // Random direction
    dx = (rand() % 2 == 0) ? 1 : -1;
    dy = (rand() % 2 == 0) ? 1 : -1;
}
     //direction of movement
void Ball::update() {
    x += dx;
    y += dy;

    // Bounce off top or bottom wall
    if (y <= 0 || y >= height - 1) {
        bounceVertical();
    }
}
     //calling the ball to bounce vertically
void Ball::bounceVertical() {
    dy = -dy;
}
     //calling the ball to bounce horizontally
void Ball::bounceHorizontal() {
    dx = -dx;
}
     //checking to see if the ball is out the left
bool Ball::isOutLeft() const {
    return x <= 0;
}
    //checking to see if the ball is out right
bool Ball::isOutRight() const {
    return x >= width - 1;
}
    //get current position of the ball x
int Ball::getX() const {
    return x;
}
    // get current position of the ball y
int Ball::getY() const {
    return y;
}



