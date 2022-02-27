#include <stdbool.h>

bool valid_phone_number(const char* number) {
    int p[10]={1,2,3,6,7,8,10,11,12,13};
    if(!(number[0]=='(' && number[4]==')' && number[5] == ' '&& number[9]=='-')) return 0;
    for(int i;i<10;i++) if(!(number[p[i]]>='0' && number[p[i]]<='9')) return 0; 
    if(number[14]!='\0') return 0;
    return 1;

}
