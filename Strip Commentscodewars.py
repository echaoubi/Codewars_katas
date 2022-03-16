def solution(st,markers):
    cas = st.split("\n")
    for v in range(0,len(cas)):
        o=0
        for x in markers:
            if x in cas[v]:
                if(x==cas[v][0]):cas[v]=""
                else:
                    o=cas[v].find(x)
        if(o!=0):cas[v]=cas[v][:o-1]
    res=""
    for n in range(0,len(cas)-1):
        res +=cas[n].rstrip(" ")+"\n"
    res+=cas[len(cas)-1].rstrip(" ")
    return res
    #your code here
