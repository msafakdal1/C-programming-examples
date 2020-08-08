#include <stdio.h>

int main()
{
  long values1 , values2;

  values1 = 200000;

  long *lPtr;

 lPtr = &values1;


 printf("%ld",*lPtr);

 puts("");

  values2 = *lPtr;

  printf("%ld",values2);

   puts("");

   printf("%p",&values1);

   puts("");

  printf("%p",lPtr);

  return 0;
}
          
