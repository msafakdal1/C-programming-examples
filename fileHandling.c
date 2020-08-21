#include <stdio.h>
  
int main()
{
  char isim[10];


  int yas;

 FILE *dosya;

 if((dosya = fopen("merve","w")) == NULL)
 {
     puts("Dosya açılamadı");
  }
  else{
       printf("İsim ve yas giriniz :");   scanf("%9s%d",isim,&yas);

        while(!feof(stdin))
       {
           fprintf(dosya,"İsim :%s\n\nYas : %d",isim,yas);

       printf("İsim ve yas giriniz :");   scanf("%10s%d",isim,&yas);
      }
  }
    fclose(dosya);

  FILE *dosya1;

  if((dosya1 = fopen("safak","r")) == NULL )
  {
      puts("Dosya açılamadı");
  }
  else{
        fscanf(dosya,"%s%d",isim,&yas);

    while(!feof(dosya1)){
       printf("İsim : %s\n\nyYas : %d",isim,yas);

      fscanf(dosya,"%s%d",isim,&yas);
    }

  fclose(dosya1);
  }
}
