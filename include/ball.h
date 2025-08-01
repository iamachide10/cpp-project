#ifndef BALL_H
#define BALL_H

class Ball {

private:
    //current position
int x, y;
    //direction of movement
int width, height;
    //game field dimention
int width, height;

public:
    //constuctor
Ball(int width, int height);
     //reset the ball to center
void reset();
      //move the ball
void update();
     //bounce off top/bottom
void bounceVertical();
     //bounce off paddles
void bounceHorizontal();

   //check if the ball is out left
bool isOutLeft() const;
     //check if the ball is out right
bool isOutRight() const;

       //get current x
int getX() const;
       //get current y
int getY() const;

}
#endif
