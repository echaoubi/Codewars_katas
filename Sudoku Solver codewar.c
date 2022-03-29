def checkH(puzzle,t,a):
    txt=[1,2,3,4,5,6,7,8,9]
    for i in range(9):
        if puzzle[t][i] in txt:
            txt.remove(puzzle[t][i])
        if puzzle[i][a] in txt:
            txt.remove(puzzle[i][a])
    left=t//3
    up=a//3
    for j in range(left*3,(left*3)+3):
        for k in range((up*3),(up*3)+3):
            if puzzle[j][k] in txt:
                txt.remove(puzzle[j][k])
            
    return txt

def sudoku(puzzle):
    res=81
    for i in puzzle:
        res-=i.count(0)
    
    while(res!=81):
        for i in range(9):
            for s in range(9):
                if(puzzle[i][s]==0):
                    op=checkH(puzzle,i,s)
                    if(len(op)==1):
                        puzzle[i][s]=op[0]
                        res+=1
    return puzzle
