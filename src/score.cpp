//My first cpp project
#include "score.h"
#using namespace std;

Score::Score() : player1score(0), player2score(0){}
//It initializes both scores to 0 when the game starts or when a new Score is created
void score():: addPointToPlayer1(){
 player1score++;
}
//It increases Player 1's score by 1
void Score():: addPointToPlayer2(){
player2score++;
}
//It increases Player 2's score by 1
int Score():: getPointToPlayer1() const {
return player1score;
}
//It returns the current score of Player 1
int Score():: getPointToPlayer2() const {
return player2score;
}
//It returns the current score of Player 2
void Score::displayScore() const {
cout << "Player 1: " << player1score << "|Player 2: " << player2score << endl;
}
//It outputs the current scores to the terminal in a readable format
void Score:: reset(){
player1Score = 0;
player2Score = 0;
}
//It sets both scores back to zero