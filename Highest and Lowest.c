#include <stdio.h>
int putnmb(char *nmb){
    int e=1;
    int t=0;
    int res =0;
    if(nmb[t]=='-') {
        e=-1;
        t++;}
    for(int i =t;nmb[i];i++){
        res = res*10+(nmb[i]-'0');
    }
    return res*e;
}

void high_and_low(const char *strnum, char *result){
    printf("%s ",strnum);
    int min = 2147483647;
    int max = -2147483648;
    for(int i=0;strnum[i]!='\0';i++){
      if((strnum[i]>='0'&&strnum[i]<='9') || strnum[i]=='-'){
        char p[12];
        int y=0;
        while((strnum[i]>='0'&&strnum[i]<='9') || strnum[i]=='-'){
            p[y]=strnum[i];
            y++;
            i++;
        }
        p[y]='\0';
        printf("(%s - %d - %d) ",p,i,y);
        int yu =putnmb(p);
        
        if(min>yu){
          min=yu;
        }
        if(max<yu){
          max=yu;}
      }
    }
    sprintf(result, "%d %d",max,min); // print your answer to result
    printf("\n%s\n",result);
    
    //
    
}
