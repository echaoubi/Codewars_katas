#include <stdlib.h>
#include <stdio.h>
char	*ft_itoa(int nbr){
    int i=1;
    int t=1;
    while(nbr>i){
        i*=10;
        t++;
    }
    char *res=malloc(t);
    int l=0;
    i/=10;
    while(l<t-1){
        res[l]=(nbr/i)+'0';
        nbr=nbr - (nbr/i)*i;
        i/=10;
        l++;
    }
    return res;
}


int main()
{
    printf("%s",ft_itoa(987654012));
    return 0;
}
