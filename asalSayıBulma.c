#include <stdio.h>

int main()
{
  int sayı;
  int durum = 1;

 printf("Sayı giriniz :");              scanf("%d",&sayı);

 for(int i=2;i<sayı;++i)
 {
  if(sayı%i==0)
  {
     durum = 1;
     break;
 }
 else{
  durum = 0;
}
}
if(durum == 0) printf("Girdiginiz sayı asaldır");
if(durum == 1) printf("Girdiniz sayı asal degildir");

 return 0;
}
 
