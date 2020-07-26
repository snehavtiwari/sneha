//float xm;
//--------------------------------------------------------------------------------------- initialize globally -----------------------
static int i,j,sel=0;static int n=0,m=0,score=0;
static float x=300.0,y=100.0,r=40.0,x1[100],ytv,yvalue1=500;
static float ytv1[]={-264 ,-663.0 ,-964.0 ,-1264.0 ,-1567.0 ,-1874.0 ,-2163.0 ,-2462.0 ,
                                                        -2760 ,-3076.0 ,-3376.0 ,-3676.0 ,-3976.0 ,-4176.0 ,-4476.0 ,-4776.0 };

static float ytv2[]={-504,-904.0,-1200.0 ,-1500.0,-1802.0,-2107.0,-2406.0,-2712.0,-3012,-3312.0,-3612.0,-3912.0,
                        -4112.0 ,-4712.0 ,-5012.0 };

 static float xrow[16][3]={200,500,0,100,600,400,150,350,550,75,375,575,
                           200,500,0,100,600,400,150,350,550,75,375,575,
                           200,500,0,100,600,400,150,350,550,75,375,575,
                           200,500,0,100,600,400,150,350,550,75,375,575} ;


static float xrow1[10]={200,500,0};
static float xrow2[10]={100,600,400};
static float xrow3[10]={150,450};
static float xrow4[10]={75,375,575};

static float xrow5[10]={200,500,0};
static float xrow6[10]={100,600,400};
static float xrow7[10]={150,450};
static float xrow8[10]={75,375,575};

static float xrow9[10]={200,500,0};
static float xrow10[10]={100,600,400};
static float xrow11[10]={150,450};
static float xrow12[10]={75,375,575};

static float xrow13[10]={200,500,0};
static float xrow14[10]={100,600,400};
static float xrow15[10]={150,450};
static float xrow16[10]={75,375,575};

//-------------------------------------------------------------------------------------------- lost page ------------------------


//----------------------------------------------------------------------------------------------- traps ------------------------
void trap(float xw,float yw)
{
	glColor3d(0.329412 , 0.329412 , 0.329412);//--------------- base -------
	sq(xw+5,yw-5,xw+105,yw+95);
	tr(xw+100,yw+100,xw+105,yw+95,xw+100,yw+95);
	tr(xw,yw,xw+5,yw-5,xw+5,yw);
	glColor3d(1,1,1);
//glColor3d(0.255 ,0.218 ,0.185);

	sq(xw,yw,xw+100,yw+100);
	glColor3d(0.329412 , 0.329412 , 0.329412);//-------------- wire --------
	sq(xw+5,yw+40,xw+10,yw+90);//left
	sq(xw+5,yw+85,xw+90,yw+90);//top
	sq(xw+85,yw+40,xw+90,yw+90);//right
	sq(xw+5,yw+40,xw+90,yw+43);//bottom
	glColor3d(0.8 , 0.498039 , 0.196078);
	circle(xw+50,yw+87.5,5);
	circle(xw+50,yw+103,5);
	for(i=yw+88;i<=yw+103;i++)
	{
		ln(2,xw+50,i);
	}
	sq(xw+20,yw+35,xw+80,yw+45);
	glColor3d(0 , 0 , 0);float xwval=xw+20;
	for(j=0;j<4;j++)
	{
		for(i=yw+35;i<=yw+45;i++)
		{
			ln(2,xwval,i);
		}xwval=xwval+20;
	}
	glColor3d(1,1,0);//------------------------ cheese ------
	tr(xw+35,yw+30,xw+65,yw+30,xw+47,yw+40);
//	glColor3d(1.0 , 0.498039 , 0.0);
	sq(xw+35,yw+10,xw+65,yw+30);
	glColor3d(0 , 0 , 0);
	for(i=xw+36;i<=xw+64;i++)
	{
		ln(1,i,yw+30);
	}
}
/*void traps1()
{

    glPushMatrix();
	glTranslated(0,ytv,0);
   for(m=0;m<16;m++)
    {
       // if(yvalue1<4800)
        for(n=0;n<3;n++)
        {
           // glTranslated(xrow[i][j],yvalue1,0);
          trap(xrow[m][n],yvalue1);
           printf("%f\t%f\n",xrow[m][n],yvalue1);
        }
        printf("\n\n");

      yvalue1=yvalue1+300.0;
    }
    glPopMatrix();ytv=ytv-0.5;
}*/


void movetraps()
{
cheese();
yc=yc-3.5;
if(yc==-5162)
{
    printf("%f\n",yc);
    yc=yc-0.0;
}//printf("%f\n",ytv);
	glPushMatrix();
	glTranslated(0,ytv,0);
		trap(0,500);//-----------------------------       first row      ------------------
		trap(200,500);
		trap(500,500);

		trap(100,900);//------------------------------      second row      ------------------
		trap(600,900);
		trap(400,900);

		trap(150,1200);// --------------------------------       third row      ------------------
		trap(450,1200);
		//trap(300,1200);

		trap(75,1500);// ---------------------------------       fourth row     ------------------
		trap(375,1500);
		trap(575,1500);

		//white-----------------------------       fifth row      ------------------
		trap(0,1800);
		trap(200,1800);
		trap(500,1800);

		trap(600,2100);	//blue------------------------------      sixth row      ------------------
		trap(100,2100);
		trap(400,2100);

		trap(150,2400);// --------------------------------       seventh row      ------------------
		trap(450,2400);
	//	trap(300,2400);

		trap(75,2700);// ---------------------------------       eighth row     ------------------
		trap(375,2700);
		trap(575,2700);

		trap(0,3000);//-------------------------------------		 nineth row
		trap(200,3000);
		trap(500,3000);

		trap(600,3300);	//blue------------------------------      tenth row      ------------------
		trap(100,3300);
		trap(400,3300);

		trap(150,3600);// --------------------------------       eleventh row      ------------------
		trap(450,3600);

		trap(75,3900);// ---------------------------------       twelfth row     ------------------
		trap(375,3900);
		trap(575,3900);

		trap(0,4100);//------------------------------------ 		thirteenthrow
		trap(200,4100);
		trap(500,4100);

		trap(600,4400);	//blue------------------------------      fourteenth row      ------------------
		trap(100,4400);
		trap(400,4400);

		trap(150,4700);// --------------------------------       fifteenth row      ------------------
		trap(450,4700);

		trap(75,2700);// ---------------------------------       sixteenth row     ------------------
		trap(375,2700);
		trap(575,2700);
	glPopMatrix();
	ytv=ytv-3.5;
	/*for(j=0;j<16;j++)
	{
        for(i=0;i<16;i++)
        {
            if(xm<xrow[j][i] && xm>xrow[j][i]-100  && ytv<ytv1[i] && ytv>ytv2[i])
            {
                printf("hit \n");lost(1);break;//--------------------------------------first
            }
            else if( ytv<-5162 )
            {
                printf("win");win(1);break;
            }
            else
            {
            //	printf("continue \n");
            }
        }
	}*/
for(i=0;i<16;i++)
		{
		  	if(xm>ytv1[i+1] && xm<ytv2[i])
            {

                //score=score+10;
                printf("%d\n",score);
            }



		}
}
