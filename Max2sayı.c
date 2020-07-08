#include <stdio.h>


int main() {
    int max1 = 0;
    int max2 = 0;
    int number;
    int i = 1;


    while (i <= 3) {
        printf("Sayı giriniz :");
        scanf("%d", &number);

        if(number>max1){
            max1 = number;
        }
        if(number>max2 && number<max1){
            max2 = number;
        }
        ++i;
    }
    printf("Max1 :%d\nMax2 :%d",max1,max2);

    return 0;
}
