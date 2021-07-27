import math
k = int(input())
s = input()
t = input()
remain = [0] * 10
comb_all=(9*k-8)*(9*k-9)
ans=0.0
for i in range(10):
    remain[i] = k-s.count(str(i))-t.count(str(i))

def score(cnt):
    ret = 0
    for i in range(10):
        ret += i * pow(10, cnt.count(str(i)))
    return ret

for i in range(1,10):
    for j in range(1,10):
        if i==j:
            if remain[i]<2:continue
        else:
            if remain[i]==0:continue
            if remain[j]==0:continue
        
        if score(s+str(i))>score(t+str(j)):
            if i==j:
                cnt = remain[i] * (remain[i]-1)
            else:
                cnt = remain[i] * remain[j]
            ans+=cnt/comb_all

print(ans)
