#include <stddef.h>

size_t mag_number(const char *weapon_name, size_t streets) {
  
  int  u=streets*3;
  if(weapon_name=="PT92"){
    return (u%17==0)? u/17:(u/17)+1;
  }
  if(weapon_name=="M4A1"){
    return (u%30==0)? u/30:(u/30)+1;
  }
  if(weapon_name=="M16A2"){
    return (u%30==0)? u/30:(u/30)+1;

  }
  if(weapon_name=="PSG1"){
    return (u%5==0)? u/5:(u/5)+1;
  }
}
