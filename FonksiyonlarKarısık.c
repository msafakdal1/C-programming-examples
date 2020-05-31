#include <stdio.h>

int ikininkatı(int *a){
    if(*a%2==0){
        return 1;
    }
    else{
        return 0;
    }
}
int ucunkat(int *a){
    if(*a%3==0){
        return 1;
    }else{
        return 0;
    }
}
int main()
{
    int x,sonuc1,sonuc2;

    printf("x sayısını giriniz:");              scanf("%d",&x);

    sonuc1 = ikininkatı(&x);

    if(sonuc1){
        printf("Sayı çifttir\n");
    }else{
        printf("Sayı tektir\n");
    }
    sonuc2 = ucunkat(&x);

    if(sonuc2){
        printf("Sayı 3'e bolunur\n");
    }
    else{
        printf("Sayı 3'e bolunmez\n");
    }
    if(sonuc1 && sonuc2){
        printf("6 'nın katıdır");
    } else{
        printf("6 ' nın katı değildir");
    }
    return 0;
}
