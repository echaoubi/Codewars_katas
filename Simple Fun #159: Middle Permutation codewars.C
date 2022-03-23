from math import factorial as fct
def middle_permutation(str):
    txt=""
    str="".join(sorted(str))
    dx=1
    res=fct(len(str))//2
    while(dx<=res and len(str)>1):
        o=0
        while((dx+fct(len(str)-1))<=res):
            dx+=fct(len(str)-1)
            o+=1
        txt+=str[o]
        str=str.replace(str[o],'')        
    return(txt+str)
