#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<graphics.h>
int lines();
void seven();
void main()
{
int gd= DETECT  ,gm;
char u[11],w[10],v[11]="JUNGLEBOOK";
char e[7],g[16],h[15],y[10]="AVENGERS";
char f[7]="AVATAR",j[15]="OM_SHANTI_OM",k[16]="BAJIRAO_MASTANI";
int a,b,c,d,count=0,i,z=0,m,n,o,p,q=0,s,n1,n2;
initgraph (&gd,&gm,"c:\\turboc3\\bgi");
setbkcolor(RED);
setcolor(15);
settextstyle(0,HORIZ_DIR,3);
outtextxy(200,100,"MEMORY GAME");
printf("\n\n\n\n Enter any key to play the game....");

printf("\n\n\n\n\n");
printf("\n\t");
printf("\t There are five levels in it \n");
printf("        Level 1:Guess how many  color boxes are there...\n");
printf("        Level 2:Remembaring the number of lines...\n");
printf("        level 3:Guess the movie name...\n");
printf("        Level 4:Tricky Questions.... \n");
printf("        Level 5:Know the power of your brain.......\n");

getch();
cleardevice();
setbkcolor(5);
setcolor(WHITE);
settextstyle(0,HORIZ_DIR,2);
outtextxy(50,150,"Welcome to level first......");
settextstyle(0,HORIZ_DIR,1);
outtextxy(50,190,"How to play this game:");
outtextxy(50,230,"Give at least one correct answer to crack the level...");
printf("\n\n\n\n\n\n\n\nTap any key to play the game......");
 getch();
 cleardevice();
 setbkcolor(0);
setfillstyle(1,4);
bar(250,150,300,200);
setfillstyle(1,14);
bar(300,150,350,200);
setfillstyle(1,4);
bar(350,150,400,200);

setfillstyle(1,14);
bar(250,200,300,250);
setfillstyle(1,4);
bar(300,200,350,250);
setfillstyle(1,14);
bar(350,200,400,250);
setfillstyle(1,4);
bar(250,250,300,300);
setfillstyle(1,14);
bar(300,250,350,300);

setfillstyle(1,4);
bar(350,250,400,300);

delay(5000);
cleardevice();
settextstyle(0,HORIZ_DIR,2);
outtextxy(50,50,"Enter how many red ");
outtextxy(50,100," color boxes are present......");
printf("\t\t");
scanf("%d",&a);
getch();
cleardevice();
settextstyle(0,HORIZ_DIR,2);
outtextxy(50,50,"Enter how many yellow ");
outtextxy(50,100,"color boxes are present......");
printf("\t\t");
scanf("%d",&b);
if(a==5&&b==4)
{
settextstyle(0,HORIZ_DIR,2);
outtextxy(100,200,"YOU WIN");
count=1;
}
else if((a!=5&&b==4)||(a==5&&b!=4))
{
outtextxy(100,200,"YOU WIN");
count=1;
}
else
{
outtextxy(100,200,"YOU LOOSE");
}

if(count==1)
{
getch();
cleardevice();
count=lines();
}

if(count==2)
{
getch();
cleardevice();
printf("Enter any key to play the game\n");
settextstyle(0,HORIZ_DIR,2);
outtextxy(100,100,"Welcome to the third level.......");
settextstyle(0,HORIZ_DIR,1);
outtextxy(100,150, "In this level you have to answer the tricky questions");
outtextxy(100,200," of questions shown in the next screen");
outtextxy(100,250," Answer at least any three questions");
getch();
cleardevice();

settextstyle(0,HORIZ_DIR,1);
outtextxy(50,50,"Which city has 3/9 of chicken,2/3 of cat and 1/2 of goat?");
outtextxy(70,90,"1.Candon");
outtextxy(70,110,"2.Taipei");
outtextxy(70,130,"3.ROM");
outtextxy(70,150,"4.Chicago");
scanf("%d",&s);
if(s==4)
{
outtextxy(50,180,"Correct Answer");
q++;
}
else
{
outtextxy(50,180,"Wrong Answer");
}
outtextxy(50,210,"A pencil and an a eraser cost $1.10 together.");
outtextxy(70,230,"The pencil cost $1.00 more than eraser ");
outtextxy(70,250,"how much does the cost of eraser ? ");
outtextxy(70,270,"1.$0.05");
outtextxy(70,290,"2.$0.10");
scanf("%d",&p);
if(p==1)
{
outtextxy(50,310,"Correct Answer");
q++;
}
else
{
outtextxy(50,310,"Wrong Answer");
}
getch();
cleardevice();
settextstyle(0,HORIZ_DIR,1);
outtextxy(50,50,"Three women each have two daughter are having dinner. ");
outtextxy(70,80,"What's the least number of seats needed?");
outtextxy(70,110,"1.zero");
outtextxy(70,130,"2.three");
outtextxy(70,150,"3.six");
outtextxy(70,170,"4.seven");
scanf("%d",&o);
if(o==4)
{
outtextxy(50,190,"Correct Answer");
q++;
}
else
{
outtextxy(50,190,"Wrong Answer");
}
settextstyle(0,HORIZ_DIR,1);
outtextxy(50,220,"You are getting engaged.Your fiance has hidden the ");
outtextxy(70,240,"engagement ring.If only one statement is true,");
outtextxy(70,280,"where is the ring?");
outtextxy(70,300,"1.The ring is in this box");
outtextxy(70,320,"2.The ring is not in this box");
outtextxy(70,340,"3.The ring is not in box 1");

scanf("%d",&n1);
if(n1==2)
{
outtextxy(50,360,"Correct Answer");
q++;
}
else
{
outtextxy(50,360,"Wrong Answer");
}
getch();
cleardevice();

settextstyle(0,HORIZ_DIR,1);
outtextxy(50,50,"Which statement is true? ");
outtextxy(70,90,"1.One statement here is false");
outtextxy(70,110,"2.Two statementes here are false");
outtextxy(70,130,"3.Three statements here are false");
outtextxy(70,150,"4.Four statements here are false");
scanf("%d",&n2);
if(n2==3)
{
outtextxy(50,190,"Correct Answer");
q++;
}
else
{
outtextxy(50,190,"Wrong Answer");
}


if(q>=3)
{ getch();
cleardevice();
setbkcolor(4);
setcolor(15);
settextstyle(0,HORIZ_DIR,2);
outtextxy(50,150,"Welcome to the forth level...");
outtextxy(50,280,"Guess the correct movie name") ;
getch();
cleardevice();
settextstyle(0,HORIZ_DIR,1);
outtextxy(50,10,"Note:Enter movie name in upper case" );
outtextxy(50,30,"and include underscore if name has space" );
settextstyle(0,HORIZ_DIR,2);
outtextxy(200,80,"ONELOKJGBU");
printf("\n\n\n\n\n\n\n\n\n");
printf("\n\n\n\n\n\n\n\n\n");
scanf("%s",u);
d=strcmp(u,v);

for(i=0;i<=2;i++)
{
if(d==0)
{
break;
}
printf("Wrong answer\n");
if(i<2)
{
scanf("%s",u);
d=strcmp(u,v);

}
}
if(d==0)
{
settextstyle(0,HORIZ_DIR,1);
outtextxy(50,100,"Correct Answer");
z++;
}

settextstyle(0,HORIZ_DIR,2);
outtextxy(200,130,"EEGSARVN");
scanf("%s",w);
d=strcmp(w,y);
for(i=0;i<=2;i++)
{
if(d==0)
{
break;
}
printf("Wrong answer\n");
if(i<2)
{
scanf("%s",w);
d=strcmp(w,y);
}
}
if(d==0)
{
settextstyle(0,HORIZ_DIR,1);
z++;
outtextxy(50,150,"Correct Answer");

}
settextstyle(0,HORIZ_DIR,2);
outtextxy(200,180,"TAVARA");
scanf("%s",e);
d=strcmp(f,e);
for(i=0;i<=2;i++)
{
if(d==0)
{
break;
}
printf("Wrong answer\n");
if(i<2)
{
scanf("%s",e);
d=strcmp(f,e);
}
}
if(d==0)
{
settextstyle(0,HORIZ_DIR,1);
z++;
outtextxy(50,200,"Correct answer");
}
settextstyle(0,HORIZ_DIR,2);
outtextxy(200,230,"MANMSHAOTIO");
scanf("%s",h);
d=strcmp(j,h);
for(i=0;i<2;i++)
{
if(d==0)
{
break;
}
printf("Wrong answer\n");
if(i<2)
{
scanf("%s",h);
d=strcmp(j,h);
}
}
if(d==0);
{
settextstyle(0,HORIZ_DIR,1);
z++;
outtextxy(50,250,"CORRECT ANSWER");
}
settextstyle(0,HORIZ_DIR,2);
outtextxy(200,280,"BAROSAMAJIATANI");
scanf("%s",g);
d=strcmp(g,k);
for(i=0;i<=2;i++)
{
if(d==0)
{
break;
}
printf("WRONG ANSWER");
if(i<2)
{
scanf("%s",g);
d=strcmp(g,k);
}
}
if(d==0)
{
settextstyle(0,HORIZ_DIR,1);
z++;
outtextxy(50,300,"CORRECT ANSWER");
}

}
if(z>=3)
{
 getch();
cleardevice();
seven();
}



 }
getch();
closegraph();
}
int lines()
{
int gd=DETECT,gm,c,count;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");

setbkcolor(YELLOW);
settextstyle(0,HORIZ_DIR,2);
setcolor(RED);
printf("\t");
printf("Enter any key to play the game\n......");
outtextxy(50,150,"Welcome to the second level.......");
settextstyle(0,HORIZ_DIR,1);
outtextxy(70,220, "In this level you have to remember the number");
outtextxy(50,260," of lines shown in the next screen");

getch();
cleardevice();

line(200,50,500,50);
line(200,100,500,100);
line(200,150,500,150);
line(200,200,500,200);
line(200,250,500,250);
line(200,300,500,300);
line(200,350,500,350);
delay(2000);
cleardevice();
settextstyle(0,HORIZ_DIR,1);
outtextxy(100,100," Enter the no.of lines shown in the last screen...");
 scanf("%d",&c);
if(c==7)
{
count=2;
settextstyle(0,HORIZ_DIR,1);
outtextxy(100,200," you win");

}
else
{
outtextxy(100,200," you loose");
count=0;
}
return count;
getch();
}
void seven()
{
int gd=DETECT,gm,m,n,i;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setbkcolor(12);
printf("\n");
printf("\tEnter any key to play the game.....");
setcolor(15);
settextstyle(0,HORIZ_DIR,2);
outtextxy(50,100,"Welcome to fifth level......");
settextstyle(0,HORIZ_DIR,1);
outtextxy(70,140,"In this level you have to imaging the all the ");
outtextxy(50,160,"possible cases to obtain biggest number");
getch();
cleardevice();


setbkcolor(0);
setcolor(YELLOW);
settextstyle(0,HORIZ_DIR,1);
outtextxy(50,50,"FIFTH LEVEIL");
line(200,100,250,100);
line(197,100,197,150);
line(200,150,250,150);
line(257,150,257,200);
line(200,205,250,205);

line(288,100,338,100);
line(282,102,282,150);
line(282,155,282,200);
line(288,205,338,205);
line(343,102,343,150);
line(343,155,343,200);

line(376,100,426,100);
line(370,102,370,150);
line(370,155,370,200);
line(376,205,426,205);
line(431,102,431,150);
line(431,155,431,200);
line(376,154,426,154);
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
printf("Imagine that we are replacing two machsticks" );
printf(" then enter the biggest possible no.\n");
printf("only three chances are there\n");
scanf("%d",&n);
m=(20000+30000+1181);
for(i=0;i<=2;i++)
{

if(n==m)
{
break;
}
printf("wrong answer\n");
if(i<2)
{
scanf("%d",&n);
}
 }
if(n==m)
{

printf(" you win");
getch();
cleardevice();

setbkcolor(BLUE);
setcolor(15);
settextstyle(0,HORIZ_DIR,3);
outtextxy(150,150,"CONGRATULATION");
outtextxy(170,200,"YOU ARE GENIUS");
}
getch();
}