#include <stddef.h>

size_t mag_number(const char *weapon_name, size_t streets) {
  float mag=0;
  int mad=0;
  float u=streets;
  if(weapon_name=="PT92"){
    mag =((u*3)/17);
    mad =((u*3)/17);
    if(mag>mad) mad+=1;
  }
  if(weapon_name=="M4A1"){
    mag =((u*3)/30);
    mad =((u*3)/30);
    if(mag>mad) mad+=1;
  }
  if(weapon_name=="M16A2"){
    mag =((u*3)/30);
    mad =((u*3)/30);
    if(mag>mad) mad+=1;
  }
  if(weapon_name=="PSG1"){
    mag =((u*3)/5);
    mad =((u*3)/5);
    if(mag>mad) mad+=1;
  }
  // Ganbatte!
  return mad;
}
