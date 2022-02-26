import time
cars = 59*"-"
f=1
while(True):
    f=(f)%len(cars)
    p=len(cars)-f
    if(p>f):print(cars[:f]+"O"+cars[f:p]+"O"+cars[p:])
    elif(f>p):print(cars[:p]+"O"+cars[p:f]+"O"+cars[f:])
    else:print(cars[:p]+"O"+cars[p:])
    f+=1
    time.sleep(0.0002)
