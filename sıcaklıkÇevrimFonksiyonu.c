#include <stdio.h>


float celcıusDonusum(float);
float fahrenaytDonusum(float);

int main()
{
  printf("Fahrenayt karşılığı\n");

  for(int i=1;i<=100;++i)
  {
     printf("%f",fahrenaytDonusum(i));

    puts("");
  }
  puts("");
  puts("");

  printf("Celcıus karşılığı\n");
  for(int i=32;i<=212;++i){
  printf("%f",celcıusDonusum(i));
  puts("");
}

}
float celcıusDonusum(float donusum){

  auto float  sonuc;

 sonuc = (donusum-  32)/1.8;

 return sonuc;

}
float fahrenaytDonusum(float donusum2){
auto float sonuc;

 sonuc = donusum2 * 1.8 + 32;

 return sonuc;
}
