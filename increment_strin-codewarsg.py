def increment_string(strng):
    if(len(strng)==0):    return '1'
    if(strng[-1]=='0'):
            return strng[:-1]+'1'
    i=1
    if(strng[-i]=='9'):
        while(strng[-i]=='9'):
            i+=1
        if(strng[-i].isdigit()):i+=1
        i-=1
        return strng[:-i]+str(int(strng[-i:])+1)
    if(strng[-1].isdigit()and strng[-1]!='0'):
        return strng[:-1]+str(int(strng[-1:])+1)
    return strng+'1'
