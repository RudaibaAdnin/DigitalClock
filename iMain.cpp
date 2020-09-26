# include "iGraphics.h"
#include <stdio.h>
#include <time.h>


void gettime(int t[])
{
    int format=0;
    time_t ctime;
    struct tm * current;
    time ( &ctime );
    current = localtime ( &ctime );
    t[0] = current->tm_hour;
    t[1] = current->tm_min;
    t[2] = current->tm_sec;

    t[0]=t[0]%12;

    if(t[0]==0)
    {
        t[0]=12;
    }


}

void iDraw()
{
    int format;
    iClear();
    int i,j;
    int a[6];
    int t[3];
    gettime(t);


    j=0;
    for(i=0; i<3; i++)
    {
        a[j]=t[i]/10;
        j++;
        a[j]=t[i]%10;
        j++;
    }



    for(i=0; i<6; i++)
    {
        if(a[i]==0)
        {
            iFilledRectangle(90+140*i,480, 100, 20);
            iFilledRectangle(170+140*i,400, 20, 100);


            //iFilledRectangle(90+140*i,400,100, 20);
            iFilledRectangle(90+140*i,400, 20, 100);
            iFilledRectangle(90+140*i,320, 100, 20);
            iFilledRectangle(90+140*i,320, 20, 100);

            iFilledRectangle(170+140*i,320, 20, 100);
        }
        if(a[i]==1)
        {
            //iFilledRectangle(90+140*i,480, 100, 20);
            iFilledRectangle(170+140*i,400, 20, 100);


            //iFilledRectangle(90+140*i,400,100, 20);
            //iFilledRectangle(90+140*i,400, 20, 100);
            //iFilledRectangle(90+140*i,320, 100, 20);
            //iFilledRectangle(90+140*i,320, 20, 100);

            iFilledRectangle(170+140*i,320, 20, 100);
        }

        if(a[i]==2)
        {
            iFilledRectangle(90+140*i,480, 100, 20);
            iFilledRectangle(170+140*i,400, 20, 100);


            iFilledRectangle(90+140*i,400,100, 20);
            //iFilledRectangle(90+140*i,400, 20, 100);
            iFilledRectangle(90+140*i,320, 100, 20);
            iFilledRectangle(90+140*i,320, 20, 100);

            //iFilledRectangle(170+140*i,320, 20, 100);
        }
        if(a[i]==3)
        {
            iFilledRectangle(90+140*i,480, 100, 20);
            iFilledRectangle(170+140*i,400, 20, 100);


            iFilledRectangle(90+140*i,400,100, 20);
            //iFilledRectangle(90+140*i,400, 20, 100);
            iFilledRectangle(90+140*i,320, 100, 20);
            //iFilledRectangle(90+140*i,320, 20, 100);

            iFilledRectangle(170+140*i,320, 20, 100);
        }
        if(a[i]==4)
        {

            //iFilledRectangle(90+140*i,480, 100, 20);
            iFilledRectangle(170+140*i,400, 20, 100);


            iFilledRectangle(90+140*i,400,100, 20);
            iFilledRectangle(90+140*i,400, 20, 100);
            //iFilledRectangle(90+140*i,320, 100, 20);
            //iFilledRectangle(90+140*i,320, 20, 100);

            iFilledRectangle(170+140*i,320, 20, 100);
        }

        if(a[i]==5)
        {
            iFilledRectangle(90+140*i,480, 100, 20);
            //iFilledRectangle(170+140*i,400, 20, 100);


            iFilledRectangle(90+140*i,400,100, 20);
            iFilledRectangle(90+140*i,400, 20, 100);
            iFilledRectangle(90+140*i,320, 100, 20);
            // iFilledRectangle(90+140*i,320, 20, 100);

            iFilledRectangle(170+140*i,320, 20, 100);
        }
        if(a[i]==6)
        {
            iFilledRectangle(90+140*i,480, 100, 20);
            //iFilledRectangle(170+140*i,400, 20, 100);


            iFilledRectangle(90+140*i,400,100, 20);
            iFilledRectangle(90+140*i,400, 20, 100);
            iFilledRectangle(90+140*i,320, 100, 20);
            iFilledRectangle(90+140*i,320, 20, 100);

            iFilledRectangle(170+140*i,320, 20, 100);
        }
        if(a[i]==7)
        {

            iFilledRectangle(90+140*i,480, 100, 20);
            iFilledRectangle(170+140*i,400, 20, 100);


            //iFilledRectangle(90+140*i,400,100, 20);
            //iFilledRectangle(90+140*i,400, 20, 100);
            // iFilledRectangle(90+140*i,320, 100, 20);
            // iFilledRectangle(90+140*i,320, 20, 100);

            iFilledRectangle(170+140*i,320, 20, 100);
        }









        if(a[i]==8)
        {
            iFilledRectangle(90+140*i,480, 100, 20);
            iFilledRectangle(170+140*i,400, 20, 100);


            iFilledRectangle(90+140*i,400,100, 20);
            iFilledRectangle(90+140*i,400, 20, 100);
            iFilledRectangle(90+140*i,320, 100, 20);
            iFilledRectangle(90+140*i,320, 20, 100);

            iFilledRectangle(170+140*i,320, 20, 100);

        }
        if(a[i]==9)
        {
            iFilledRectangle(90+140*i,480, 100, 20);
            iFilledRectangle(170+140*i,400, 20, 100);


            iFilledRectangle(90+140*i,400,100, 20);
            iFilledRectangle(90+140*i,400, 20, 100);
            // iFilledRectangle(90+140*i,320, 100, 20);
            //iFilledRectangle(90+140*i,320, 20, 100);

            iFilledRectangle(170+140*i,320, 20, 100);
        }

    }

    iSetColor(20, 200, 200);
    iText(50,100, "12 HOUR");

    if(t[2]%2==0)
    {
        iFilledCircle(350,430,10);
        iFilledCircle(350,370,10);
        iFilledCircle(630,430,10);
        iFilledCircle(630,370,10);
        iSetColor(20, 200, 200);
    }
    else
    {
        iSetColor(255, 0, 0);


    }

}
void iMouseMove(int mx, int my)
{

}


void iMouse(int button, int state, int mx, int my)
{

}


void iKeyboard(unsigned char key)
{

}


void iSpecialKeyboard(unsigned char key)
{


}


int main()
{

    iInitialize(1000, 700, "DIGITAL CLOCK");
    return 0;
}
