#include <stdio.h>

int main()
{
 int  number , counter=1;

 printf("Enter the a number");    scanf("%d",&number);


 while(number>=10)
{
 number/=10;

 ++counter;
}
 printf("The number is %d digits : ",counter);

 return 0;
}
