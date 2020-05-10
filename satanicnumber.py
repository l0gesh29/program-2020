import math
def isp(x):
    sr = math.sqrt(x) 
    return ((sr - math.floor(sr)) == 0) 

def func(s):
    t=int(s)
    for i in s:
        san=t-(int(i)*int(i))
        if san<0:
            print("No")
            break
        if san==0 or isp(san):
            print("Yes")
        


a=input() 
b=list()
for i in range(0,int(a)):
    b.append(input())
for i in range(0,len(b)):
    func(b[i])
