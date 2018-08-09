#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>

void main()
{
  int gd=DETECT,gm;
  int c,i,j,p,q,x,y,k,m,flag,n,z,t;
  int pt[]={410,400,450,460,560,460,590,400,410,400};
  int pt1[]={447,455,450,460,560,460,562,455,445,455};
  int pt2[]={0,460,5,455,20,420,40,450,100,445,120,410,125,420,140,450,180,455,0,460};

  initgraph(&gd,&gm,"c:\\turboc3\\bgi");

  //first page
  c=0;
  settextstyle(10,HORIZ_DIR,2);
  while(!kbhit())
  {
  for(c=0;c<16;c++)
  {
  setcolor(c);
  outtextxy(220,50,"WELCOME");
  outtextxy(80,250,"This Is Computer Graphics Project");
  outtextxy(80,330,"Press Any Key To See Project");
  }
  }
  getch();


  y=getmaxy()/2;
  t=getmaxy()-27;
  i=0;   p=0;   q=0;   j=0;
  z=y-5;
  flag=0;
  setbkcolor(1);
  setcolor(YELLOW);

  while(!kbhit())
  {
    //bird body
    line(0+i,y+20,0+i,y-20);
    line(0+i,y+20,20+i,y);
    line(0+i,y-20,20+i,y);
    line(20+i,y,30+i,y);
    ellipse(80+i,y,10-p,350+p,50,10);
    ellipse(80+i,y,10-p,350+p,30,10);
    ellipse(80+i,y,10-p,350+p,10,10);
    line(130+i,y-12,130+i,y+1);
    line(125+i,y-20,125+i,y-5);

    //beak
    line(135+i,y-18,140+i,y-5);
    line(133+i,y-14,140+i,y-5);

    //small wing
    line(35+i,y+15,55+i,y+10);
    line(40+i,y+20,55+i,y+10);
    if(flag==0)
	p=p+2;
    if(flag==1)
	p=p-2;

   //head
   setcolor(GREEN);
   setfillstyle(SOLID_FILL,GREEN);
   circle(130+i,y-18,6);
   floodfill(130+i,y-18,GREEN);

   //eye
   for(c=0;c<15;c++)
   {
   setcolor(c);
   setfillstyle(SOLID_FILL,c);
   circle(130+i,y-18,2);
   floodfill(130+i,y-18,c);
   }

   setcolor(8);
   setfillstyle(SOLID_FILL,8);
   fillpoly(5,pt1);

   setcolor(GREEN);
   setfillstyle(SOLID_FILL,GREEN);
   fillpoly(10,pt2);

   //stone
   if(z<=t)
   {
   setcolor(BROWN);
   setfillstyle(SOLID_FILL,BROWN);
   circle(500,z+=3,5);
   floodfill(500,z+=3,BROWN);
   }
   else if(z>t)
   {

   setcolor(c);
   setfillstyle(SOLID_FILL,c);
   circle(500,z,5);
   floodfill(500,z,c);
   c++;
   fillpoly(5,pt);
   }

   //wheather
   line(60+i,y-25,30+i,y-45+j);
   line(60+i,y-25,60+i,y-10+j);
   line(30+i,y-45+j,100+i,y-25);
   line(100+i,y-10+j,100+i,y-25);
   line(60+i,y+25,30+i,y+45+q);
   line(60+i,y+25,60+i,y+10+q);
   line(30+i,y+45+q,100+i,y+25);
   line(100+i,y+25,100+i,y+10);
   i=i+3;
   if(i>=638)
       i=0;
  if(flag==0)
       j=j-2,q=q+2;
  if(flag==1)
      j=j+2,q=q-2;
  if(j<=-10)
      flag=1;
  else if(j>=0)
     flag=0;
  delay(100);
  cleardevice();

  //pot
  setcolor(5);
  setfillstyle(SOLID_FILL,5);
  line(450,460,560,460);
  line(450,460,410,400);
  line(590,400,560,460);
  line(410,400,440,350);
  line(590,400,560,350);
  ellipse(500,350,40,15,60,15);

 }
 getch();

 //project member info
 cleardevice();
 c=0;
 settextstyle(4,HORIZ_DIR,3);
 while(!kbhit())
 {
 setcolor(c);
 outtextxy(20,50,"This Project Is Made By Kamlesh Gupta And Team");
 outtextxy(20,90,"Under prof. Pratap Nair");
 outtextxy(20,130,"Group Member Name");
 outtextxy(90,170,"Kamlesh Gupta : CO23 ");
 outtextxy(90,210,"Rohit Gharal : CO19");
 outtextxy(90,250,"Harshad Magam : CO45");
 c++;
 }
 getch();

 //ending
 cleardevice();
 c=0;
 while(!kbhit())
 {
 settextstyle(4,HORIZ_DIR,6);
 for(i=0;i<getmaxx();i++)
 {
 setcolor(c);
 outtextxy(50+i,90,"Thank You");
 cleardevice();
 c++;
 }
 }
 getch();

 closegraph();
}
