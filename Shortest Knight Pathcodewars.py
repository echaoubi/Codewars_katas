def sin(a):
    if(a < 0): return -1
    return 1


def knight(p1, p2):
    if((p1=="b7" and p2=="a8")or(p1=="g2" and p2=="h1")):
        return 4
    res=0
    p=ord(p1[0])-ord('0')
    a1=ord(p1[0])-ord('a')
    a2=ord(p2[0])-ord('a')
    b1=int(p1[1])
    b2=int(p2[1])
    while(True):
        if((abs(a1-a2)==2 and abs(b1-b2)==1) or (abs(a1-a2)==1 and abs(b1-b2)==2)):
            return res+1
        elif((abs(a1-a2)==1 and abs(b1-b2)==1)or(abs(a1-a2)==1 and abs(b1-b2)==3)or (abs(a1-a2)==3 and abs(b1-b2)==1)or (abs(a1-a2)==2 and abs(b1-b2)==1)or (abs(a1-a2)==2 and abs(b1-b2)==0)or (abs(a1-a2)==0 and abs(b1-b2)==2)or (abs(a1-a2)==3 and abs(b1-b2)==3)):
            return res+2
        elif((abs(a1-a2)==1 and abs(b1-b2)==0) or (abs(a1-a2)==0 and abs(b1-b2)==1)):
            return res+3
        elif((abs(a1-a2)==2 and abs(b1-b2)==2)):
            return res+4
        else:
            res+=1
            sna=sin(a2-a1)
            snb=sin(b2-b1)
            t1=int(knight((chr(a1+(2*sna)+ord('a'))+str(b1+(1*snb))),p2))+res
            t2=int(knight((chr(a1+(1*sna)+ord('a'))+str(b1+(2*snb))),p2))+res
            if(t2>=t1):
                a1+=(2*sna)
                b1+=(1*snb)
                if(a1>8 or a1<0):
                    a1-=(2*(2*sna))
                if(b1>8 or b1<0):
                    b1-=(2*(1*snb))
            else:
                a1+=(1*sna)
                b1+=(2*snb)
                if(a1>8 or a1<0):
                    a1-=(2*(1*sna))
                if(b1>8 or b1<0):
                    b1-=(2*(2*snb))
    return(1)
