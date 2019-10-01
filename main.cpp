#include<graphics.h>
main()
{
initwindow(1370,768);

//GROUND
setfillstyle(WIDE_DOT_FILL,GREEN);
rectangle(1,1,700,80);
floodfill(5,10,WHITE);
outtextxy(290,40,"GROUND");

//HOSTEL
setfillstyle(LTSLASH_FILL,LIGHTGRAY);
rectangle(900,1,1340,80);
floodfill(904,10,WHITE);
outtextxy(1100,45,"HOSTEl");

//ENROLLMENTOFFICE
setfillstyle(LTSLASH_FILL,BROWN);
rectangle(1,500,100,600);
floodfill(2,502,WHITE);
outtextxy(2,550,"ENROLLMENT");
outtextxy(2,560,"OFFICE");

//BARONS
setfillstyle(CLOSE_DOT_FILL,MAGENTA);
rectangle(1, 140,100,170);
floodfill(2,150,WHITE);
outtextxy(20,150,"BARONS");


//MAC
setfillstyle(WIDE_DOT_FILL,YELLOW);
rectangle(1,200,100,400);
floodfill(5,210,WHITE);
outtextxy(35,310,"MAC");

//Library
setfillstyle(LTSLASH_FILL,LIGHTCYAN);
rectangle(200,140,350,300);
floodfill(202,204,WHITE);
outtextxy(240,240,"Library");

//IT Block
setfillstyle(LTSLASH_FILL,LIGHTCYAN);
rectangle(450,140,550,220);
floodfill(451,141,WHITE);
outtextxy(460,170,"IT BLOCK");

//DESIGN
setfillstyle(LTSLASH_FILL,MAGENTA);
rectangle(600,140,700,220);
floodfill(601,141,WHITE);
outtextxy(605,170,"DESIGN-BLOCK");  

//Block 6
setfillstyle(CLOSE_DOT_FILL,LIGHTGRAY);
rectangle(450,240,550,300);
floodfill(451,241,WHITE);
outtextxy(455,260,"BLOCK 6");
line(550,250,600,250);
line(550,270,600,270);

//Block 7
setfillstyle(CLOSE_DOT_FILL,LIGHTGRAY);
rectangle(600,240,700,300);
floodfill(626,241,WHITE);
outtextxy(633,250,"BLOCK 7");

//pathleft
line(130,310,740,310);
line(130,380,740,380);
//pathright
line(853,310,1370,310);
line(853,380,1370,380);
//pathbottom
line(740,403,740,768);
line(853,403,853,768);
//pathtop
line(740,0,740,297);
line(853,0,853,297);

//Airplane
setfillstyle(CLOSE_DOT_FILL,LIGHTGRAY);
rectangle(860,170,1090,300);
floodfill(861,201,WHITE);
//outtextxy(633,250,"BLOCK 7");

line(865,235,910,220);
line(865,235,910,255);

line(910,220,940,220);
line(910,255,940,255);

line(940,220,990,180);
line(940,255,990,295);

line(990,220,1040,180);
line(990,255,1040,295);

line(990,180,1040,180);
line(990,295,1040,295);

line(990,220,1030,220);
line(990,255,1030,255);

line(1030,220,1050,190);
line(1030,255,1050,285);

line(1050,220,1070,190);
line(1050,255,1070,285);

line(1050,190,1070,190);
line(1050,285,1070,285);

line(1050,225,1050,250);

//RND
setfillstyle(LTSLASH_FILL,LIGHTRED);
rectangle(1140,200,1340,300); //rnd
floodfill(1141,201,WHITE);
outtextxy(1230,250,"R&D");
//MDC
setfillstyle(LTSLASH_FILL,BROWN);
rectangle(750,1,840,80);
floodfill(755,2,WHITE);
outtextxy(780,30,"MDC");

//Gandhi Chowk
setfillstyle(CLOSE_DOT_FILL,LIGHTRED);
circle(800,350,53);
floodfill(801,351,WHITE);
outtextxy(750,347,"Gandhi Chowk");

//Block 1
setfillstyle(CLOSE_DOT_FILL,LIGHTGRAY);
rectangle(200,400,400,550);
floodfill(201,401,WHITE);
outtextxy(275,470,"BLOCK 1");

//Energy House
setfillstyle(CLOSE_DOT_FILL,LIGHTBLUE);
rectangle(200,575,400,650);
floodfill(201,580,WHITE);
outtextxy(210,600,"ENERGY HOUSE");


//Block 2
setfillstyle(CLOSE_DOT_FILL,LIGHTGRAY);
rectangle(525,390,600,470);
floodfill(526,391,WHITE);
outtextxy(535,420,"BLOCK 2");
line(600,425,625,425);
line(600,445,625,445);

//Block 3
setfillstyle(CLOSE_DOT_FILL,LIGHTGRAY);
rectangle(625,390,700,470);
floodfill(626,391,WHITE);
outtextxy(635,420,"BLOCK 3");

//Nescafe
setfillstyle(HATCH_FILL,RED);
rectangle(525,490,700,550);
floodfill(526,491,WHITE);
outtextxy(580,520,"NESCAFE");

//Block 9
setfillstyle(CLOSE_DOT_FILL,LIGHTGRAY);
rectangle(900,390,1000,550);
floodfill(901,391,WHITE);
outtextxy(920,470,"BLOCK 9");
line(1000,410,1050,410);
line(1000,430,1050,430);

//Block 10
setfillstyle(CLOSE_DOT_FILL,LIGHTGRAY);
rectangle(1050,390,1150,550);
floodfill(1051,391,WHITE);
outtextxy(1065,470,"BLOCK 10");
line(1150,450,1200,450);
line(1150,470,1200,470);

//Block 11
setfillstyle(CLOSE_DOT_FILL,LIGHTGRAY);
rectangle(1200,390,1340,600);
floodfill(1201,391,WHITE);
outtextxy(1240,490,"BLOCK 11");

//Block 4
setfillstyle(CLOSE_DOT_FILL,LIGHTGRAY);
rectangle(525,580,600,660);
floodfill(526,581,WHITE);
outtextxy(535,615,"BLOCK 4");
line(600,610,625,610);
line(600,630,625,630);

//Block 5
setfillstyle(CLOSE_DOT_FILL,LIGHTGRAY);
rectangle(625,580,700,660);
floodfill(626,581,WHITE);
outtextxy(635,615,"BLOCK 5");

//food court
setfillstyle(HATCH_FILL,LIGHTBLUE);
rectangle(490,690,700,760);
floodfill(491,691,WHITE);
outtextxy(550,720,"FOOD COURT");

//College Gate
setfillstyle(HATCH_FILL,LIGHTBLUE);
rectangle(1,690,17,760);
floodfill(2,691,WHITE);
outtextxy(1,705,"COLLEGE GATE");

getch();
}
