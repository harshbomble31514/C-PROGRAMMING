//code for nested if 
#include <stdio.h>
int main() {
    int x,y,z;
    x=3;
    y=5;
    z=2;
    
    if(x>1)
    printf("x is greater than 1 \n");
    
    if(y=5)
    printf("y is positive\n");
    else
    printf("y is negative\n");
    
    if(z>5)
    if(z=2)
    printf("z is greater than 5 and is 10\n");
    else
    printf("z is not greater than 5 and is not 10\n");
    else
    printf("z is less than 5\n");
  return 0;
}