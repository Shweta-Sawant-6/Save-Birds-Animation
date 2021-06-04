#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void invisible();
void house();
void tree();
void industries();
void car();
void redraw();
void birds();
void up();
void up1();
void down1();
void down();
int a,b,c,d,e;


void main()
{

	int gdriver = DETECT,gmode;
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");

	//setcolor(GREEN);
	b=0;
	c=0;
	d=0;

	outtextxy(270,30,"SAVE BIRDS...");
	//WINDOW_PARTITION
	line(0,20,635,20);
	line(0,450,635,450);
	line(0,20,0,450);
	line(635,20,635,450);
	line(313,40,313,450);

	car();
	industries();
	tree();
	house();

	setfillstyle(SOLID_FILL,2);
	floodfill(200,200,15);
	floodfill(1,449,15);

	setfillstyle(SOLID_FILL,10);
	floodfill(300,300,15);
	floodfill(200,320,15);
	floodfill(50,300,15);

	setfillstyle(SOLID_FILL,6);
	floodfill(240,240,15);

	setfillstyle(SOLID_FILL,0);
	floodfill(100,320,15);

	setfillstyle(SLASH_FILL,RED);
	floodfill(120,230,15);

	setfillstyle(SOLID_FILL,12);
	floodfill(120,270,15);
	floodfill(140,270,15);

	setfillstyle(SOLID_FILL,0);
	floodfill(320,340,15);
	floodfill(520,335,15);
	//ROAD_COLOR..
	floodfill(386,362,15);
	floodfill(380,360,15);
	floodfill(440,360,15);
	floodfill(374,359,15);
	floodfill(446,359,15);

	//WINDOW_COLOR
	floodfill(566,121,15);
	floodfill(566,161,15);
	floodfill(566,201,15);
	floodfill(566,241,15);
	floodfill(566,281,15);

	floodfill(601,121,15);
	floodfill(601,161,15);
	floodfill(601,201,15);
	floodfill(601,241,15);
	floodfill(601,281,15);

	floodfill(531,311,15);
	floodfill(531,286,15);
	floodfill(531,261,15);

	floodfill(501,236,15);
	floodfill(501,261,15);
	floodfill(501,286,15);
	floodfill(501,311,15);

	floodfill(481,236,15);
	floodfill(481,261,15);
	floodfill(481,286,15);
	floodfill(481,311,15);

	floodfill(326,309,15);
	floodfill(344,269,15);
	floodfill(344,229,15);
	floodfill(344,189,15);

	//CAR_COLOR...

	setfillstyle(SOLID_FILL,8);
	floodfill(371,321,15);


	for(a=1;a<30;a++)
	{
		birds();
		setfillstyle(SOLID_FILL,3);
		floodfill(314,50,15);
		floodfill(300,260,15);

		if(a%2==0)
		{
			up();
			delay(100);
			up1();
			invisible();
		}
		else
		{
			down();
			delay(100);
			down1();
			invisible();
		}
		setfillstyle(SOLID_FILL,3);
		floodfill(314,50,15);
		floodfill(300,260,15);



		b=b+3;
	}
	redraw();
	getch();
	closegraph();

}
void birds()
{
	setcolor(15);
	//bird_1
	circle(50+b,150,5);
	setfillstyle(SOLID_FILL,9);
	floodfill(50+b,150,15);
	ellipse(35+b,150,0,360,10,5);
	setfillstyle(SOLID_FILL,1);
	floodfill(35+b,150,15);
	line(53+b,148,60+b,150);
	line(53+b,152,60+b,150);
	circle(50+b,148,1);
	line(28+b,150,15+b,145);
	line(28+b,150,14+b,146);
	line(29+b,150,13+b,147);
	line(29+b,151,12+b,148);
	line(29+b,152,10+b,149);
	line(29+b,153,12+b,150);

	//bird_2
	circle(70+b,120,5);
	setfillstyle(SOLID_FILL,9);
	floodfill(70+b,120,15);
	ellipse(55+b,120,0,360,10,5);
	setfillstyle(SOLID_FILL,1);
	floodfill(55+b,120,15);
	line(73+b,118,80+b,120);
	line(73+b,122,80+b,120);
	circle(70+b,118,1);
	line(48+b,120,35+b,115);
	line(48+b,120,34+b,116);
	line(49+b,120,33+b,117);
	line(49+b,121,32+b,118);
	line(49+b,122,30+b,119);
	line(49+b,123,32+b,120);

	//bird_3
	circle(70+b,180,5);
	setfillstyle(SOLID_FILL,9);
	floodfill(70+b,180,15);
	ellipse(55+b,180,0,360,10,5);
	setfillstyle(SOLID_FILL,1);
	floodfill(55+b,180,15);
	line(73+b,178,80+b,180);
	line(73+b,182,80+b,180);
	circle(70+b,178,1);
	line(48+b,180,35+b,175);
	line(48+b,180,34+b,176);
	line(49+b,180,33+b,177);
	line(49+b,181,32+b,178);
	line(49+b,182,30+b,179);
	line(49+b,183,32+b,180);

	//bird_4
	circle(90+b,90,5);
	setfillstyle(SOLID_FILL,9);
	floodfill(90+b,90,15);
	ellipse(75+b,90,0,360,10,5);
	setfillstyle(SOLID_FILL,1);
	floodfill(75+b,90,15);
	line(93+b,88,100+b,90);
	line(93+b,92,100+b,90);
	circle(90+b,88,1);
	line(68+b,90,55+b,85);
	line(68+b,90,54+b,86);
	line(69+b,90,53+b,87);
	line(69+b,91,52+b,88);
	line(69+b,92,50+b,89);
	line(69+b,93,52+b,90);

	//bird_5
	circle(110+b,60,5);
	setfillstyle(SOLID_FILL,9);
	floodfill(110+b,60,15);
	ellipse(95+b,60,0,360,10,5);
	setfillstyle(SOLID_FILL,1);
	floodfill(95+b,60,15);
	line(113+b,58,120+b,60);
	line(113+b,62,120+b,60);
	circle(110+b,58,1);
	line(88+b,60,75+b,55);
	line(88+b,60,74+b,56);
	line(89+b,60,73+b,57);
	line(89+b,61,72+b,58);
	line(89+b,62,70+b,59);
	line(89+b,63,72+b,60);

	//bird_6
	circle(370+b,100,5);
	setfillstyle(SOLID_FILL,9);
	floodfill(370+b,100,15);
	ellipse(355+b,100,0,360,10,5);
	setfillstyle(SOLID_FILL,1);
	floodfill(355+b,100,15);
	line(373+b,98,380+b,100);
	line(373+b,102,380+b,100);
	circle(370+b,98,1);
	line(348+b,100,335+b,95);
	line(348+b,100,334+b,96);
	line(349+b,100,333+b,97);
	line(349+b,101,332+b,98);
	line(349+b,102,330+b,99);
	line(349+b,103,332+b,100);

}

void down()
{
	c=b;
	//wings_down
	//bird_1
	ellipse(35+c,156,210,360,6,15);
	line(36+c,150,30+c,160);
	line(39+c,157,36+c,163);
	line(36+c,157,33+c,163);

	//bird_2
	ellipse(55+c,126,210,360,6,15);
	line(56+c,120,50+c,130);
	line(59+c,127,56+c,133);
	line(56+c,127,53+c,133);

	//bird_3
	ellipse(55+c,186,210,360,6,15);
	line(56+c,180,50+c,190);
	line(59+c,187,56+c,193);
	line(56+c,187,53+c,193);

	//bird_4
	ellipse(75+c,96,210,360,6,15);
	line(76+c,90,70+c,100);
	line(79+c,97,76+c,103);
	line(76+c,97,73+c,103);

	//bird_5
	ellipse(95+c,66,210,360,6,15);
	line(96+c,60,90+c,70);
	line(99+c,67,96+c,73);
	line(96+c,67,93+c,73);

	//bird_6
	ellipse(355+c,106,210,360,6,15);
	line(356+c,100,350+c,110);
	line(359+c,107,354+c,113);
	line(356+c,107,353+c,113);


}

void up()
{
	setcolor(15);
	d=b;
	//wings_up
	//bird_1
	ellipse(35+d,144,0,150,6,15);
	line(36+d,150,30+d,140);
	line(36+d,137,38+d,143);
	line(34+d,137,36+d,143);

	//bird_2
	ellipse(55+d,114,0,150,6,15);
	line(56+d,120,50+d,110);
	line(56+d,107,58+d,113);
	line(54+d,107,56+d,113);

	//bird_3
	ellipse(55+d,174,0,150,6,15);
	line(56+d,180,50+d,170);
	line(56+d,167,58+d,173);
	line(54+d,167,56+d,173);

	//bird_4
	ellipse(75+d,84,0,150,6,15);
	line(76+d,90,70+d,80);
	line(76+d,77,78+d,83);
	line(74+d,77,76+d,83);

	//bird_5
	ellipse(95+d,54,0,150,6,15);
	line(96+d,60,90+d,50);
	line(96+d,47,98+d,53);
	line(94+d,47,96+d,53);

	//bird_6
	ellipse(355+d,94,0,150,6,15);
	line(356+d,100,350+d,90);
	line(356+d,87,358+d,93);
	line(354+d,87,356+d,93);

}

void house()
{

	//HOUSE...
	setcolor(15);
	line(100,220,75,260);
	line(100,220,125,260);
	line(75,330,125,350);
	line(75,260,75,330);
	line(125,260,125,350);

	line(90,335,90,280);
	line(80,285,120,285);
	line(110,345,110,280);

	rectangle(150,280,170,300);

	line(100,220,170,220);
	line(125,260,195,260);
	line(195,260,195,330);

	line(125,350,195,330);
	line(170,220,195,260);

	//SUN..
	circle(50,50,20);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(50,50,15);

	setfillstyle(SLASH_FILL,12);
	floodfill(91,285,15);
	setfillstyle(SOLID_FILL,0);
	floodfill(160,290,WHITE);

}

void tree()
{
	setcolor(15);
	//TREE...
	ellipse(200,200,135,307,40,20);
	ellipse(195,150,65,245,50,50);
	ellipse(270,110,30,185,60,50);
	ellipse(300,205,250,295,40,20);

	arc(100,280,330,30,140);
	arc(420,280,150,210,140);
	arc(170,295,20,65,100);
	arc(350,295,115,159,100);


	//GROUND...
	line(0,330,75,330);
	line(195,330,230,330);
	line(290,330,313,330);

	//GRASS...
	arc(30,330,100,180,40);
	arc(50,300,30,160,30);
	arc(200,320,20,95,40);
	arc(320,300,101,181,40);

	setfillstyle(SOLID_FILL,1);
	floodfill(551,101,15);
	setfillstyle(SOLID_FILL,5);
	floodfill(314,151,15);
	setfillstyle(SOLID_FILL,8);
	floodfill(521,251,15);
	setfillstyle(SOLID_FILL,6);
	floodfill(471,231,15);


	setcolor(15);
	line(215,340,225,350);
	line(225,350,235,340);
	line(235,340,245,350);
	line(245,350,255,340);
	line(255,340,265,350);
	line(265,350,275,340);
	line(275,340,285,350);
	line(285,350,295,340);
	line(295,340,305,350);
	line(305,350,310,340);

	line(20,400,30,410);
	line(30,410,40,400);
	line(40,400,50,410);
	line(50,410,60,400);

	line(240,430,250,440);
	line(250,440,260,430);
	line(260,430,270,440);
	line(270,440,280,430);

	line(140,370,150,380);
	line(150,380,160,370);
	line(160,370,170,380);
	line(170,380,180,370);


	setfillstyle(SOLID_FILL,2);
	floodfill(196,151,15);

	setcolor(RED);
	circle(140,365,1);
	circle(160,365,1);
	circle(180,365,1);
	circle(280,425,1);
	circle(260,425,1);
	circle(240,425,1);
	circle(60,395,1);
	circle(40,395,1);
	circle(20,395,1);
}


void industries()
{
	//GROUND...
	line(313,330,365,330);
	line(635,330,440,330);

	//INDUSTRIES...
	rectangle(550,100,635,330);

	rectangle(313,150,360,330);

	rectangle(520,250,550,330);
	rectangle(470,230,520,330);


	line(370,320,370,270);
	line(370,290,390,280);
	line(390,280,390,290);
	line(390,290,410,280);
	line(410,280,410,290);
	line(410,290,430,280);
	line(430,280,430,320);

	ellipse(365,270,0,360,5,2);
	rectangle(375,295,385,305);
	rectangle(395,295,405,305);
	rectangle(415,295,425,305);


	line(540,200,540,140);
	line(540,160,520,150);
	line(520,150,520,160);
	line(520,160,500,150);
	line(500,150,500,160);
	line(500,160,480,150);
	line(480,150,480,200);
	line(550,200,480,200);

	ellipse(545,140,0,360,5,2);
	rectangle(525,170,535,180);
	rectangle(505,170,515,180);
	rectangle(485,170,495,180);

	ellipse(370,240,270,0,20,30);
	ellipse(390,210,270,70,30,30);
	ellipse(370,170,330,150,40,40);
	setfillstyle(SOLID_FILL,7);
	floodfill(371,233,15);

	ellipse(540,110,90,280,20,30);
	ellipse(565,75,305,205,40,30);
	setfillstyle(SOLID_FILL,7);
	floodfill(541,111,15);

	//WINDOWS..
	rectangle(565,120,585,140);
	rectangle(565,160,585,180);
	rectangle(565,200,585,220);
	rectangle(565,240,585,260);
	rectangle(565,280,585,300);

	rectangle(600,120,620,140);
	rectangle(600,160,620,180);
	rectangle(600,200,620,220);
	rectangle(600,240,620,260);
	rectangle(600,280,620,300);

	rectangle(530,310,540,320);
	rectangle(530,285,540,295);
	rectangle(530,260,540,270);

	rectangle(480,235,490,245);
	rectangle(480,260,490,270);
	rectangle(480,285,490,295);
	rectangle(480,310,490,320);

	rectangle(500,235,510,245);
	rectangle(500,260,510,270);
	rectangle(500,285,510,295);
	rectangle(500,310,510,320);

	rectangle(325,310,345,290);
	rectangle(325,250,345,270);
	rectangle(325,210,345,230);
	rectangle(325,170,345,190);

	//ROAD...
	line(320,400,360,400);
	line(380,400,420,400);
	line(440,400,480,400);
	line(500,400,540,400);
	line(560,400,600,400);
	line(620,400,635,400);
}

void car()
{
	line(370,320,430,320);
	line(430,320,450,340);
	line(370,320,360,340);
	line(450,340,470,340);
	line(360,340,350,340);
	line(470,340,470,360);
	line(350,340,350,360);
	line(470,360,450,360);
	line(350,360,370,360);
	arc(380,360,0,180,10);
	arc(440,360,0,180,10);
	line(390,360,430,360);
	setfillstyle(SOLID_FILL,4);
	floodfill(389,359,15);
	circle(380,360,5);
	circle(440,360,5);
	rectangle(380,325,400,340);
	line(410,325,410,340);
	line(410,340,435,340);
	line(410,325,425,325);
	line(435,340,425,325);
}


void redraw()
{
	setcolor(15);
	outtextxy(270,30,"SAVE BIRDS...");
	//WINDOW_PARTITION
	line(0,20,635,20);
	line(0,450,635,450);
	line(0,20,0,450);
	line(635,20,635,450);
	line(313,40,313,450);

	//bird_1
	circle(140,150,5);
	setfillstyle(SOLID_FILL,9);
	floodfill(140,150,15);
	ellipse(125,150,0,360,10,5);
	setfillstyle(SOLID_FILL,1);
	floodfill(125,150,15);
	line(143,148,150,150);
	line(143,152,150,150);
	circle(140,148,1);
	line(118,150,105,145);
	line(118,150,104,146);
	line(119,150,103,147);
	line(119,151,102,148);
	line(119,152,100,149);
	line(119,153,102,150);
	ellipse(125,144,0,150,6,15);
	line(126,150,120,140);
	line(126,137,128,143);
	line(124,137,126,143);

	//bird_2
	circle(70+b,120,5);
	setfillstyle(SOLID_FILL,9);
	floodfill(70+b,120,15);
	ellipse(55+b,120,0,360,10,5);
	setfillstyle(SOLID_FILL,1);
	floodfill(55+b,120,15);
	line(73+b,118,80+b,120);
	line(73+b,122,80+b,120);
	circle(70+b,118,1);
	line(48+b,120,35+b,115);
	line(48+b,120,34+b,116);
	line(49+b,120,33+b,117);
	line(49+b,121,32+b,118);
	line(49+b,122,30+b,119);
	line(49+b,123,32+b,120);
	ellipse(55+d,114,0,150,6,15);
	line(56+d,120,50+d,110);
	line(56+d,107,58+d,113);
	line(54+d,107,56+d,113);

	//bird_3
	circle(70+b,180,5);
	setfillstyle(SOLID_FILL,9);
	floodfill(70+b,180,15);
	ellipse(55+b,180,0,360,10,5);
	setfillstyle(SOLID_FILL,1);
	floodfill(55+b,180,15);
	line(73+b,178,80+b,180);
	line(73+b,182,80+b,180);
	circle(70+b,178,1);
	line(48+b,180,35+b,175);
	line(48+b,180,34+b,176);
	line(49+b,180,33+b,177);
	line(49+b,181,32+b,178);
	line(49+b,182,30+b,179);
	line(49+b,183,32+b,180);
	ellipse(55+d,174,0,150,6,15);
	line(56+d,180,50+d,170);
	line(56+d,167,58+d,173);
	line(54+d,167,56+d,173);

	//bird_4
	circle(90+b,90,5);
	setfillstyle(SOLID_FILL,9);
	floodfill(90+b,90,15);
	ellipse(75+b,90,0,360,10,5);
	setfillstyle(SOLID_FILL,1);
	floodfill(75+b,90,15);
	line(93+b,88,100+b,90);
	line(93+b,92,100+b,90);
	circle(90+b,88,1);
	line(68+b,90,55+b,85);
	line(68+b,90,54+b,86);
	line(69+b,90,53+b,87);
	line(69+b,91,52+b,88);
	line(69+b,92,50+b,89);
	line(69+b,93,52+b,90);
	ellipse(75+d,84,0,150,6,15);
	line(76+d,90,70+d,80);
	line(76+d,77,78+d,83);
	line(74+d,77,76+d,83);

	//bird_5
	circle(110+b,60,5);
	setfillstyle(SOLID_FILL,9);
	floodfill(110+b,60,15);
	ellipse(95+b,60,0,360,10,5);
	setfillstyle(SOLID_FILL,1);
	floodfill(95+b,60,15);
	line(113+b,58,120+b,60);
	line(113+b,62,120+b,60);
	circle(110+b,58,1);
	line(88+b,60,75+b,55);
	line(88+b,60,74+b,56);
	line(89+b,60,73+b,57);
	line(89+b,61,72+b,58);
	line(89+b,62,70+b,59);
	line(89+b,63,72+b,60);
	ellipse(95+d,54,0,150,6,15);
	line(96+d,60,90+d,50);
	line(96+d,47,98+d,53);
	line(94+d,47,96+d,53);

	//bird_6
	circle(370+b,100,5);
	setfillstyle(SOLID_FILL,9);
	floodfill(370+b,100,15);
	ellipse(355+b,100,0,360,10,5);
	setfillstyle(SOLID_FILL,1);
	floodfill(355+b,100,15);
	line(373+b,98,380+b,100);
	line(373+b,102,380+b,100);
	circle(370+b,98,1);
	line(348+b,100,335+b,95);
	line(348+b,100,334+b,96);
	line(349+b,100,333+b,97);
	line(349+b,101,332+b,98);
	line(349+b,102,330+b,99);
	line(349+b,103,332+b,100);
	ellipse(355+d,94,0,150,6,15);
	line(356+d,100,350+d,90);
	line(356+d,87,358+d,93);
	line(354+d,87,356+d,93);

	car();
	industries();
	tree();
	house();
	//ROAD_COLOR..
	floodfill(386,362,15);
	floodfill(380,360,15);
	floodfill(440,360,15);
	floodfill(374,359,15);
	floodfill(446,359,15);
	floodfill(631,331,15);
	floodfill(314,331,15);
}
void invisible()
{
	//bird_1
	setcolor(3);
	circle(50+b,150,5);
	setfillstyle(SOLID_FILL,3);
	floodfill(50+b,150,15);
	ellipse(35+b,150,0,360,10,5);
	setfillstyle(SOLID_FILL,3);
	floodfill(35+b,150,15);
	line(53+b,148,60+b,150);
	line(53+b,152,60+b,150);
	circle(50+b,148,1);
	line(28+b,150,15+b,145);
	line(28+b,150,14+b,146);
	line(29+b,150,13+b,147);
	line(29+b,151,12+b,148);
	line(29+b,152,10+b,149);
	line(29+b,153,12+b,150);

	//bird_2
	circle(70+b,120,5);
	setfillstyle(SOLID_FILL,3);
	floodfill(70+b,120,15);
	ellipse(55+b,120,0,360,10,5);
	setfillstyle(SOLID_FILL,3);
	floodfill(55+b,120,15);
	line(73+b,118,80+b,120);
	line(73+b,122,80+b,120);
	circle(70+b,118,1);
	line(48+b,120,35+b,115);
	line(48+b,120,34+b,116);
	line(49+b,120,33+b,117);
	line(49+b,121,32+b,118);
	line(49+b,122,30+b,119);
	line(49+b,123,32+b,120);

	//bird_3
	circle(70+b,180,5);
	setfillstyle(SOLID_FILL,3);
	floodfill(70+b,180,15);
	ellipse(55+b,180,0,360,10,5);
	setfillstyle(SOLID_FILL,3);
	floodfill(55+b,180,15);
	line(73+b,178,80+b,180);
	line(73+b,182,80+b,180);
	circle(70+b,178,1);
	line(48+b,180,35+b,175);
	line(48+b,180,34+b,176);
	line(49+b,180,33+b,177);
	line(49+b,181,32+b,178);
	line(49+b,182,30+b,179);
	line(49+b,183,32+b,180);

	//bird_4
	circle(90+b,90,5);
	setfillstyle(SOLID_FILL,3);
	floodfill(90+b,90,15);
	ellipse(75+b,90,0,360,10,5);
	setfillstyle(SOLID_FILL,3);
	floodfill(75+b,90,15);
	line(93+b,88,100+b,90);
	line(93+b,92,100+b,90);
	circle(90+b,88,1);
	line(68+b,90,55+b,85);
	line(68+b,90,54+b,86);
	line(69+b,90,53+b,87);
	line(69+b,91,52+b,88);
	line(69+b,92,50+b,89);
	line(69+b,93,52+b,90);

	//bird_5
	circle(110+b,60,5);
	setfillstyle(SOLID_FILL,3);
	floodfill(110+b,60,15);
	ellipse(95+b,60,0,360,10,5);
	setfillstyle(SOLID_FILL,3);
	floodfill(95+b,60,15);
	line(113+b,58,120+b,60);
	line(113+b,62,120+b,60);
	circle(110+b,58,1);
	line(88+b,60,75+b,55);
	line(88+b,60,74+b,56);
	line(89+b,60,73+b,57);
	line(89+b,61,72+b,58);
	line(89+b,62,70+b,59);
	line(89+b,63,72+b,60);

	//bird_6
	circle(370+b,100,5);
	setfillstyle(SOLID_FILL,3);
	floodfill(370+b,100,15);
	ellipse(355+b,100,0,360,10,5);
	setfillstyle(SOLID_FILL,3);
	floodfill(355+b,100,15);
	line(373+b,98,380+b,100);
	line(373+b,102,380+b,100);
	circle(370+b,98,1);
	line(348+b,100,335+b,95);
	line(348+b,100,334+b,96);
	line(349+b,100,333+b,97);
	line(349+b,101,332+b,98);
	line(349+b,102,330+b,99);
	line(349+b,103,332+b,100);

}

void down1()
{
	c=b;
	setcolor(3);
	//wings_down
	//bird_1
	ellipse(35+c,156,210,360,6,15);
	line(36+c,150,30+c,160);
	line(39+c,157,36+c,163);
	line(36+c,157,33+c,163);

	//bird_2
	ellipse(55+c,126,210,360,6,15);
	line(56+c,120,50+c,130);
	line(59+c,127,56+c,133);
	line(56+c,127,53+c,133);

	//bird_3
	ellipse(55+c,186,210,360,6,15);
	line(56+c,180,50+c,190);
	line(59+c,187,56+c,193);
	line(56+c,187,53+c,193);

	//bird_4
	ellipse(75+c,96,210,360,6,15);
	line(76+c,90,70+c,100);
	line(79+c,97,76+c,103);
	line(76+c,97,73+c,103);

	//bird_5
	ellipse(95+c,66,210,360,6,15);
	line(96+c,60,90+c,70);
	line(99+c,67,96+c,73);
	line(96+c,67,93+c,73);

	//bird_6
	ellipse(355+c,106,210,360,6,15);
	line(356+c,100,350+c,110);
	line(359+c,107,354+c,113);
	line(356+c,107,353+c,113);


}

void up1()
{
	setcolor(3);
	d=b;
	//wings_up
	//bird_1
	ellipse(35+d,144,0,150,6,15);
	line(36+d,150,30+d,140);
	line(36+d,137,38+d,143);
	line(34+d,137,36+d,143);

	//bird_2
	ellipse(55+d,114,0,150,6,15);
	line(56+d,120,50+d,110);
	line(56+d,107,58+d,113);
	line(54+d,107,56+d,113);

	//bird_3
	ellipse(55+d,174,0,150,6,15);
	line(56+d,180,50+d,170);
	line(56+d,167,58+d,173);
	line(54+d,167,56+d,173);

	//bird_4
	ellipse(75+d,84,0,150,6,15);
	line(76+d,90,70+d,80);
	line(76+d,77,78+d,83);
	line(74+d,77,76+d,83);

	//bird_5
	ellipse(95+d,54,0,150,6,15);
	line(96+d,60,90+d,50);
	line(96+d,47,98+d,53);
	line(94+d,47,96+d,53);

	//bird_6
	ellipse(355+d,94,0,150,6,15);
	line(356+d,100,350+d,90);
	line(356+d,87,358+d,93);
	line(354+d,87,356+d,93);

}

