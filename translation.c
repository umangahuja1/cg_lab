#include<graphics.h> 
  
void translateRectangle ( int P[][2], int T[]) 
{ 
    int gd = DETECT, gm; 
    initgraph (&gd, &gm, "");  
    rectangle (P[0][0], P[0][1], P[1][0], P[1][1]); 
  
    P[0][0] = P[0][0] + T[0]; 
    P[0][1] = P[0][1] + T[1]; 
    P[1][0] = P[1][0] + T[0]; 
    P[1][1] = P[1][1] + T[1]; 
  
    setcolor (1); 
    rectangle (P[0][0], P[0][1], P[1][0], P[1][1]); 
    getch();
} 
  
int main() 
{ 
    int P[2][2] = { {150, 80} , {225, 180} }; 
    int T[] = {30, 50}; 
    translateRectangle (P
    , T); 
    return 0; 
}  