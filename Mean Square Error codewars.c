#include <stddef.h>
#define pwr(n) n*n

double mean_square_error(size_t n, const int a[n], const int b[n]) {
  double res=0;
  for(int i=0;i<n;i++) res+=pwr((a[i]-b[i]));
  return res/n;
}
