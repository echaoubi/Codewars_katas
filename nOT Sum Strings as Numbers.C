#include <malloc.h>
#include <math.h>
#include <string.h>
typedef unsigned long long ull;

ull atoi(char *b){
  ull res=0;
  int i;
  for(i=0;b[i];i++){
    if(!(b[i]>='0'&&b[i]<='9')) return 0;
    res=res*10+(b[i]-'0');
  }
  if(i==0) return 0;
  return res;
}
char *stn (ull n)
{
  if(n==0) return "0";
  ull o = 0;
  ull y=n;
  for (; n > 0; o++)
    n /= 10;
  char *p=malloc(o-1);
  ull i;
  for(i=0;i<o;i++){
      ull u=(y/pow(10,o-i-1));
      ull k=(y/pow(10,o-i));
      k=u-k*10;
      p[i]=k+'0';
  }
  p[o]='\0';
  return p;
}


char *strsum(const char *a, const char *b)
{
    ull p= atoi(a)+atoi(b);
    printf("%llu %llu %llu\n",p,atoi(a),atoi(b));
    if(p==0) return "0";
    char *r=malloc(100);
    r=stn(p);
    return r;
}
