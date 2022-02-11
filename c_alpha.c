/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(int ac , char* av[])
{
    char *p=av[1];
    int i=0;
    while(p[i]){
        i++;
    }
    char txt[i];
    i=0;
    while(p[i]){
        if(p[i]>='A'&&p[i]<='Z'){
            p[i]+=' ';
        }
        txt[i]=p[i];
        i++;
    }
    i=0;
    while(p[i]){
        int t=0;
        if((p[i]>='a'&&p[i]<='z')||(p[i]>='A'&&p[i]<='Z')){
            int j=0;
            int y=0;
            char o =p[i];
            while(p[j]){
                if(p[j]==o){
                    p[j]='0';
                    y++;
                }
                j++;}
            printf("%d%c, ",y,txt[i]);}
        i++;
    }

    return 0;
}
