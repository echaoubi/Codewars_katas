#include <stdbool.h>
# define alnum(x) ((x<='z'&& x>='a')||(x<='Z'&& x>='A')||(x<='9'&& x>='0'))

bool alphanumeric(const char* strin) {
  printf("%s\n",strin);
  int i=0;
  for(;strin[i]!='\0';i++) if(!(alnum(strin[i]))) return 0;
  if(i==0) return false;
  return 1;

}
