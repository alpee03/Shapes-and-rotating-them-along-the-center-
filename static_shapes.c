#include <iostream>
#include <graphics.h>

void triangle(int x1,int y1,int x2,int y2,int x3,int y3)
{
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
}
void pentagon(int a1,int b1,int a2,int b2,int a3, int b3,int a4,int b4,int a5,int b5 )
{
	line(a1,b1,a2,b2);
	line(a2,b2,a3,b3);
	line(a3,b3,a4,b4);
	line(a4,b4,a5,b5);
	line(a5,b5,a1,b1);
}
int main()
{
	
	initwindow(1500,2000);
	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	circle(200,200,100);
	floodfill(200,200,RED);
	setcolor(1);
	setfillstyle(SOLID_FILL,1);
	triangle(600,300,800,300,700,127);
	floodfill(700,200,1);
	setcolor(14);
	setfillstyle(SOLID_FILL,14);
	rectangle(300,350,500,550);
	floodfill(301,351,14);
	setcolor(6);
	setfillstyle(SOLID_FILL,6);
	ellipse(1000,450,0,360,150,100);
	floodfill(1000,450,6);
	setcolor(10);
	setfillstyle(SOLID_FILL,10);
	pentagon(1100,100,1000,170,1040,300,1160,300,1200,170);
	floodfill(1100,200,10);
	getch();
	closegraph();
	return 0;
}
