static int winvalue=0;int score1=0;
void home1()
{
	glClear(GL_COLOR_BUFFER_BIT);
		//glColor3d(1.0 , 0.498039 , 0.0);
		//glColor3d(0.91 , 0.76 , 0.65);
		glColor3d(0.439216 , 0.858824 , 0.858824);
		sq(0,0,700,700);
		glColor3d(0.91 , 0.76 , 0.65);
		sq(40,100,600,600);
		//glColor3d(1.0 , 0.498039 , 0.0);
		//glColor3d(0.91 , 0.76 , 0.65);
		glColor3d(0.439216 , 0.858824 , 0.858824);
		sq(200,510,450,560);
		char heading1[]="HOME";
		char s11[]="PLAY NOW!";
		char s31[]="INSTRUCTIONS";
		glColor3d(0.0,0.1,0.5);
		ds(heading1,300,530);
		//glColor3d(1.0 , 0.498039 , 0.0);
		//glColor3d(0.91 , 0.76 , 0.65);
		glColor3d(0.439216 , 0.858824 , 0.858824);
		sq(250,380,400,430);
		glColor3d(0.0,0.1,0.5);
		ds(s11,280,400);
		glColor3d(0.0,0.1,0.5);
		ds(s31,270,360);
	glutSwapBuffers();
	glutPostRedisplay();
	glFlush();
}
void home2()
{
	glClear(GL_COLOR_BUFFER_BIT);
		//glColor3d(1.0 , 0.498039 , 0.0);
		//glColor3d(0.91 , 0.76 , 0.65);
		glColor3d(0.439216 , 0.858824 , 0.858824);
		sq(0,0,700,700);
		glColor3d(0.91 , 0.76 , 0.65);
		sq(40,100,600,600);
		//glColor3d(1.0 , 0.498039 , 0.0);
		glColor3d(0.439216 , 0.858824 , 0.858824);
		sq(200,510,450,560);
		char heading1[]="HOME";
		char s11[]="PLAY NOW!";
		char s31[]="INSTRUCTIONS";
		glColor3d(0.0,0.1,0.5);
		ds(heading1,300,530);
		glColor3d(0.0,0.1,0.5);
		ds(s11,280,400);
		//glColor3d(1.0 , 0.498039 , 0.0);
		//glColor3d(0.91 , 0.76 , 0.65);
		glColor3d(0.439216 , 0.858824 , 0.858824);
		sq(250,340,400,390);
		glColor3d(0.0,0.1,0.5);
		ds(s31,270,360);
	glutSwapBuffers();
	glutPostRedisplay();
	glFlush();
}
void home()
{
	glClear(GL_COLOR_BUFFER_BIT);
		//glColor3d(1.0 , 0.498039 , 0.0
              glColor3d(0.439216 , 0.858824 , 0.858824);
              		sq(0,0,700,700);
		//glColor3d(0.8,0.8,0.8);0.439216 , 0.858824 , 0.858824
		//glColor3d(0.439216 , 0.858824 , 0.858824);
		glColor3d(0.91 , 0.76 , 0.65);//peach

		sq(40,100,600,600);
		//glColor3d(1.0 , 0.498039 , 0.0);
		//glColor3d(0.91 , 0.76 , 0.65);
		glColor3d(0.439216 , 0.858824 , 0.858824);
		sq(280,510,370,550);
		char heading1[]="HOME";
		char s11[]="PLAY NOW!";
		char s31[]="INSTRUCTIONS";
		//glColor3d(1.0 , 0.498039 , 0.0);
		glColor3d(0.439216 , 0.858824 , 0.858824);
		//glColor3d(0.91 , 0.76 , 0.65);
		sq(200,510,450,560);
		glColor3d(0.0,0.1,0.5);
		ds(heading1,300,530);//home
		glColor3d(0.0,0.1,0.5);
		ds(s11,280,400);
		glColor3d(0.0,0.1,0.5);
		ds(s31,270,360);

	glutSwapBuffers();
	glutPostRedisplay();
	glFlush();
}
void lpage()
{
    glClear(GL_COLOR_BUFFER_BIT);
    flag=0;
    glColor3d(0.439216 , 0.858824 , 0.858824);
		sq(0,0,700,700);//yellow
		glColor3d(0.91 , 0.76 , 0.65);
		sq(40,100,600,600);//grey
		char heading11[]="YOU LOST!!";
		char s111[]="BETTER LUCK NEXT TIME!";
		char s411[]="PRESS Q TO QUIT";
		glColor3d(0.0,0.1,0.5);
		ds(heading11,200,430);
		glColor3d(0.0,0.1,0.5);
		ds(s111,200,400);
		ds(s411,200,260);
		sq(200,380,400,280);
	/*	char s123[]="PRESS P TO PLAY AGAIN";
		ds(s123,200,230);*/
        glColor3d(1,1,1);
        char s412[10];
		sprintf(s412,"SCORE=%d",score1);
		ds(s412,240,320);
        glutSwapBuffers();
        glutPostRedisplay();
        glFlush();

}

//-----------------------------------------------------------------------------------------first page-------------------
void firstpage()
{
   // glClearColor(0.22 , 0.69 , 0.87,1);
    //glClearColor(0.847059 , 0.847059 , 0.74902,1);//permanent color, dont change it
glClearColor(0.91 , 0.76 , 0.65,1);//peach color
	char cname[]="Gopalan College of Engineering and Management";
	char deptname[]="Department of Computer Science and Engineering";
	char title[]="Tile of mini project:\t";
	char projname[]="GET THE CHEESE \t";
	char by[]="By";
	char name[]="Name:  SNEHA V TIWARI ";
	char usn[]="USN: 1GD17CS045";
	char name1[]="Name: ASMA KHANNUM";
	char usn1[]="USN: 1GD17CS004";
	char g[]="Guided by";
	char gname[]="Manju V";
	char inst[]="Press h for home";
	glColor3d(0,0,1);
	ds(cname,220,600);
	ds(deptname,215,530);
	ds(title,270,450);
	ds(projname,270,430);
	ds(by,290,330);
	ds(name,100,300);
	ds(usn,100,280);
	ds(name1,380,300);
	ds(usn1,380,280);
	ds(g,280,180);
	ds(gname,280,160);
	ds(inst,275,70);

}
//-------------------------------------------------------------------------------------------instruction page---------------
void instructions()
{
	glClear(GL_COLOR_BUFFER_BIT);

		// glClearColor(1.0 , 0.498039 , 0.0,1.0);
		glColor3d(0.439216 , 0.858824 , 0.858824);
		sq(0,0,700,700);
		glColor3d(0.91 , 0.76 , 0.65);
		sq(40,100,600,600);
		glColor3d(0.439216 , 0.858824 , 0.858824);
		sq(260,510,400,550);
		char heading[]="INSTRUCTIONS";
		char s1[]="1. Use arrow keys to move the mouse left and right";
		char s2[]="2. If you get trapped you will lose";
		char s3[]="3. If you've crossed all traps, go towards the cheese to win";
		char s4[]="Press h to go back!";
		glColor3d(0.0,0.1,0.5);
		ds(heading,280,525);
		glColor3d(0.0,0.1,0.5);
		ds(s1,150,400);
		glColor3d(0.0,0.1,0.5);
		ds(s2,150,380);
		glColor3d(0.0,0.1,0.5);
		ds(s3,150,360);
		glColor3d(0.0,0.1,0.5);
		ds(s4,150,300);

	glutSwapBuffers();
	glutPostRedisplay();
	glFlush();
}
void lost(int count)
{

glutDisplayFunc(lpage);
}

//--------------------------------------------------------------------------------------------- win page -------------------------
void win(int winvalue)
{
    flag=0;
    if (winvalue==1)
	{
		glColor3d(0.439216 , 0.858824 , 0.858824);
		sq(0,0,700,700);
		glColor3d(0.91 , 0.76 , 0.65);
		sq(40,100,600,600);
		char heading12[]="CONGRATULATIONS!!";
		char s112[]="YOU WON!";
		//char s113[]="PRESS P TO PLAY AGAIN";
        char s412[]="PRESS Q TO QUIT";
		//glColor3d(1.0,1.1,1.5);
		glColor3d(0.0,0.1,0.5);
		ds(heading12,200,430);
		glColor3d(0.0,0.1,0.5);
		ds(s112,200,400);
		glColor3d(0.0,0.1,0.5);
		ds(s412,200,260);
		//ds(s113,200,230);
		sq(200,380,400,280);
        glColor3d(1,1,1);
        char s413[10];

		sprintf(s413,"SCORE=%d",score1);
		ds(s413,240,320);
	}
}


