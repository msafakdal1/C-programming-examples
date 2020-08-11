#include <stdio.h>

int main()
{
 char s[20] = {};

 scanf("%19[^p]",s);

 printf("%s",s);

 return 0;
}
