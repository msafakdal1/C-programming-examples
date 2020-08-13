#include <stdio.h>
#include <limits.h>
#define BOYUT 7

void average(int a[] , int size);
void median(int a[] , int size);
void mode(int a[] , int size);
void bubleSort(int a[]  , int size);

int main()
{
 int dizi[BOYUT] = {1,2,5,6,7,7,7};
 
  printf("Dizi elemanları aritmetik ortalaması");
  
  puts("");
  puts("");  
   
  average(dizi,BOYUT);
  
  puts(""); 
  puts(""); 
 
 printf("Dizini ortanca değeri");
   
 puts("");
 puts("");  
    
 median(dizi,BOYUT);
 
 puts("");
 puts("");
 
 printf("Dizinin en çok tekrar eden değeri");
  puts("");
  puts("");

 mode(dizi,BOYUT);
  
}

void average(int a[] , int size)
{
  double  toplam = 0;
 
 for(int i=0;i<BOYUT;++i)
 {
   toplam += a[i];  
 } 
  printf("Average : %f",(double)toplam/BOYUT);
}
void bubleSort(int a[] , int size)
{
  int gecici; 
   
  for(int i=0;i<BOYUT;++i)
  {
    for(int j=0;j<BOYUT;++j)
    {
       if(a[i]>a[i+1])
       {
   	  gecici = a[i+1];
          a[i+1] = a[i];
          a[i] = gecici;
               
       }
   
    }
       
  } 
  for(int i=0;i<BOYUT;++i)
  {
    printf("%d\n",a[i]);    
  }
 
}
void median(int a[] , int size)
{   
  int ortanca;
  int max = INT_MIN;
  int min = INT_MAX;
  
 for(int i=0;i<BOYUT;++i)
 {
   if(a[i]>max)
   {
     max = a[i]; 
   } 
    if(min>a[i])
    {
      min = a[i];   
    }
 }
  ortanca = (max + min)/2;
 
  
 printf("Ortanca : %d",a[ortanca -1]);
  
}
void mode(int a[] , int size)
{
  int max = 0;
  
  int frekans[7] = {0};
   
  for(int i=0;i<BOYUT;++i) 
  {
    ++frekans[a[i]];   
  } 
   for(int i=1;i<=7;++i) 
   {
      if(frekans[i]>max)
      {
          max = i;  
       }    
   }
   
    printf("Frekans : %d",max);
  
   puts("");
   
}
