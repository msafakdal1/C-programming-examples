#include <stdio.h>
#include <stddef.h>

#define SIZE 5

int main()
{
  size_t values[SIZE] = {2,4,6,8,10};

  size_t *vPtr;


  for(int i=0;i<SIZE;++i)
  { 
    printf("%u",values[i]);
    puts("");
  }
   puts("");
   
   vPtr = values;
   vPtr = &values[0];
  
  for(int i=0;i<SIZE;++i)
   {  
      printf("%u",*(vPtr + i));
      
     puts("");
   }
    
  puts("");
  
  for(int i=0;i<SIZE;++i)
  {  
     printf("%u",vPtr[i]);
     puts("");
  }
  
    puts("");

    printf("%u",values[4]);
    puts("");
    printf("%u",*(vPtr + 4));
    puts("");
    printf("%u",vPtr[4]);
    puts("");
    vPtr += 3;
 
   printf("Adres : %p",vPtr);
   puts("");
   printf("Degeri :%u",*vPtr);
   puts("");
   vPtr += 1;
   printf("%p",vPtr);

