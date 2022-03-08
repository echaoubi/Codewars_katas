#include <stdbool.h>

int len(char *s){
  int i=0;
  for(;s[i];) i++;
  return i;
}


int search_substr(const char *str, const char *src, bool alw) {
    int res=0;
    int l;
    for(int i=0;str[i];i++){
      if(str[i]==src[0]){
        int j=0;
        l=i;
        for(; j<len(src) && src[j]==str[i++];)j++;
        if(j==len(src)) res++;
        if(!alw && j==len(src)) i-=1;
        else i=l;
      }
    }
    return res;
}
