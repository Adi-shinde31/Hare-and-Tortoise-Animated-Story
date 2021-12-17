#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <graphics.h>
#include <windows.h>
#include <iomanip>
#define screenWidth GetSystemMetrics(SM_CXSCREEN)
#define screenHeight GetSystemMetrics(SM_CYSCREEN)
using namespace std;
void trees();
int main()
{
    initwindow(screenWidth+3, screenHeight+1, "",-6,-4);

    line(200,250,200,700); //START line
    line(1100,250,1100,700); //END line
    trees();
    int Ax=730;

//HARE
    int h1=170,h2=175,h3=175,h4=172,h5=185,h6=192,h7=65,h8=130,h9=130,h10=160;
    int h11=167,h12=175,h13=182,h14=102,h15=108,h16=120,h17=125;
    int hf1=140,hf2=170,hf3=170,hf4=102,hf5=120,hf6=102,hf7=160,hf8=167,hf9=175;

//TORTOISE
    int T1=100,T2=50,T3=150,T4=70,T5=85,T6=85,T7=115,T8=115,T9=130,T10=90,T11=65;
    int T12=80,T13=80,T14=70,T15=70,T16=90,T17=80,T18=90,T19=110,T20=110,T21=120;
    int T22=100,T23=120,T24=135,T25=120,T26=130,T27=130,T28=85,T29=60,T30=60;
    int T31=68,T32=68,T33=68,T34=65,T35=80,T36=80,T37=85,T38=85,T39=85,T40=86;
    int T41=110,T42=110,T43=118,T44=118,T45=118,T46=118,T47=130,T48=130,T49=135;
    int T50=135,T51=135,T52=135,T53=295,T54=146,T55=170,T56=178,T57=180,T58=160;
    int T59=185;


    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL,WHITE);
    ellipse(h1, 365,355,200,5,18);//left ears
    ellipse(h2, 365, 335,140,5,18);//right ears
    circle(h3,385,3);//eye
    ellipse(h4,390, 350,340,15,20);//head
    ellipse(h5,395, 260,80,13,7);// nose
    ellipse(h6,395,110,200,3,3);//mouth
    ellipse(h7, 408,50,320,25,5);//tail
    ellipse(h8, 410,55,170,50,30);//upper body
    ellipse(h9, 410, 180,10,50,30);//lower body
    ellipse(h10, 435, 330,305,5,20);// right hand
    ellipse(h11, 450, 145,115,10,6);//right palm
    ellipse(h12, 432, 340,290,5,10);//left hand
    ellipse(h13, 440, 180, 120,10,5);// left palm
    ellipse(h14, 440, 340,300,5,15);//right back leg
    ellipse(h15, 450, 180,120,10,5);//right back foot
    ellipse(h16, 443, 340,280,5,6);//left back leg
    ellipse(h17, 448, 180,130,7,4);// left back foot
    floodfill(hf1,410,DARKGRAY); // CLEAR body and tail
    floodfill(hf2,400,DARKGRAY);  // CLEAR face and nose
    floodfill(hf3,360,DARKGRAY); // CLEAR both ears
    floodfill(hf4,440,DARKGRAY); //CLEAR right leg and foot
    floodfill(hf5, 443,DARKGRAY);//CLEAR left leg and foot
    floodfill(hf6,430,DARKGRAY); //CLEAR right leg joint
    floodfill(hf7,423,DARKGRAY);// CLEAR right hand joint
    floodfill(hf8,450,DARKGRAY);//CLEAR right hand and palm
    floodfill(hf9, 428,DARKGRAY); //CLEAR left hand and palm
    setcolor(WHITE);


    arc(T1,550,0,180,50); // tortoise shell
    line(T2,550,T3,550); // horizontal line below shell
    setfillstyle(SOLID_FILL,BROWN);
    line(T4,510,T5,520); // \ top (back)
    line(T6,520,T7,520); // _ top
    line(T8,520,T9,510); // / left (front)
    floodfill(T10,515,WHITE);
    line(T11,515,T12,525); // \ bottom
    line(T13,525,T14,550); // / left (back)
    floodfill(T15,530,WHITE);
    line(T16,530,T17,550); // / right
    line(T18,530,T19,530); // _ bottom
    line(T20,530,T21,550); // \ left (front)
    floodfill(T22,540,WHITE);
    line(T23,527,T24,515); // \ right
    line(T25,527,T26,550); // \ right
    floodfill(T27,530,WHITE);
    setfillstyle(SOLID_FILL,8);
    floodfill(T28,525,WHITE); // Dark Gray part of the shell
    setfillstyle(SOLID_FILL,2);
    line(T29,550,T30,560);  // back right leg 1st
    line(T31,550,T32,558); // back right leg 2nd
    ellipse(T33, 563, 130, 100,10, 5); // back right foot
    floodfill(T34,563,WHITE);
    line(T35,550,T36,555);  // back left leg 2nd
    line(T37,550,T38,554); // back left leg 2nd
    ellipse(T39, 558, 120, 90, 7, 3); // back left foot
    floodfill(T40,557,WHITE);
    line(T41,550,T42,560); // front right leg 1st
    line(T43,550,T44,558); // front right leg 2nd
    ellipse(T45, 563, 140, 95, 10, 5); // front right foot
    floodfill(T46,560,WHITE);
    line(T47,550,T48,555);  // back left leg 1st
    line(T49,550,T50,555); // back left leg 2nd
    ellipse(T51, 558, 120, 90, 7, 3); // front left foot
    floodfill(T52,558,WHITE);
    arc(T53,660,125,140,200); // upper neck
    line(T54,544,T55,520); // lower neck
    arc(T56,510,230,85,15); // face
    circle(T57,508,3); // eye
    setfillstyle(SOLID_FILL,2);
    floodfill(T58,520,WHITE);
    ellipse(T59,515,230,320,5,3);// smile


    while(1)
    {
        cleardevice();

        line(200,250,200,700); //START line
        trees();
        line(1100,250,1100,700); //END line

        arc(T1++,550,0,180,50); // tortoise shell
        line(T2++,550,T3++,550); // horizontal line below shell
        setfillstyle(SOLID_FILL,BROWN);
        line(T4++,510,T5++,520); // \ top (back)
        line(T6++,520,T7++,520); // _ top
        line(T8++,520,T9++,510); // / left (front)
        floodfill(T10++,515,WHITE);
        line(T11++,515,T12++,525); // \ bottom
        line(T13++,525,T14++,550); // / left (back)
        floodfill(T15++,530,WHITE);
        line(T16++,530,T17++,550); // / right
        line(T18++,530,T19++,530); // _ bottom
        line(T20++,530,T21++,550); // \ left (front)
        floodfill(T22++,540,WHITE);
        line(T23++,527,T24++,515); // \ right
        line(T25++,527,T26++,550); // \ right
        floodfill(T27++,530,WHITE);
        setfillstyle(SOLID_FILL,8);
        floodfill(T28++,525,WHITE); // Dark Gray part of the shell
        setfillstyle(SOLID_FILL,2);
        line(T29++,550,T30++,560);  // back right leg 1st
        line(T31++,550,T32++,558); // back right leg 2nd
        ellipse(T33++, 563, 130, 100,10, 5); // back right foot
        floodfill(T34++,563,WHITE);
        line(T35++,550,T36++,555);  // back left leg 2nd
        line(T37++,550,T38++,554); // back left leg 2nd
        ellipse(T39++, 558, 120, 90, 7, 3); // back left foot
        floodfill(T40++,557,WHITE);
        line(T41++,550,T42++,560); // front right leg 1st
        line(T43++,550,T44++,558); // front right leg 2nd
        ellipse(T45++, 563, 140, 95, 10, 5); // front right foot
        floodfill(T46++,560,WHITE);
        line(T47++,550,T48++,555);  // back left leg 1st
        line(T49++,550,T50++,555); // back left leg 2nd
        ellipse(T51++, 558, 120, 90, 7, 3); // front left foot
        floodfill(T52++,558,WHITE);
        arc(T53++,660,125,140,200); // upper neck
        line(T54++,544,T55++,520); // lower neck
        arc(T56++,510,230,85,15); // face
        circle(T57++,508,3); // eye
        setfillstyle(SOLID_FILL,2);
        floodfill(T58++,520,WHITE);
        ellipse(T59++,515,230,320,5,3);// smile

        if(h5 != Ax)
        {
            delay(5);
            setfillstyle(SOLID_FILL,WHITE);
            setcolor(DARKGRAY);
            setfillstyle(SOLID_FILL,WHITE);
            ellipse(h1++, 365,355,200,5,18);//left ears
            ellipse(h2++, 365, 335,140,5,18);//right ears
            circle(h3++,385,3);//eye
            ellipse(h4++,390, 350,340,15,20);//head
            ellipse(h5++,395, 260,80,13,7);// nose
            ellipse(h6++,395,110,200,3,3);//mouth
            ellipse(h7++, 408,50,320,25,5);//tail
            ellipse(h8++, 410,55,170,50,30);//upper body
            ellipse(h9++, 410, 180,10,50,30);//lower body
            ellipse(h10++, 435, 330,305,5,20);// right hand
            ellipse(h11++, 450, 145,115,10,6);//right palm
            ellipse(h12++, 432, 340,290,5,10);//left hand
            ellipse(h13++, 440, 180, 120,10,5);// left palm
            ellipse(h14++, 440, 340,300,5,15);//right back leg
            ellipse(h15++, 450, 180,120,10,5);//right back foot
            ellipse(h16++, 443, 340,280,5,6);//left back leg
            ellipse(h17++, 448, 180,130,7,4);// left back foot
            floodfill(hf1++,410,DARKGRAY); // CLEAR body and tail
            floodfill(hf2++,400,DARKGRAY);  // CLEAR face and nose
            floodfill(hf3++,360,DARKGRAY); // CLEAR both ears
            floodfill(hf4++,440,DARKGRAY); //CLEAR right leg and foot
            floodfill(hf5++, 443,DARKGRAY);//CLEAR left leg and foot
            floodfill(hf6++,430,DARKGRAY); //CLEAR right leg joint
            floodfill(hf7++,423,DARKGRAY);// CLEAR right hand joint
            floodfill(hf8++,450,DARKGRAY);//CLEAR right hand and palm
            floodfill(hf9++, 428,DARKGRAY); //CLEAR left hand and palm
            setcolor(WHITE);
        }
//        hare
        setfillstyle(SOLID_FILL,WHITE);
        setcolor(DARKGRAY);
        ellipse(h1, 365,355,200,5,18);//left ears
        ellipse(h2, 365, 335,140,5,18);//right ears
        circle(h3,385,3);//eye
        ellipse(h4,390, 350,340,15,20);//head
        ellipse(h5,395, 260,80,13,7);// nose
        ellipse(h6,395,110,200,3,3);//mouth
        ellipse(h7, 408,50,320,25,5);//tail
        ellipse(h8, 410,55,170,50,30);//upper body
        ellipse(h9, 410, 180,10,50,30);//lower body
        ellipse(h10, 435, 330,305,5,20);// right hand
        ellipse(h11, 450, 145,115,10,6);//right palm
        ellipse(h12, 432, 340,290,5,10);//left hand
        ellipse(h13, 440, 180, 120,10,5);// left palm
        ellipse(h14, 440, 340,300,5,15);//right back leg
        ellipse(h15, 450, 180,120,10,5);//right back foot
        ellipse(h16, 443, 340,280,5,6);//left back leg
        ellipse(h17, 448, 180,130,7,4);// left back foot
        floodfill(hf1,410,DARKGRAY); // CLEAR body and tail
        floodfill(hf2,400,DARKGRAY);  // CLEAR face and nose
        floodfill(hf3,360,DARKGRAY); // CLEAR both ears
        floodfill(hf4,440,DARKGRAY); //CLEAR right leg and foot
        floodfill(hf5, 443,DARKGRAY);//CLEAR left leg and foot
        floodfill(hf6,430,DARKGRAY); //CLEAR right leg joint
        floodfill(hf7,423,DARKGRAY);// CLEAR right hand joint
        floodfill(hf8,450,DARKGRAY);//CLEAR right hand and palm
        floodfill(hf9, 428,DARKGRAY); //CLEAR left hand and palm
        setcolor(WHITE);

        if(h5<=Ax && T56 <= 960)
        {
            line(750,415,750,405);
            circle(750,420,10);
            setfillstyle(SOLID_FILL,RED);
            floodfill(750,421,WHITE);
        }

        if(h5 >= Ax && T56 == 960)
        {
            delay(5);
            setcolor(DARKGRAY);
            setfillstyle(SOLID_FILL,WHITE);
            ellipse(h1++, 365,355,200,5,18);//left ears
            ellipse(h2++, 365, 335,140,5,18);//right ears
            circle(h3++,385,3);//eye
            ellipse(h4++,390, 350,340,15,20);//head
            ellipse(h5++,395, 260,80,13,7);// nose
            ellipse(h6++,395,110,200,3,3);//mouth
            ellipse(h7++, 408,50,320,25,5);//tail
            ellipse(h8++, 410,55,170,50,30);//upper body
            ellipse(h9++, 410, 180,10,50,30);//lower body
            ellipse(h10++, 435, 330,305,5,20);// right hand
            ellipse(h11++, 450, 145,115,10,6);//right palm
            ellipse(h12++, 432, 340,290,5,10);//left hand
            ellipse(h13++, 440, 180, 120,10,5);// left palm
            ellipse(h14++, 440, 340,300,5,15);//right back leg
            ellipse(h15++, 450, 180,120,10,5);//right back foot
            ellipse(h16++, 443, 340,280,5,6);//left back leg
            ellipse(h17++, 448, 180,130,7,4);// left back foot
            floodfill(hf1++,410,DARKGRAY); // CLEAR body and tail
            floodfill(hf2++,400,DARKGRAY);  // CLEAR face and nose
            floodfill(hf3++,360,DARKGRAY); // CLEAR both ears
            floodfill(hf4++,440,DARKGRAY); //CLEAR right leg and foot
            floodfill(hf5++, 443,DARKGRAY);//CLEAR left leg and foot
            floodfill(hf6++,430,DARKGRAY); //CLEAR right leg joint
            floodfill(hf7++,423,DARKGRAY);// CLEAR right hand joint
            floodfill(hf8++,450,DARKGRAY);//CLEAR right hand and palm
            floodfill(hf9++, 428,DARKGRAY); //CLEAR left hand and palm
            setcolor(WHITE);
        }
        if(T56 >= 1260)
        {
            break;
        }
    }




    getch();
    closegraph();
    return 0;
}
void trees()
{
    // 1ST TREE
    setfillstyle(SOLID_FILL,BROWN);
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
    line(80,90,115,40);
    line(150,90,115,40);
    floodfill(118,180,WHITE);
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
    line(80,90,115,40);
    line(150,90,115,40);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(120,120,WHITE);


    //1 SMALL TREE
    setfillstyle(SOLID_FILL,BROWN);
    line(230,200,230,176);
    line(250,200,250,176);
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
    floodfill(238,180,WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(240,130,WHITE);


    //2ND BIG TREE
    setfillstyle(SOLID_FILL,BROWN);
    line(350,200,350,150);
    line(380,200,380,150);
    line(320,150,410,150);
    line(350,200,380,200);
    floodfill(368,180,WHITE);
    line(320,150,410,150);
    line(320,150,330,125);
    line(410,150,400,125);
    line(330,125,310,125);
    line(400,125,420,125);
    line(310,125,340,90);
    line(420,125,390,90);
    line(340,90,330,90);
    line(390,90,400,90);
    line(330,90,365,40);
    line(400,90,365,40);
    line(350,200,380,200);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(360,120,WHITE);


    // 2ND SMALL TREE
    setfillstyle(SOLID_FILL,BROWN);
    line(480,200,480,175);
    line(495,200,495,175);
    line(470,175,505,175);
    line(480,200,495,200);
    floodfill(488,190,WHITE);
    line(470,175,505,175);
    line(470,175,475,150);
    line(505,175,500,150);
    line(475,150,470,150);
    line(500,150,505,150);
    line(470,150,488.5,120);
    line(505,150,488.5,120);
    line(480,200,495,200);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(488,130,WHITE);

    //BIG MAIN TREE
    setfillstyle(SOLID_FILL,BROWN);
    line(670,230,670,180);
    line(730,230,730,180);
    line(630,180,770,180);
    line(670,230,730,230);
    floodfill(700,190,WHITE);
    line(630,180,770,180);
    line(630,180,650,150);
    line(770,180,750,150);
    line(650,150,615,150);
    line(750,150,785,150);
    line(615,150,655,110);
    line(785,150,745,110);
    line(655,110,645,110);
    line(745,110,755,110);
    line(645,110,665,82);
    line(755,110,735,85);
    line(665,85,653,85);
    line(735,85,745,85);
    line(653,85,700,25);
    line(745,85,700,25);
    line(670,230,730,230);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(700,120,WHITE);


    //3rd small tree
    setfillstyle(SOLID_FILL,BROWN);
    line(880,200,880,175);
    line(895,200,895,175);
    line(878,199,897,199);
    line(870,176,905,176);
    floodfill(888,180,WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    line(870,176,905,176);
    line(870,175,875,150);
    line(905,175,900,150);
    line(875,150,870,150);
    line(900,150,905,150);
    line(870,150,887.5,120);
    line(905,150,887.5,120);
    floodfill(875,155,WHITE);
    putpixel(885,160,RED);


    //4th big tree
    setfillstyle(SOLID_FILL,BROWN);
    line(990,202,990,150);
    line(1020,202,1020,150);
    line(960,150,1050,150);
    line(988,201,1022,201);
    floodfill(1005,160,WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    line(960,151,1050,151);
    line(960,150,970,123);
    line(1050,150,1040,125);
    line(975,125,950,125);
    line(1040,125,1060,125);
    line(950,125,980,90);
    line(1060,125,1030,90);
    line(980,90,970,90);
    line(1030,90,1040,90);
    line(970,90,1004,40);
    line(1040,90,1001,40);
    line(990,200,1020,200);
    floodfill(1005,135,WHITE);

    //4th small zaad
    setfillstyle(SOLID_FILL,BROWN);
    line(1120,200,1120,175);
    line(1135,200,1135,175);
    line(1110,175,1145,175);
    line(1120,200,1135,200);
    floodfill(1128,180,WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    line(1110,175,1145,175);
    line(1110,175,1115,150);
    line(1145,175,1140,150);
    line(1115,150,1110,150);
    line(1140,150,1145,150);
    line(1110,150,1127.5,120);
    line(1145,150,1127.5,120);
    line(1120,200,1135,200);
    floodfill(1128,130,WHITE);

    //4 bada zzaaad

    setfillstyle(SOLID_FILL,BROWN);
    line(1240,200,1240,150);
    line(1270,200,1270,150);
    line(1210,150,1300,150);
    line(1240,200,1270,200);
    floodfill(1258,180,WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    line(1210,150,1300,150);
    line(1210,150,1220,125);
    line(1300,150,1290,125);
    line(1220,125,1200,125);
    line(1290,125,1310,125);
    line(1200,125,1230,90);
    line(1310,125,1280,90);
    line(1230,90,1220,90);
    line(1280,90,1290,90);
    line(1220,90,1255,40);
    line(1290,90,1255,40);
    line(1240,200,1270,200);
    floodfill(1248,130,WHITE);

}

