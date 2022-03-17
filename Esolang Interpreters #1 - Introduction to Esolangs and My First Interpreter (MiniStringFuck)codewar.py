def my_first_interpreter(code):
    x=code.split('.')
    t=0
    txt=""
    for i in range(0,len(x)-1):
        t=((t+x[i].count('+'))%128)
        txt+=chr(t)
    return(txt)
        
    
