/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <unistd.h>
void ft_putchar(char c){
    write(1,&c,1);
}

void code(){
    int i;
    int j;
    i= -1;
    while(++i<=98){
        j=i;
        while(++j<=99){
            ft_putchar((i/10)+'0');
            ft_putchar((i%10)+'0');
            ft_putchar(' ');
            ft_putchar((j/10)+'0');
            ft_putchar((j/10)+'0');
            if(i!=98){
                ft_putchar(',');
                ft_putchar(' ');

            }
        }
    }
}
int main()
{
    printf("Hello World\n");
    code();

    return 0;
}
