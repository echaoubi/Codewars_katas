//  do not allocate memory for return string
//  assign the value to the pointer "result"

void spin_words(const char *sentence, char *result) {
    int d=0;
    for(;sentence[d]!='\0';d++){
      result[d] = sentence[d];
      }
    int i=0;
    for(;i<d+1;i++){
      int y=0;
      for(int j=i;sentence[j]!='\0' && sentence[j]!=' ';j++) y++;
      if(y>4){
        int e=y-1;
        for(int u=i;u<i+y;u++){
          result[u] = sentence[i+e];
          e--;
        }
      }
      i=i+y;
    }
    result[i-1]='\0'; 
}
