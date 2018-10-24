#include <graphics.h> 
#include <stdlib.h> 
#include <stdio.h>  
#include <time.h> 
int main(void) 
{ 
int gd=DETECT,gm; 
int cenx,ceny;
float Pk,a,b,x,y; 
printf("\n\n Enter 'a' and 'b': "); 
scanf("%f%f",&a,&b); 

initgraph(&gd,&gm,"");


cenx=getmaxx()/2; 
ceny=getmaxy()/2; 

Pk=b*b-b*a*a+0.25*a*a; 
x=0; 
y=b; 
putpixel(cenx+x,ceny+y,WHITE);
putpixel(cenx+x,ceny-y,WHITE);
putpixel(cenx-x,ceny+y,WHITE);
putpixel(cenx-x,ceny-y,WHITE);

while (2*x*b*b <= 2*y*a*a) 
{ 
if (Pk<0) 
{ 
x=x+1; 
y=y; 
Pk=Pk+2*x*b*b+3*b*b; 
} 
else 
{ 
x=x+1; 
y=y-1; 
Pk=Pk+2*x*b*b+3*b*b-2*y*a*a+2*a*a; 
} 
putpixel(cenx+x,ceny+y,WHITE);
putpixel(cenx+x,ceny-y,WHITE);
putpixel(cenx-x,ceny+y,WHITE);
putpixel(cenx-x,ceny-y,WHITE);
delay(40); 
} 


Pk=(x+0.5)*(x+0.5)*b*b+(y-1)*(y-1)*a*a-a*a*b*b; 
putpixel(cenx+x,ceny+y,WHITE);
putpixel(cenx+x,ceny-y,WHITE);
putpixel(cenx-x,ceny+y,WHITE);
putpixel(cenx-x,ceny-y,WHITE);
while (y>0)
{
if (Pk>0)
{
x=x;
y=y-1;
Pk=Pk-2*y*a*a+3*a*a;
}
else
{
x=x+1;
y=y-1;
Pk=Pk-2*y*a*a+3*a*a+2*x*b*b+2*b*b;
}
putpixel(cenx+x,ceny+y,WHITE);
putpixel(cenx+x,ceny-y,WHITE);
putpixel(cenx-x,ceny+y,WHITE);
putpixel(cenx-x,ceny-y,WHITE);
delay(40);
}
printf ("\npress any key to exit.");
getch(); 
closegraph(); 
return 0; 
} 
