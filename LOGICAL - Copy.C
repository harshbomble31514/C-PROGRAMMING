//code for logical operators
#include <stdio.h>
int main() {
 int a,b;
 a=25;
 b=5;
 if(a<b && b>10)//logical AND example
 printf("a is greater than b && b is less than 10\n");
 else
 printf("condition not satisfied\n");
 
 if(a>b||b==5)//logical OR example
 printf("a is greater than b || b is equal to 5\n");
 else
 printf("condition not satisfied\n");
 
 if(!a)//logical NOT example
 printf("a is 20\n");
 else
 printf("a is not 20\n");
 

    return 0;
}