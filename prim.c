/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int ac,char* av[])
{
    int i=atoi(av[1]);
    int a=2;
    while(i!=1){
        while(i%a==0){
            i/=a;
            printf("%d",a);
            if(i!=1) printf("*");
        }
        a++;
    }
    
    return 0;
}
