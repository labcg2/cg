#include <graphics.h> 
  
int main() 
{ 
    
    int gd = DETECT, gm; 


    int x, y; 
    int start_angle; 
    int end_angle; 
    int x_rad; 
    int y_rad; 
  printf("enter x and y");
scanf("%d%d",&x,&y);
printf("enter start and end angle");
scanf("%d%d",&start_angle,&end_angle);
printf("enter x and y rad");
scanf("%d%d",&x_rad,&y_rad);
initgraph(&gd,&gm,"");  
    ellipse(x, y, start_angle, end_angle, x_rad, y_rad); 
  
    getch(); 
  

    closegraph(); 
  
    return 0; 
} 

