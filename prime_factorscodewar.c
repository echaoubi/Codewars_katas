def prime_factors(n):
    lst=[]
    txt=""
    i=2
    while(n!=1):
        tm=0
        while(n%i==0):
            lst.append(i)
            n/=i
            tm+=1
        if(tm==1):txt+='('+str(i)+')'
        elif(tm!=0):txt+='('+str(i)+'**'+str(tm)+')'
        i+=1
    return(txt)
