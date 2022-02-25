int is_valid_ip(const char * addr) {
  int z=0;
  for(int i=0;addr[i]!='\0';){
    char *o =malloc(3);
    int j=0;
    if(addr[i]=='.'||(addr[i]=='0' && (addr[i+1]!='.' && addr[i+1]!='\0'))) return 0;
    while(addr[i]!='.' && addr[i]!='\0'){
      if(!(addr[i]<='9' && addr[i]>='0')) return 0;
      o[j++]=addr[i++];}
    if(addr[i]=='.') i++;
    if(atoi(o)>=256) return 0;
    z++;
  }
    if(z!=4) return 0;
    return 1;
}
