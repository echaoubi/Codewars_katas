
int strongest_even(unsigned long long int n, unsigned long long int m) {
  unsigned long long int p=1;
  while(p<=m) p*=2;
  p/=2;
  if(p>=n){
    return p;}
  else {
    p=p/2;
    int i=1;
    for(;p*i<n;){ 
      i++;
      if(p*i>m) p/=2;}
    return p*i;
  }
}
/* this is working but not mine
int strongest_even(int n, int m) {
  for (; (m & m - 1) >= n; m &= m - 1);
  return m;
}*/
