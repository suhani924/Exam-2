#include<stdio.h>

int main() 
{
    int i, j;
    for(i = 5; i >= 1; i -= 1)
  {
    for(j = 5; j <= i * 5; j += 5) 
    {
         printf("%d ", j);
    }
    printf("\n");
  }
    
    return 0;
}
