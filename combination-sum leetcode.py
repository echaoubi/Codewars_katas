# NOT COMPLETE


import copy
def check(p,arr):
    for i in arr:
        if(p%i==0):
            return i



def sum(arr):
    p=0
    for i in arr:
        p+=i
    return p
 
def jma(arr):
    p=[]
    for i in arr:
        for k in i:
            p.append(k)
    return p
mp=[]
def combinations(target,data,d):
     for i in range(len(data)):
        new_target = copy.copy(target)
        new_data = copy.copy(data)
        new_target.append(data[i])
        new_data = data[i+1:]
        if(sum(new_target)==d):
            mp.append(new_target)
        combinations(new_target,new_data,d)

class Solution(object):
    def combinationSum(self, candidates, target):
        if(len(candidates)==1):
            if(candidates[0]!=target):
                return []
            return candidates
        res=[]
        for i in range(len(candidates)):
            res.append([0])
            m=candidates[i]
            while(m<=target):
                res[i].append(m)
                m*=candidates[i]
        print(res)
        pa=jma(res)
        t=0
        while(0 in pa):
            pa.remove(0)
        print(pa)
        combinations([],pa,target)
        print(mp)
        for i in range(len(mp)):
            for n in range(len(mp[i])):
                if not mp[i][n] in candidates:
                    mm=check(mp[i][n],candidates)
                    for g in range(mp[i][n]/mm):
                        mp[i].append(mm)
                    mp[i].pop(n)
        return(sorted(mp))
