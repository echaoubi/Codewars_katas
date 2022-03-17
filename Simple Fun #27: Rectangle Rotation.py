def rectangle_rotation(a, b):
    ksm=2**0.5
    a1=a//ksm
    b1=b//ksm
    res=((a1)*(b1))+((a1+1)*(b1+1))
    return res +res%2 -1
