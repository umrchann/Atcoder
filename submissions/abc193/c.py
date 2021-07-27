import math
n=int(input())
s=set()
for i in range(2,int(math.sqrt(n))+1):
    now=i*i;
    while(now<=n):
        s.add(now)
        now=now*i
        
print(n-len(s))

