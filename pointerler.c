#include <stdio.h>
#define SIZE 10

int main()
{
  float numbers[SIZE] = {0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};

 float *nPtr = number[8];

 for(int i = 0;i<SIZE;++i)
 {
  printf("dizi[%d] : %.1f",i,*(nPtr + i));
  puts("");
 }
  puts("");

  printf("%.1f",*(nPtr + 4));

 puts("");

 return 0;
}
