def encode_rail_fence_cipher(str, n):
    txt=[]
    for i in(range(n)):
        txt.append("")
    pw,a=0,0
    for i in range(0,len(str)):
        txt[pw]+=str[i]
        a=0 if(pw==0) else 1 if(pw==n-1) else a
        pw=pw-1 if(a)  else pw+1
    return("".join(txt))    



def decode_rail_fence_cipher(strt, n):
    txt,kak=[],[]
    pw,a,tr=0,0,0
    for i in range(0,len(strt)):
        txt.append(str(pw))
        a=0 if(pw==0) else 1 if(pw==n-1) else a
        pw=pw-1 if(a)  else pw+1
    for i in(range(len(strt))):
        kak.append("")
    for rt in range(n):
            indices = [i for i, x in enumerate(txt) if x == str(rt)]
            print(indices)
            for y in indices:
                kak[y]=strt[tr]
                tr+=1
    return("".join(kak))
