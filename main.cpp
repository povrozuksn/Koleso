#include "TXLib.h"

int main()
    {
    txCreateWindow (800, 600);

    int xKoleso = 0;
    int yKoleso = 300;

    int x0 = xKoleso;
    int y0 = yKoleso;
    int x1  = xKoleso+50;
    int y1  = yKoleso;
    int x2;
    int y2;
    int x3;
    int y3;
    int r  = 50;
    double a1 = 0*3.14/180;
    double a2 = 120*3.14/180;
    double a3 = 240*3.14/180;

    while(x0<800)
    {
        txSetColor (TX_BLACK);
        txSetFillColor (TX_BLACK);
        txRectangle(0, 0, 800, 600);

        txSetColor (TX_WHITE, 5);
        txCircle (x0, y0, r);

        x1 = x0 + r*cos(a1);
        y1 = y0 + r*sin(a1);
        x2 = x0 + r*cos(a2);
        y2 = y0 + r*sin(a2);
        x3 = x0 + r*cos(a3);
        y3 = y0 + r*sin(a3);

        txLine    (x0, y0, x1, y1);
        txLine    (x0, y0, x2, y2);
        txLine    (x0, y0, x3, y3);

        x0 += 10;
        a1 += 0.1;
        a2 += 0.1;
        a3 += 0.1;
        txSleep(50);
    }


    txTextCursor (false);
    return 0;
    }

