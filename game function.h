
static float x123,y123;
//---------------------------------------------------------------------------------- game -----------------------
void game()
{
	//glClearColor(0.91 , 0.76 , 0.65,1);//peach color
	//glClearColor(0.623529 , 0.623529 , 0.372549,1);
//glClearColor(0.22 , 0.69 , 0.87,1);
glClearColor(0.00 , 0.00 , 0.61,1);//glColor3d(0.439216 , 0.858824 , 0.858824);

	movetraps();

    char s123[]="you won!!";
    char s456[]="go to the cheese to win!";
	glPushMatrix();
	glTranslatef(0,y123,0);
	glColor3d(1,1,1);
		ds(s123,300,5000);              //home
    glColor3d(1,1,1);
		ds(s456,280,5200);
	glPopMatrix();
	y123=y123-3.5;
	glColor3d(0.13 , 0.37 , 0.31);
		sq(0,0,40,640);
		sq(600,0,640,640);
    glPushMatrix();
	glTranslatef(xm,ym,0);
	glTranslatef(-150,0,0);
		mouse();
	glPopMatrix();
	for(i=0;i<10;i++)
	{//printf("%f\n",xtrap1[i]);
	/*	if(xm<xtrap2[i] && xm<xtrap1[i]  && yt<-264.0 )//&& yt<-518) // || yt<-564.0)// && xt>=xm-100)//)   535,810            ||
		{
			printf("green \n ");                                                       difference is 303,295
			838,1104
			1166,1400
		}*/
if(xm<xrow1[i]+65 && xm>xrow1[i]-100  && ytv<-264 && ytv>-504)
{
          printf("first row \n");i=11;
	lost(count+1);//--------------------------------------first
	break;
  }

		 else if(xm<xrow2[i]+65 && xm>xrow2[i]-100  && ytv<-663.0 && ytv>-904.0)
		{
			printf("second row \n");count++;i=11;
			lost(count+1);
			break;//---------------------------------------second
		}
	    else if(xm<xrow3[i]+65 && xm>xrow3[i]-100 && ytv<-964.0 && ytv>-1200.0 )
		{
			printf("third row \n");count++;i=11;lost(count++);break;//-----------------------------------------third
		}
	    else if(xm<xrow4[i]+65 && xm>xrow4[i]-100  && ytv<-1264.0 && ytv>-1500.0 )
		{
			printf("fourth row \n");count++;i=11;lost(count++);break; //-------------------------------------fourth
		}
		else if(xm<xrow5[i]+65 && xm>xrow5[i]-100  && ytv<-1567.0 && ytv>-1802.0 )
		{
			printf("fifth row \n");count++;i=11;lost(count++);break; //--------------------------------------fifth
		}
		else if(xm<xrow6[i]+65 && xm>xrow6[i]-100  && ytv<-1874.0 && ytv>-2107.0 )
		{
			printf("sixth row \n");count++;i=11;lost(count++);break;//-----------------------------------------sixth
		}
		else if(xm<xrow7[i]+65 && xm>xrow7[i]-100  && ytv<-2163.0 && ytv>-2406.0 )
		{
			printf("seventh row \n");i=11;lost(count++);break;//---------------------------------------seventh
		}
		else if(xm<xrow8[i]+65 && xm>xrow8[i]-100  && ytv<-2462.0 && ytv>-2712.0 )
		{
			printf("eighth row \n");i=11;lost(count++);break;//------------------------------------------eighth
		}
				if(xm<xrow1[i]+65 && xm>xrow1[i]-100  && ytv<-2760 && ytv>-3012)
		{
			printf("nineth row \n");i=11;lost(count++);break;//--------------------------------------nineth
		}

		else if(xm<xrow2[i]+65 && xm>xrow2[i]-100  && ytv<-3076.0 && ytv>-3312.0)
		{
			printf("tenth row \n");i=11;lost(count++);break;//---------------------------------------tenth
		}
	    else if(xm<xrow3[i]+65 && xm>xrow3[i]-100 && ytv<-3376.0 && ytv>-3612.0 )
		{
			printf("eleventh row \n");i=11;lost(count++);break;//-----------------------------------------eleventh
		}
	    else if(xm<xrow4[i]+65 && xm>xrow4[i]-100  && ytv<-3676.0 && ytv>-3912.0 )
		{
			printf("twelfth row \n");i=11;lost(count++);break; //-------------------------------------twelfth
		}
		else if(xm<xrow5[i]+65 && xm>xrow5[i]-100  && ytv<-3976.0 && ytv>-4112.0 )
		{
			printf("thirteenth row \n");i=11;lost(count++);break; //--------------------------------------thirteenth
		}
		else if(xm<xrow6[i]+65 && xm>xrow6[i]-100  && ytv<-4176.0 && ytv>-4412.0 )
		{
			printf("fourteenth row \n");i=11;lost(count++);break;//-----------------------------------------fourteenth
		}
		else if(xm<xrow7[i]+65 && xm>xrow7[i]-100  && ytv<-4476.0 && ytv>-4712.0 )
		{
			printf("fifteenth row \n");i=11;lost(count++);break;//---------------------------------------fifteenth
		}
		else if(xm<xrow8[i]+65 && xm>xrow8[i]-100  && ytv<-4776.0 && ytv>-5012.0 )
		{
			printf("sixteenth row \n");i=11;lost(count++);break;//------------------------------------------sixteenth
		}
		else if( ytv<-5180)
		{
			win(1);break;
		}
		else if(xm>505 || xm<0)
		{
		    printf("out of boundary\n");lost(count);break;
		}
		else

		{
		score1=score1+1;	//printf("continue %d\n",score1);break;
		}
/*for(i=0;i<16;i++)
{*/
    if(ytv==-904.0)//ytv2[i])
                {
                    score1=score1+1;
                    printf("%d\n",score1);break;

                }
}

}
/*void again()
{
glClear(GL_COLOR_BUFFER_BIT);
    if (flag==0)
    {
        glutDisplayFunc(display1);//game();
    }
    glutSwapBuffers();
	glutPostRedisplay();
	glFlush();
}*/
