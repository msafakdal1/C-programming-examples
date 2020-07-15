#include <stdio.h>

int main()
{
    int number;


    while(number!=-1){
        printf("Sayı giriniz :");       scanf("%d",&number);
        if(number == -1){
            break;
        }

        switch (number) {
            case 1 : printf("On the first day of Christmas\n");             break;
            case  2  : printf("On the second  day of Christmas\n");         break;
            case 3 : printf("On the third day of Christmas\n");             break;
            case 4 : printf("On the fourth day of Christmas\n");            break;
            case 5 : printf("On the fifth day of Christmas\n");              break;
            
        }
        switch (number) {
            case 1 : printf("My true love gave to me\n""A partridge in a pear tree\n"); break;
            case 2 : printf("My true love gave to me\n""Two turtle doves\n""And a partridge in a pear tree\n"); break;
            case 3 : printf("My true love gave to me\nThree French hens\nTwo turtle doves\nAnd a partridge in a pear tree\n"); break;
            case 4 : printf("My true love gave to me\nFour calling birds\nThree French hens\nTwo turtle doves\nAnd a partridge in a pear tree\n"); break;
            case 5 : printf("My true love gave to me\nFive gold rings\nFour calling birds\nThree French hens\nTwo turtle doves\nAnd a partridge in a pear tree\n"); break;

        }
    }
}
