 #include "paddle.h"
 #include  <iostream>

Paddle::Paddle(int startX, int startY, int h, int sHeight)
     :x(startX), y(startY), height(h), sHeight(sHeight) {}

void Paddle::moveup() {
    if (y > 0) y--;
}

void Paddle::moveup()  {
 if (y > 0) y--;
}

void Paddle::movedown() {
    if (y + height < scrennHeight) y++;
}

void Paddle::draw() const  {
    for (int i = 0; i < height; ++i)  {

      std::cout << "\033["  << (y +i +1) << ";" <<(x+1) << "H|";
     }
}
 int Paddle::getX()  const  {return x;}
 int Paddle::getY()  const  {return y;}
 int Paddle::getHeight() const  {return height;}

