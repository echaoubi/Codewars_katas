#include <stdio.h>

int	ft_strlen(char *str){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}
int main(int ac,char* ag[]){
    printf("%d",ft_strlen(ag[2]));
    return 0;
}

