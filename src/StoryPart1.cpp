#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <graphics.h>
#include <windows.h>
#include <iomanip>

#define screenWidth GetSystemMetrics(SM_CXSCREEN)
#define screenHeight GetSystemMetrics(SM_CYSCREEN)

using namespace std;

int main()
{
    initwindow(screenWidth+3, screenHeight+1, "",-6,-4);

    //Start from here



    getch();
    closegraph();
    return 0;
}
