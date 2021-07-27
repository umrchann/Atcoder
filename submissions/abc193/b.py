z=[]
n=int(input())
for i in range(n):
    a,p,x=map(int,input().split())
    if x-(a)>0:
        z.append(p)

if z:
    print(min(z))
else:
    print(-1)

