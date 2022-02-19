#include <stddef.h>
#include <math.h>

unsigned binary_array_to_numbers(const unsigned *bits, size_t count);
unsigned binary_array_to_numbers(const unsigned *bits, size_t count){
  int r =0;
  for(int i=0; i < count;i++){
    r+=bits[i]*pow(2, count-i-1);
  }
  return r;
}
