#include <stdio.h>
#define BOYUT 5

int sıralama(int a[] , int keys , int size);

int main()
{
 int dizi[BOYUT] = {1,2,3,4,5};
 int element , anahtar;

 printf("Aranacak anahtarı giriniz :");    scanf("%d",&anahtar);

 element = sıralama(dizi , anahtar , BOYUT);

 if(element != -1)
 {
   printf("%d sayısı bulundu",element);
 }
 else{
        printf("Sayı bulunamadı");
    }
}
int sıralama(int a[] , int keys , int size)
{
  for(int i=0;i<size;++i)
  {
     if(keys == a[i])
     {
        return keys;
     }
  }
     return -1;
}
