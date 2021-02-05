l = []
n = int(input())
for i in range(0,n):
    l.append(int(input()))
min1=min2=l[0]
flg=0
for i in range(0,n):
    if min1>l[i] and l[i]!=0:
        min1=l[i]
        flg=i
l.remove(l[flg])
for i in range(0,n):
    if min2>l[i] and l[i]!=0:
        min2=l[i]
print(min1,min2)
