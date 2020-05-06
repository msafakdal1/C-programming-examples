   #include <stdio.h>

int main()
{
    char karakter,tahmin;
    int puan = 100;

    printf("**********Karakter Tahmin Oyununa Hoşgeldiniz***********");

    do{
        printf("\nBir karakter giriniz:");        scanf("%c",&karakter);
        fflush(stdin);
        printf("Karakter tahmin ediniz:");       scanf("%c",&tahmin);
        fflush(stdin);
        if(tahmin==karakter){

        } else
        {
            printf("Yanlış karakter girdiniz puanınızdan 5 puan eksilecek");
            puan-=5;
        }
        printf("Puan:%d",puan);

    }while(puan!=0);

    if(puan==0){
        printf("\n1.oyuncu kazandı");
      }
      else{
        printf("2. oyuncu kazandı");
    }
    return 0;

}
