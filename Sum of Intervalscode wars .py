def check(intr):
    for i in range(0,len(intr)-1):
        if(intr[i][1]>=intr[i+1][0]):
            return 0
    return 1

def clear(intr):
    p=[]
    yu=1
    i=0
    while( i< len(intr)-1):
        if(intr[i][1]>=intr[i+1][1]):
            p.append((intr[i][0],intr[i][1]))
            i+=1
            if(i==len(intr)-1):
                yu=0
        elif(intr[i][1]>=intr[i+1][0]):
            p.append((intr[i][0],intr[i+1][1]))
            i+=1
            if(i==len(intr)-1):
                yu=0
        else:
            p.append(intr[i])
        i+=1
    if(yu): p.append(intr[len(intr)-1])
    return p

def sum_of_intervals(intr):
    intr = sorted(intr, key=lambda x:x[0])
    p=intr
    while(not check(p)): 
        p=clear(p)
    if(len(intr)==1):
        return intr[0][1]-intr[0][0]
    res =0
    for i in p:
        res+= i[1]-i[0]
    return res
