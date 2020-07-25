#include <stdio.h>
#define BOYUT 10

int aramaTesti(int array[] ,int key , int size);

int main()
{
    int dizi[BOYUT] , search , element;

    for(int i=0;i<BOYUT;++i){
        dizi[i] = i;
    }
    printf("Aramak istediğiniz elemanı giriniz :");     scanf("%d",&search);

    element = aramaTesti(dizi , search , BOYUT);

    if(element == -1){
       puts("Veri içinde böyle bir eleman yoktur");
    }
    else{
        puts("Veri içinde böyle bir eleman var");
    }
}
int aramaTesti(int array[] , int key , int size){
    for(int i=0;i<size;++i){
        if(array[i] == key){
            return i;
        }
    }
    return -1;
}
