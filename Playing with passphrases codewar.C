char* reverse(char* s,int t){
  char *r = malloc(sizeof(char) * t+1);
  for(int i=0;s[i]!='\0';i++) r[i]=s[t-i-1];
  return r;
}
char* addone(char* s,int t,int n){
  for(int i=0;s[i]!='\0';i++){
    if(s[i]<='9' && s[i]>='0') s[i]='9'+'0'-s[i];
    else if(s[i]<='z' && s[i]>='a') s[i]=(((s[i]-'a'+n)%26)+'a');
    else if(s[i]<='Z' && s[i]>='A') s[i]=(((s[i]-'A'+n)%26)+'A');
    if((s[i]<='Z' && s[i]>='A') && i%2==1) s[i]=s[i]+' ';
    else if((s[i]<='z' && s[i]>='a') && i%2==0) s[i]=s[i]-' ';}
  return s;
}

char* playPass(char* s, int n) {
  char *r = strdup(s);
  int t = strlen(r);
  r = addone(r,t,n);
  
  r = reverse(r,t);
  return r;
}
