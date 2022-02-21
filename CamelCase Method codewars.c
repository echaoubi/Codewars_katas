
#include <stdlib.h>
#include <ctype.h>
char *camel_case(const char *s)
{
    char *p = malloc (strlen(s) + 1);
    int t=0;
    int i=0;
    while(s[i]!='\0'){
      while(s[i]==' ')i++;
      if(s[i]!='\0') p[t++]=s[i++]-' ';
      while(s[i]!=' ' && s[i]!='\0'){
        p[t++]=s[i++];
      }
    }
    p[t]='\0';
    return p;
}
