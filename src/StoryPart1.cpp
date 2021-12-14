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


    // 1ST TREE
    line(100,200,100,150);
    line(130,200,130,150);
    line(100,200,130,200);
    line(70,150,160,150);
    line(70,150,80,125);
    line(160,150,150,125);
    line(60,125,80,125);
    line(150,125,170,125);
    line(60,125,90,90);
    line(170,125,140,90);
    line(90,90,80,90);
    line(140,90,150,90);
    line(80,90,115,50);
    line(150,90,115,50);

    line(100,200,100,150);
    line(130,200,130,150);
    line(100,200,130,200);
    line(70,150,160,150);
    line(70,150,80,125);
    line(160,150,150,125);
    line(60,125,80,125);
    line(150,125,170,125);
    line(60,125,90,90);
    line(170,125,140,90);
    line(90,90,80,90);
    line(140,90,150,90);
    line(80,90,115,50);
    line(150,90,115,50);
    //1 SMALL TREE
    line(230,200,230,175);
    line(250,200,250,175);
    line(230,175,220,175);
    line(250,175,260,175);
    line(220,175,230,150);
    line(260,175,250,150);
    line(230,150,225,150);
    line(250,150,255,150);
    line(225,150,240,120);
    line(255,150,240,120);
    line(230,200,250,200);
    line(230,175,250,175);
    //2ND BIG TREE
    line(350,200,350,150);
    line(380,200,380,150);
    line(320,150,410,150);
    line(320,150,330,125);
    line(410,150,400,125);
    line(330,125,310,125);
    line(400,125,420,125);
    line(310,125,340,90);
    line(420,125,390,90);
    line(340,90,330,90);
    line(390,90,400,90);
    line(330,90,365,50);
    line(400,90,365,50);
    line(350,200,380,200);
    // 2ND SMALL TREE
    line(480,200,480,175);
    line(495,200,495,175);
    line(470,175,505,175);
    line(480,200,495,200);
    line(470,175,475,150);
    line(505,175,500,150);
    line(475,150,470,150);
    line(500,150,505,150);
    line(470,150,488.5,120);
    line(505,150,488.5,120);

    //BIG MAIN TREE
    line(670,230,670,180);
    line(730,230,730,180);
    line(630,180,770,180);
    line(630,180,650,150);
    line(770,180,750,150);
    line(650,150,615,150);
    line(750,150,785,150);
    line(615,150,655,110);
    line(785,150,745,110);
    line(655,110,645,110);
    line(745,110,755,110);
    line(645,110,665,85);
    line(755,110,735,85);
    line(665,85,655,85);
    line(735,85,745,85);
    line(655,85,700,35);
    line(745,85,700,35);
    line(670,230,730,230);

    //3rd small tree

    line(880,200,880,175);
    line(895,200,895,175);
    line(870,175,905,175);
    line(870,175,875,150);
    line(905,175,900,150);
    line(875,150,870,150);
    line(900,150,905,150);
    line(870,150,887.5,120);
    line(905,150,887.5,120);
    line(880,200,895,200);

    //4th big tree
    line(990,200,990,150);
    line(1020,200,1020,150);
    line(960,150,1050,150);
    line(960,150,970,125);
    line(1050,150,1040,125);
    line(970,125,950,125);
    line(1040,125,1060,125);
    line(950,125,980,90);
    line(1060,125,1030,90);
    line(980,90,970,90);
    line(1030,90,1040,90);
    line(970,90,1005,50);
    line(1040,90,1005,50);
    line(990,200,1020,200);

    //4th small zaad
    line(1120,200,1120,175);
    line(1135,200,1135,175);
    line(1110,175,1145,175);
    line(1110,175,1115,150);
    line(1145,175,1140,150);
    line(1115,150,1110,150);
    line(1140,150,1145,150);
    line(1110,150,1127.5,120);
    line(1145,150,1127.5,120);
    line(1120,200,1135,200);

    line(1240,200,1240,150);
    line(1270,200,1270,150);
    line(1210,150,1300,150);
    line(1210,150,1220,125);
    line(1300,150,1290,125);
    line(1220,125,1200,125);
    line(1290,125,1310,125);
    line(1200,125,1230,90);
    line(1310,125,1280,90);
    line(1230,90,1220,90);
    line(1280,90,1290,90);
    line(1220,90,1255,50);
    line(1290,90,1255,50);
    line(1240,200,1270,200);


    line(0, 220,screenWidth,220); //Horizontal line trees above this the trees will be placed
    line(200,250,200,700); //START line
    hare();
    tortoise();


    line(1100,250,1100,700); //END line
    getch();
    closegraph();
    return 0;
}

void hare()
{
    setcolor(DARKGRAY);
    ellipse(170, 365,355,200,5,18);//left ears
    ellipse(175, 365, 335,140,5,18);//right ears
    circle(175,385,3);//eye
    ellipse(172,390, 350,340,15,20);//head
    ellipse(182,395, 260,70,13,7);// nose
    ellipse(192,395,110,200,3,3);//mouth

    ellipse(65, 408,50,320,25,5);//tail

    ellipse(130, 410,55,170,50,30);//upper body
    ellipse(130, 410, 180,10,50,30);//lower body

    ellipse(160, 435, 330,305,5,20);// right hand
    ellipse(167, 450, 145,115,10,6);//right palm

    ellipse(175, 432, 340,290,5,10);//left hand
    ellipse(182, 440, 180, 120,10,5);// left palm

    ellipse(102, 440, 340,300,5,15);//right back leg
    ellipse(108, 450, 180,120,10,5);//right back foot

    ellipse(120, 443, 340,280,5,6);//left back leg
    ellipse(125, 448, 180,130,7,4);// left back foot

    floodfill(140,410,DARKGRAY); // CLEAR body and tail
    floodfill(170,400,DARKGRAY);  // CLEAR face and nose
    floodfill(170,360,DARKGRAY); // CLEAR both ears

    floodfill(102,440,DARKGRAY); //CLEAR right leg and foot
    floodfill(120, 443,DARKGRAY);//CLEAR left leg and foot

    floodfill(102,430,DARKGRAY); //CLEAR right leg joint
    floodfill(160,423,DARKGRAY);// CLEAR right hand joint

    floodfill(167,450,DARKGRAY);//CLEAR right hand and palm
    floodfill(175, 428,DARKGRAY); //CLEAR left hand and palm

    setcolor(WHITE);
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
