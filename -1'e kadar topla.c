#include <stdio.h>

int main()
{
    int sayı;
    int toplam=0;

   while(sayı!=-1){
       printf("Sayı giriniz:");     scanf("%d",&sayı);
       toplam+=sayı;
   }
   
   printf("Toplam:%d",toplam);
   return 0;
}


