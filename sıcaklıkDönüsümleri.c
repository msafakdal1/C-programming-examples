#include <stdio.h>

int main()
{
  int sıcaklık;

  float celsius;

  printf("Fahrenheit\tCelsius\n");
  printf("---------------------\n");

 for(int i=0;i<=212;++i)
 {
  celsius = (float) 5 / 9 *(i -32);

  if(celsius>=0){
   printf("%d\t%+10.3f",i,celsius);
   puts("");
  }
  else{
   printf("%d\t%10.3f",i,celsius);
   puts("");
  }

 }
 return 0;
}
