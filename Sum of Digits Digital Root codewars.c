#include <math.h> 
int min(int n, int i){
  int p=0;
  for(int k=0;k<i;k++){
      p+= n-((n/10)*10);
      n=n/10;}
    return p; 
}
int digital_root(int n){
    int i=0;
    int y=n;
    for(;y>0;i++) y/=10;
    while(n>9) n= min(n,i);
    return n;
}
