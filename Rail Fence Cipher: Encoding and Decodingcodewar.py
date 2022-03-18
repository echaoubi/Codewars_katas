def encode_rail_fence_cipher(str, n):
    txt=[""]
    for i in(range(n)):
        txt.append("")
    pw=0
    a=0
    for i in range(0,len(str)):
        txt[pw]+=str[i]
        if(pw==0):a=0
        if(pw==n-1):a=1
        if(a):pw-=1
        else:pw+=1
    return("".join(txt))
    
    
    
    
def decode_rail_fence_cipher(str, n):
    txt=[""]
    for i in(range(n)):
        txt.append("")
    pw=0
    a=0
    for i in range(0,len(str)):
        txt[pw]+=str[i]
        if(pw==0):a=0
        if(pw==n-1):a=1
        if(a):pw-=1
        else:pw+=1
    print(txt)
    return("".join(txt))
