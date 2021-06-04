#include<graphics.h>
#include<conio.h>
void house();
void bird1();
void bird2();
void up1();
void down1();
//void clearbird1();
void up2();
void down2();
int a,b,c,d,e;
void tree();
void industries();
void industries()
{
	rectangle(550,100,635,330);
	rectangle(313,150,360,330);
	rectangle(520,250,550,330);
	rectangle(470,200,520,330);
}
void tree()
{
	//TREE...
	arc(100,280,330,30,140);
	arc(420,280,150,210,140);
	arc(170,295,26,60,100);
	arc(350,295,120,154,100);
	arc(210,200,140,302,40);
	arc(195,150,70,240,30);
	arc(260,120,25,180,60);
	arc(300,200,250,290,40);

	//GROUND...
	line(0,330,75,330);
	line(195,330,230,330);
	line(290,330,313,330);

	//GRASS...
	arc(30,330,100,180,40);
	arc(50,300,30,160,30);
	arc(200,320,20,95,40);
	arc(320,300,101,181,40);

	setcolor(GREEN);
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

void house()
{
	//HOUSE...
	setcolor(WHITE);
	line(100,220,75,260);
	line(100,220,125,260);
	line(100,220,170,220);
	line(125,260,195,260);
	line(75,260,75,330);
	line(125,260,125,350);
	line(195,260,195,330);
	line(75,330,125,350);
	line(125,350,195,330);
	line(170,220,195,260);
	rectangle(150,280,170,300);
	line(90,335,90,280);
	line(90,280,110,280);
	line(110,343,110,280);

	//line(330,300,600,300);*/
}

void main()
{
	int gd=DETECT, gm;
	clrscr();
	initgraph(&gd,&gm,"C:\\TC\\BGI");


	b=0;
	c=0;
	d=0;

   //	for(a=1;a<85;a++)
     //	{
		industries();
		tree();
		house();
		bird1();
	/*	bird2();
		if(a%2==0)
		{
			up1();
			up2();
		}
		else
		{
			down1();
			down2();
		}
		delay(50);
		cleardevice();
//getch();
		b=b+3;*/
 //	}

	getch();
	closegraph();
}

void bird1()
{
	//BIRD_1
	circle(50+b,100,5);
	line(53+b,98,60+b,100);
	line(53+b,102,60+b,100);
	circle(50+b,98,1);
	ellipse(35+b,100,0,360,10,5);
	line(28+b,100,15+b,95);
	line(28+b,100,14+b,96);
	line(29+b,100,13+b,97);
	line(29+b,101,12+b,98);
	line(29+b,102,10+b,99);
	line(29+b,103,12+b,100);


	//WINDOW_PARTITION
	line(0,20,635,20);
	line(0,450,635,450);
	line(0,20,0,450);
	line(635,20,635,450);
	line(313,20,313,450);
}

void up1()
{
	d=b;
	//WINGS_UP
	ellipse(35+d,94,0,150,6,15);
	line(36+d,100,30+d,90);
	line(36+d,87,38+d,93);
	line(34+d,87,36+d,93);

}

void down1()
{
	c=b;
	//WINGS_DOWN
	ellipse(35+c,106,210,360,6,15);
	line(36+c,100,30+c,110);
	line(39+c,107,36+c,113);
	line(36+c,107,33+c,113);

}
void bird2()
{
	//BIRD_2
	circle(50+b,50,5);
	line(53+b,48,60+b,50);
	line(53+b,52,60+b,50);
	circle(50+b,48,1);
	ellipse(35+b,50,0,360,10,5);
	line(28+b,50,15+b,45);
	line(28+b,50,14+b,46);
	line(29+b,50,13+b,47);
	line(29+b,51,12+b,48);
	line(29+b,52,10+b,49);
	line(29+b,53,12+b,50);

}

void up2()
{
	d=b;
	//WINGS_UP
	ellipse(35+d,44,0,150,6,15);
	line(36+d,50,30+d,40);
	line(36+d,37,38+d,43);
	line(34+d,37,36+d,43);

}

void down2()
{
	c=b;
	//WINGS_DOWN
	ellipse(35+c,56,210,360,6,15);
	line(36+c,50,30+c,60);
	line(39+c,57,36+c,63);
	line(36+c,57,33+c,63);

}


/*
void clearbird1()
{
	setcolor(BLACK);
	circle(50+b,100,5);
	line(53+b,98,60+b,100);
	line(53+b,102,60+b,100);
	circle(50+b,98,1);
	ellipse(35+b,100,0,360,10,5);
	line(28+b,100,15+b,95);
	line(28+b,100,14+b,96);
	line(29+b,100,13+b,97);
	line(29+b,101,12+b,98);
	line(29+b,102,10+b,99);
	line(29+b,103,12+b,100);

}
/*   */
