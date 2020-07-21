#include <stdio.h>

void carpım(int , int);

int main()
{
    int x , y;

    scanf("%d%d",&x,&y);

    carpım(x,y);
}
void carpım(int a , int b){

   static int carpma = 0;

    if(b!=0){
        carpma +=a;
        carpım(a,b-1);
    }
    else{
        printf("%d",carpma);
    }
}
