//My first cpp project
#ifndef SCORE_H
#define SCORE_H
#include <iostream>
using namespace std;

class Score {
//Defines the class named Score that will manage the players' scores
private:
int player1Score;
int player2Score;

public:
Score();
void addPointToPlayer1();
void addPointToPlayer2();

int getPlayer1Score() const;
int getPlayer2Score() const;
//This function returns the current score for each player
void dispalyScore() const;

void reset() const;
void reset(int player1Score, int player2Score);

};
#endif
