int min(int n, int i){
  int p=1;
  for(int k=0;k<i;k++){
      p*= n-((n/10)*10);
      n=n/10;}
    return p; 
}

int how(int y){
  int p=0;
  for(;y>0;p++) y/=10;
  return p;
  
}

int persistence(int n){
    int o=0;
    while(n>9){
      int i=how(n);
      n= min(n,i);
      o++;
    }
    return o;
}
