#include <windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "basic.h"
#include "all pages.h"
#include "mouse and cheese.h"
#include "traps.h"
#include "game function.h"
float b;
//glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24 , string[i] );
//--------------------------------------------------------------------------------------- my init --------------------------
void myinit()
{
	glClearColor(1,1,1,1);
	glClear(GL_COLOR_BUFFER_BIT);
	gluOrtho2D(0.0,900.0,0.0,700.0);
}
//-------------------------------------------------------------------------------------- keyboard func -------------------
void SpecialInput(int key, int x, int y)
{
	switch(key)
	{
		case GLUT_KEY_UP:
							glutDisplayFunc(home1);
							sel=1;
							break;
		case GLUT_KEY_DOWN:
							glutDisplayFunc(home2);
							sel=2;
							break;
		case GLUT_KEY_LEFT:
							xm=xm-6.0;
							printf("%f\n",xm);
							break;
		case GLUT_KEY_RIGHT:
							xm=xm+6.0;
							printf("%f\n",xm);
						/*	b=(rand()%150)+50;
							printf("%f\n",b);*/
							break;

								}
}
//-------------------------------------------------------------------------------------- display game -------------------
void display1()
{

    glClear(GL_COLOR_BUFFER_BIT);
    // glClearColor(0.847059 , 0.74902 , 0.847059,1.0);
        //glClearColor(0.5, 0.35, 0.05,1.0);
    game();
    glutSwapBuffers();
    glutPostRedisplay();
    glFlush();
}
//-------------------------------------------------------------------------------------- display first page----------------
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    firstpage();
    glutSwapBuffers();
    glutPostRedisplay();
    glFlush();
}
//----------------------------------------------------------------------------------------- my key -------------------------

//--------------
void mykey(unsigned char key, int x, int y)
{
    if (key=='q' || key=='Q')
        exit(0);
    else if(key=='i' || key=='I')
        glutDisplayFunc(instructions);
    else if(key=='h' || key=='H')
        glutDisplayFunc(home);
    else if(key==13)
    {
        if(sel==1)
        {
            glutDisplayFunc(display1);
        }
        else if(sel==2)
        {
            glutDisplayFunc(instructions);
        }
        else
            printf("wrong option");
    }
    else if(key=='p' || key=='P')
    {
        glutDisplayFunc(display1);
    }
    else
        printf("\n\n you pressed %c \n\n",key);
}
//------------------------------------------------------------------------------------------- int main() -----------------------
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(900,700);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutCreateWindow("OpenGL");
    glutDisplayFunc(display);
    glutKeyboardFunc(mykey);
    glutSpecialFunc(SpecialInput);
    gluOrtho2D(0,640,0,640);
   // traps1();
    // glClearColor(0.5,0.7,0.5,1.0);
    //glClearColor( 0.623529 , 0.623529 , 0.372549,1.0);
    glutMainLoop();
    return 0;
}

