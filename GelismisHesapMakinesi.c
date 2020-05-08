#include <stdio.h>
#define x 10
int main()
{
    int i,j;
   printf("%4c",'I');

   for(i=1;i<=x;i++){
       printf("%4d",i);
   }
   printf("\n");
    printf("-----");

   for(i=1;i<=x;i++){
       printf("----");
   }
   printf("\n");
   
   for(i=1;i<=x;i++){
       printf("%4d\n",i);
       for(j=1;j<=x;j++){
           printf("%4d",i*j);
           
       }
       printf("\n");
   }
   return 0;
}
