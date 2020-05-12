import sys
n=input()
a=list(map(int,input().split(" ")))
print(a)
d=0
for i in range(0,len(a)):
    b=[]
    for j in range(0,len(a)):
        if i!=j:
            b.append(a[j])
    c=len(set(b))
    if c==a[i]:
        d+=1
if d == len(a):
    print("Yes")
else:
    print("No")
