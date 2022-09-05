#ifndef LUDOPLAYER_H
#define LUDOPLAYER_H
#include<cstring>
#include<iostream>
using namespace std;

class LudoPlayer{

int tokan1,tokan2;
int color1,color2;
int x1,y1;
public:
LudoPlayer();

void setcolor(int c);
int getcolor();
int getx1();

int gety1();

void update1(LudoPlayer &m);


int rollDice(LudoPlayer &m,int k);
void checkPosition(LudoPlayer &m1,LudoPlayer &m2);
void displayActiveToken(LudoPlayer &m1);
void displayAllTokens(LudoPlayer &m1,LudoPlayer &m2);
~LudoPlayer();
} ;
#endif
