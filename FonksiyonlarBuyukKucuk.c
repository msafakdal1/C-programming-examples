#include <stdio.h>

int BuyukKucuk(int x,int y){
    if(x>y){
        return 1;
    } else
    {
        return 0;
    }
}
int main()
{
    int a,b;
    int sonuc;

    printf("a ve b sayılarını giriniz:");           scanf("%d%d",&a,&b);

  sonuc = BuyukKucuk(a,b);

  if(sonuc==1){
      printf("a sayısı b sayısından buyuktur");
  }
  else{
      printf("b sayısı a sayısından daha buyuktur");
  }
      return 0;
  
}
