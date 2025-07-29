#ifndef PADDLE_H
#define PADDLE_H

class Paddle{
private:
// Paddle position (x is fixed, y is vertical)
    int x, y;
// Paddle height
    int height;
//Total Height of the game area
    int screenHeight;

public:
  Paddle(int startX, int startY, int height, int screenHeight);

  void moveup();
  void movedown();
  void draw() const;
  int  getX()  const;
  int  getY()  const;
  int  getHeight() const;

};

#endif




