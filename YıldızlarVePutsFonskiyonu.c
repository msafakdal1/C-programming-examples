#include <stdio.h>


int main() {
    int i = 1;

    while(i<=4){
        printf("%s","* * * * * * * * *");
        puts("");             // Yeni bir satıra geç.
        printf("%s",  " * * * * * * * * *");
        puts("");  // Yeni bir satıra geç.

        ++i;
    }
    return 0;
}
