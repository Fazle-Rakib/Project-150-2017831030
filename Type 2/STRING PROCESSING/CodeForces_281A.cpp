#include <stdio.h>
#include <ctype.h>
int main()
{
   char s[1000];
   char c,*p;
   gets(s);
   p=s;
   *p=(toupper(s[0]));
   puts(s);
   return 0;

}
