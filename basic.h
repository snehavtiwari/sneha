int k;static int count=0,flag;

static float ym,xm,xt,yt,value,yvalue,xc,yc,xval,yva,x3,y3,x4,y4;
//--------------------------------------------------------------------------------------- triangle ---------------------------
void tr(float x1t,float y1t,float x2t,float y2t,float x3t,float y3t)
{
	glBegin(GL_POLYGON);
	glVertex2d(x1t,y1t);// where x1=x4(x3); y1=y2(y3); x2=x3(x4); y3=y3(y4);
	glVertex2d(x2t,y2t);
	glVertex2d(x3t,y3t);
	glEnd();
}
//---------------------------------------------------------------------------------------- square---------------------------
void sq(float x3,float y3,float x4,float y4)
{
	glBegin(GL_POLYGON);
	glVertex2d(x3,y3);// where x1=x4(x3); y1=y2(y3); x2=x3(x4); y3=y3(y4);
	glVertex2d(x4,y3);
	glVertex2d(x4,y4);
	glVertex2d(x3,y4);
	glEnd();
}
//---------------------------------------------------------------------------------------- line -----------------------------
void ln(int ptsz,int x,int y)
{
	glPointSize(ptsz);
	glBegin(GL_POINTS);
	glVertex2d(x,y);
	glEnd();
}
//--------------------------------------------------------------------------------------- circle ---------------------------
void circle(float x,float y,float r)
{
	glBegin(GL_POLYGON);
	for(k=0;k<=360;k++)
	{
		float deginrad=k*(3.142852104/180);
		glVertex2f((x+r*cos(deginrad)),(y+r*sin(deginrad)));
	}
	glEnd();
}
//----------------------------------------------------------------------------------------- oval -----------------------------
void oval(float x,float y)
{
	int i;
	float theta,r;
	r=10;
	glClearColor(0,0,0,0);
	glColor3d(1,1,1);
	glBegin(GL_POLYGON);
	for(i = 0; i <= 360; i++)
	{
	        theta = (3.1415926f/180) * i ;
	        x = r * cos(theta);
	        y = r * sinf(theta);
	        glVertex2f(x + 250, y + 650);
	}
	glEnd();
}
//---------------------------------------------------------------------------------- display string------------------------
void ds(char a[],float xval,float yval)
{
	glRasterPos2d(xval,yval);
	for(k=0;k<strlen(a);k++)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,a[k]);
	}
}
