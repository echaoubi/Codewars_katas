class Solution(object):
    def dayOfYear(self, date):
        days=[31,28,31,30,31,30,31,31,30,31,30,31]
        mt=int(date[5:7])
        dy=int(date[8:])
        yr=int(date[:4])
        res=0
        i=0
        while(i<mt-1):
            res+=days[i]
            i+=1
        if((yr)%4==0 and mt>2 and yr>1900):
            res+=1
        return(res+dy)
    
