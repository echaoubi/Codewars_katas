#not complete https://www.codewars.com/kata/58678d29dbca9a68d80000d7/solutions/python

def interpreter(code, tape):
    print(code)
    print(tape)
    a=0
    i=0
    while(i<len(code)):
        if(code[i]=='>'):
            if(a==len(tape)-1):
                break
            a+=1
        if(code[i]=='<'):
            if(a==0):
                break
            a-=1
        if(code[i]=='['):
            for r in range(a+1,len(tape)):
                tape=tape[:r]+tape[a]+tape[r+1:]
            break
            pass    
        if(code[i]==']'): a=len(code)-1
        if(code[i]=='*'):
            a=a%len(tape)
            m=str((int(tape[a])+1)%2)
            tape=tape[:a]+m+tape[a+1:]
        i+=1
    return(tape)
    
    
    
    # Implement your interpreter here
