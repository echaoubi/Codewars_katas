#include <stdlib.h>
#include <stdio.h>

int len(int nb){
    int a=0;
    if(nb<0){
        nb=nb*(-1);
    }
    while(nb>=1){
        nb=nb/10;
        a++;
    }
    return a;
}

char *ft_itoa(int nb){
    int i = len(nb);
    char *str = malloc(sizeof(char) * (i+1));
    str[i+1]='\0';
    int t=0;
    if(nb<0){
        str[t]='-';
        t++;
        nb=nb*(-1);
    }
    while(i>0){
        str[i]=(nb%10 +'0');
        i--;
        nb/=10;
    }
    return str;
    
}



int main(void)
{
	printf("%s\n", ft_itoa(-43534654));
	return (0);
}
