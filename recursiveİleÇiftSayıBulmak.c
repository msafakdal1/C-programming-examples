#include <stdio.h>

int ciftMi(int);

int main()
{
    int a;

    scanf("%d",&a);

    ciftMi(a);
}
int ciftMi(int x){
    if(x == -1){
        return 1;
    }
    else{
        if(x%2==0){
            printf("%d\n",x);
        }
        return ciftMi(x-1);
    }
}

