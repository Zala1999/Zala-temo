  
#include<iostream> 
using namespace std; 
  

#define N 0 
#define E 1 
#define S 2 
#define W 3 
  
 
bool isCircular(char path[]) 
{ 
  
  int x = 0, y = 0; 
  int dir = N; 
  
  
  for (int i=0; path[i]; i++) 
  { 
      
      char move = path[i]; 
  
      if (move == 'R') 
        dir = (dir + 1)%4; 
      else if (move == 'L') 
        dir = (4 + dir - 1)%4; 
  
      
      else 
      { 
         if (dir == N) 
            y++; 
         else if (dir == E) 
            x++; 
         else if (dir == S) 
            y--; 
         else 
            x--; 
      } 
  } 
  

  return (x == 0 && y == 0); 
} 
  

int main() 
{ 
    char path[] = "GLGLGLG"; 
    if (isCircular(path)) 
      cout << "Given sequence of moves is circular"; 
    else
      cout << "Given sequence of moves is NOT circular"; 
}
