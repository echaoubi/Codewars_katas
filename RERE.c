#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}

void ft_putstr(char *c,int t){
    int p=t+1;
    while(c[p]!=' '&& c[p]!='\0'){
        ft_putchar(c[p]);
        p++;
    }
    ft_putchar(' ');

}

void code(char *txt){
    int i=0;
    while(txt[i]){ 
        i++;}
    int k =i-1;
    while(k>=0){
        if(txt[k]==' '){
            ft_putstr(txt,k);
        }
        k--;
    }
}
int main(int ac ,char* av[])
{
    code(av[1]);
    return 0;
}
