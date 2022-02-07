/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char a){
    write(1,&a,1);
}

int main(int ac,char *av[])
{
    char *txt =av[1];
    int t=0;
    while(av[1][t]==' '||av[1][t]=='\t'){
        t++;
    }
    int o=t;
    while(av[1][o]!=' '&&av[1][o]!='\t'){
        o++;
    }
    while(av[1][o]==' '||av[1][o]=='\t'){
        o++;
    }
    int i=o;
    while(av[1][i]){
        ft_putchar(av[1][i]);
        if(av[1][i]==' '||av[1][i]=='\t'){
            while(av[1][i+1]==' '||av[1][i+1]=='\t'){
                i++;
            }
        }
        i++;
    }
    ft_putchar(' ');
    while(t<o){
        ft_putchar(av[1][t]);
        t++;
    }
    printf("\n%s",av[1]);

    return 0;
}
