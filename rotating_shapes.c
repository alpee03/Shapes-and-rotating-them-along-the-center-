#include <graphics.h>
#include <math.h>

int main()
{
    initwindow(5000,5000);
    
    //Triangle
    int x1 = 200, y1 = 100;
    int x2 = 300, y2 = 300;
    int x3 = 400, y3 = 100;

    float cx = (x1 + x2 + x3) / 3.0;
    float cy = (y1 + y2 + y3) / 3.0;

    float angle = 0.0;
    float rotationSpeed = 0.01;

    char direction;

    while (true)
    {
        cleardevice();

        // New coordinates after rotation
        int newX1 = cx + (x1 - cx) * cos(angle) - (y1 - cy) * sin(angle);
        int newY1 = cy + (x1 - cx) * sin(angle) + (y1 - cy) * cos(angle);

        int newX2 = cx + (x2 - cx) * cos(angle) - (y2 - cy) * sin(angle);
        int newY2 = cy + (x2 - cx) * sin(angle) + (y2 - cy) * cos(angle);

        int newX3 = cx + (x3 - cx) * cos(angle) - (y3 - cy) * sin(angle);
        int newY3 = cy + (x3 - cx) * sin(angle) + (y3 - cy) * cos(angle);

        // The rotated triangle
        setcolor(RED);
        setfillstyle(SOLID_FILL,RED);
        line(newX1, newY1, newX2, newY2);
        line(newX2, newY2, newX3, newY3);
        line(newX3, newY3, newX1, newY1);
		floodfill(300,200,RED);
        delay(10);

        if (kbhit())
        {
            direction = getch();
            if (direction == 'q' || direction == 'Q')
                break;
            else if (direction == 'c' || direction == 'C')
                rotationSpeed = -rotationSpeed;
        }

        angle += rotationSpeed;
    }
    
    //Rectangle 
	int a1 = 600, b1 = 100;
    int a2 = 900, b2 = 100;
    int a3 = 900, b3 = 300;
    int a4 = 600, b4 = 300;

    float ca = (a1 + a2 + a3 + a4) / 4.0;
    float cb = (b1 + b2 + b3 + b4) / 4.0;

    float angle2 = 0.0;
    float rotationSpeed2 = 0.01;

    char direction2;

    while (true)
    {
        cleardevice();

        // New coordinates after rotation
        int newa1 = ca + (a1 - ca) * cos(angle2) - (b1 - cb) * sin(angle2);
        int newb1 = cb + (a1 - ca) * sin(angle2) + (b1 - cb) * cos(angle2);

        int newa2 = ca + (a2 - ca) * cos(angle2) - (b2 - cb) * sin(angle2);
        int newb2 = cb + (a2 - ca) * sin(angle2) + (b2 - cb) * cos(angle2);

        int newa3 = ca + (a3 - ca) * cos(angle2) - (b3 - cb) * sin(angle2);
        int newb3 = cb + (a3 - ca) * sin(angle2) + (b3 - cb) * cos(angle2);

        int newa4 = ca + (a4 - ca) * cos(angle2) - (b4 - cb) * sin(angle2);
        int newb4 = cb + (a4 - ca) * sin(angle2) + (b4 - cb) * cos(angle2);

        // The rotated rectangle
        setcolor(8);
        setfillstyle(SOLID_FILL,8);
        line(newa1, newb1, newa2, newb2);
        line(newa2, newb2, newa3, newb3);
        line(newa3, newb3, newa4, newb4);
        line(newa4, newb4, newa1, newb1);
        floodfill(750,200,8);

        delay(10);

        if (kbhit())
        {
            direction2 = getch();
            if (direction2 == 'q' || direction2 == 'Q')
                break;
            else if (direction2 == 'c' || direction2 == 'C')
                rotationSpeed2 = -rotationSpeed2;
        }

        angle2 += rotationSpeed2;
    }
    
    //Pentagon
    int p1 = 1000, q1 = 170;
    int p2 = 1100, q2 = 100;
    int p3 = 1200, q3 = 170;
    int p4 = 1160, q4 = 300;
    int p5 = 1040, q5 = 300;

    float cp = (p1 + p2 + p3 + p4 + p5) / 5.0;
    float cq = (q1 + q2 + q3 + q4 + q5) / 5.0;

    float angle3 = 0.0;
    float rotationSpeed3 = 0.01;

    char direction3;

    while (true)
    {
        cleardevice();

        // New coordinates after rotation
        int newp1 = cp + (p1 - cp) * cos(angle3) - (q1 - cq) * sin(angle3);
        int newq1 = cq + (p1 - cp) * sin(angle3) + (q1 - cq) * cos(angle3);

        int newp2 = cp + (p2 - cp) * cos(angle3) - (q2 - cq) * sin(angle3);
        int newq2 = cq + (p2 - cp) * sin(angle3) + (q2 - cq) * cos(angle3);

        int newp3 = cp + (p3 - cp) * cos(angle3) - (q3 - cq) * sin(angle3);
        int newq3 = cq + (p3 - cp) * sin(angle3) + (q3 - cq) * cos(angle3);

        int newp4 = cp + (p4 - cp) * cos(angle3) - (q4 - cq) * sin(angle3);
        int newq4 = cq + (p4 - cp) * sin(angle3) + (q4 - cq) * cos(angle3);

        int newp5 = cp + (p5 - cp) * cos(angle3) - (q5 - cq) * sin(angle3);
        int newq5 = cq + (p5 - cp) * sin(angle3) + (q5 - cq) * cos(angle3);

        // The rotated pentagon
        setcolor(10);
        setfillstyle(SOLID_FILL,10);
        line(newp1, newq1, newp2, newq2);
        line(newp2, newq2, newp3, newq3);
        line(newp3, newq3, newp4, newq4);
        line(newp4, newq4, newp5, newq5);
        line(newp5, newq5, newp1, newq1);
		floodfill(1100,170,10);
		
        delay(10);

        if (kbhit())
        {
            direction3 = getch();
            if (direction3 == 'q' || direction3 == 'Q')
                break;
            else if (direction3 == 'c' || direction3 == 'C')
                rotationSpeed3 = -rotationSpeed3;
        }

        angle3 += rotationSpeed3;
    }
	
	//Hexagon
	int X1 = 300, Y1 = 500;
    int X2 = 400, Y2 = 450;
    int X3 = 500, Y3 = 500;
    int X4 = 550, Y4 = 600;
    int X5 = 450, Y5 = 650;
    int X6 = 350, Y6 = 600;

    float cX = (X1 + X2 + X3 + X4 + X5 + X6) / 6.0;
    float cY = (Y1 + Y2 + Y3 + Y4 + Y5 + Y6) / 6.0;

    float angle4 = 0.0;
    float rotationSpeed4 = 0.01;

    char direction4;

    while (true)
    {
        cleardevice();

        // New coordinates after rotation
        int newX1 = cX + (X1 - cX) * cos(angle4) - (Y1 - cY) * sin(angle4);
        int newY1 = cY + (X1 - cX) * sin(angle4) + (Y1 - cY) * cos(angle4);

        int newX2 = cX + (X2 - cX) * cos(angle4) - (Y2 - cY) * sin(angle4);
        int newY2 = cY + (X2 - cX) * sin(angle4) + (Y2 - cY) * cos(angle4);

        int newX3 = cX + (X3 - cX) * cos(angle4) - (Y3 - cY) * sin(angle4);
        int newY3 = cY + (X3 - cX) * sin(angle4) + (Y3 - cY) * cos(angle4);

        int newX4 = cX + (X4 - cX) * cos(angle4) - (Y4 - cY) * sin(angle4);
        int newY4 = cY + (X4 - cX) * sin(angle4) + (Y4 - cY) * cos(angle4);

        int newX5 = cX + (X5 - cX) * cos(angle4) - (Y5 - cY) * sin(angle4);
        int newY5 = cY + (X5 - cX) * sin(angle4) + (Y5 - cY) * cos(angle4);

        int newX6 = cX + (X6 - cX) * cos(angle4) - (Y6 - cY) * sin(angle4);
        int newY6 = cY + (X6 - cX) * sin(angle4) + (Y6 - cY) * cos(angle4);

        // The rotated heXagon
        setcolor(11);
        setfillstyle(SOLID_FILL,11);
        line(newX1, newY1, newX2, newY2);
        line(newX2, newY2, newX3, newY3);
        line(newX3, newY3, newX4, newY4);
        line(newX4, newY4, newX5, newY5);
        line(newX5, newY5, newX6, newY6);
        line(newX6, newY6, newX1, newY1);
		floodfill(400,500,11);
		
        delay(10);

        if (kbhit())
        {
            direction4 = getch();
            if (direction4 == 'q' || direction4 == 'Q')
                break;
            else if (direction4 == 'c' || direction4 == 'C')
                rotationSpeed4 = -rotationSpeed4;
        }

        angle4 += rotationSpeed4;
    }

    //Rhombus
	int centeru = 900;
    int centerv = 500;
    int width = 400;
    int height = 50;

    float angle5 = 0.0;
    float rotationSpeed5 = 0.01;

    char direction5;

    while (true)
    {
        cleardevice();

        // The four corner points of the rhombus
        int u1, v1, u2, v2, u3, v3, u4, v4;

        u1 = centeru + width / 2 * cos(angle5);
        v1 = centerv + height / 2 * sin(angle5);

        u2 = centeru - width / 2 * sin(angle5);
        v2 = centerv + height / 2 * cos(angle5);

        u3 = centeru - width / 2 * cos(angle5);
        v3 = centerv - height / 2 * sin(angle5);

        u4 = centeru + width / 2 * sin(angle5);
        v4 = centerv - height / 2 * cos(angle5);

        // Rotated Rhombus
        setcolor(14);
        setfillstyle(SOLID_FILL,14);
        line(u1, v1, u2, v2);
        line(u2, v2, u3, v3);
        line(u3, v3, u4, v4);
        line(u4, v4, u1, v1);
		floodfill(900,500,14);
        delay(10);

        if (kbhit())
        {
            direction5 = getch();
            if (direction5 == 'q' || direction5 == 'Q')
                break;
            else if (direction5 == 'c' || direction5 == 'C')
                rotationSpeed5 = -rotationSpeed5;
        }

        
        angle5 += rotationSpeed5;
    }

    closegraph();
    return 0;
}



