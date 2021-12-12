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

    //Start from here

    tortoise();

    getch();
    closegraph();
    return 0;
}

void hare()
{

}

void tortoise()
{
    arc(100,550,0,180,50); // tortoise shell
    line(70,510,85,520); // \ top (back)
    line(65,515,80,525); // \ bottom

    line(80,525,70,550); // / left (back)
    line(90,530,80,550); // / right

    line(85,520,115,520); // _ top
    line(90,530,110,530); // _ bottom

    line(115,520,130,510); // / left (front)
    line(120,527,135,515); // \ right

    line(110,530,120,550); // \ left (front)
    line(120,527,130,550); // \ right

    line(50,550,150,550); // horizontal line below shell

    line(60,550,60,560);  // back right leg 1st
    line(68,550,68,558); // back right leg 2nd
    ellipse(68, 563, 140, 95,10, 5); // back right foot

    line(80,550,80,555);  // back left leg 2nd
    line(85,550,85,553); // back left leg 2nd
    ellipse(85, 558, 120, 90, 7, 3); // back left foot

    line(110,550,110,560); // front right leg 1st
    line(118,550,118,558); // front right leg 2nd
    ellipse(118, 563, 140, 95, 10, 5); // front right foot

    line(130,550,130,555);  // back left leg 1st
    line(135,550,135,553); // back left leg 2nd
    ellipse(135, 558, 120, 90, 7, 3); // front left foot

    arc(300,650,129,142,200); // upper neck
    line(150,540,170,520); // lower neck
    arc(178,510,220,110,15); // face
    circle(180,508,3); // eye
    circle(181,508,1); // eyeball
    ellipse(185,515,230,320,5,3);// smile
}
