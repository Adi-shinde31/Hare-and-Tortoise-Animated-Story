#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <graphics.h>
#include <windows.h>
#include <iomanip>

#define screenWidth GetSystemMetrics(SM_CXSCREEN)
#define screenHeight GetSystemMetrics(SM_CYSCREEN)

using namespace std;

void hare();
void tortoise();

int main()
{
    initwindow(screenWidth+3, screenHeight+1, "",-6,-4);

    line(0, 220,screenWidth,220); //Horizontal line trees above this the trees will be placed
    line(200,250,200,700); //START line
    tortoise();
    hare();



    line(1100,250,1100,700); //END line
    getch();
    closegraph();
    return 0;
}

void hare()
{
    ellipse(120,400,0,360,80,50);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(125,403,WHITE);
}

void tortoise()
{
    arc(100,550,0,180,50); // tortoise shell
    line(50,550,150,550); // horizontal line below shell

    setfillstyle(SOLID_FILL,BROWN);
    line(70,510,85,520); // \ top (back)
    line(85,520,115,520); // _ top
    line(115,520,130,510); // / left (front)
    floodfill(90,515,WHITE);

    line(65,515,80,525); // \ bottom
    line(80,525,70,550); // / left (back)
    floodfill(70,530,WHITE);

    line(90,530,80,550); // / right
    line(90,530,110,530); // _ bottom
    line(110,530,120,550); // \ left (front)
    floodfill(100,540,WHITE);

    line(120,527,135,515); // \ right
    line(120,527,130,550); // \ right
    floodfill(130,530,WHITE);

    setfillstyle(SOLID_FILL,8);
    floodfill(85,525,WHITE); // Dark Gray part of the shell

    setfillstyle(SOLID_FILL,2);
    line(60,550,60,560);  // back right leg 1st
    line(68,550,68,558); // back right leg 2nd
    ellipse(68, 563, 130, 100,10, 5); // back right foot
    floodfill(65,563,WHITE);

    line(80,550,80,555);  // back left leg 2nd
    line(85,550,85,554); // back left leg 2nd
    ellipse(85, 558, 120, 90, 7, 3); // back left foot
    floodfill(86,557,WHITE);

    line(110,550,110,560); // front right leg 1st
    line(118,550,118,558); // front right leg 2nd
    ellipse(118, 563, 140, 95, 10, 5); // front right foot
    floodfill(118,560,WHITE);

    line(130,550,130,555);  // back left leg 1st
    line(135,550,135,555); // back left leg 2nd
    ellipse(135, 558, 120, 90, 7, 3); // front left foot
    floodfill(135,558,WHITE);

    arc(295,660,125,140,200); // upper neck
    line(146,544,170,520); // lower neck

    arc(178,510,230,85,15); // face
    circle(180,508,3); // eye
    setfillstyle(SOLID_FILL,2);
    floodfill(160,520,WHITE);

    ellipse(185,515,230,320,5,3);// smile

}
