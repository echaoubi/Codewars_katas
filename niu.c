/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void ft_putchar(char c){
    write(1,&c,1);
}
void putnbr(int nbr){
    if(nbr<0){
        ft_putchar('-');
        nbr *=-1;
    }
    if(nbr>9){
        putnbr(nbr/10);
    }
    ft_putchar(nbr%10 + '0');
 
}

int main(int ac,char* av[])
{
    int i =atoi(av[1]);
    int j =atoi(av[3]);
    printf("%d %c %d\n",i,av[2][0],j);
    //printf("%d %d %d\n","+","-","*");

    int res=1;
    if(av[2][0]=='+') res = i + j;
    else if(av[2][0]=='-') res = i - j;
    else if(av[2][0]=='*') res = i * j;
    else if(av[2][0]=='/') res = i / j;
    printf("%d\n +++++++++++++++++++++++\n",res);
    putnbr(res);
    return 0;
}
