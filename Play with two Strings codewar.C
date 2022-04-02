#define ad(n) n>='a' ? n-' ' : n+' '
#define bt(n) n>='a' ? n -' ' : n
const char *revers(const char *a, const char *b) {
  char *p=malloc(350);
  int y;
  for(int i =0;a[i];i++){
    y=0;
    for(int j=0;b[j];j++){
      char e = bt(a[i]);
      char r = bt(b[j]);
      if(e==r) y++;
    }
    if(y%2==1) p[i]=ad(a[i]);
    else p[i]=a[i];
  }
  return p;
}
char *cp(const char *a, const char *b){
  char *o=malloc(100);
  int i=0;
  int j=0;
  while(a[i]) o[i++]=a[i];
  while(b[j]) o[i++]=b[j++];
  o[i]='\0';
  return o;
}


char *work_on_strings(const char *a, const char *b) {
  return cp(revers(a,b),revers(b,a));
}
