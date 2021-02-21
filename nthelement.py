n = int(input())
a,b,c = input().split()
num = [a,b,c]
for i in range(0,n):
    t = i+2
    temp = 0
    while t>0:
        temp = temp+int(num[t])
        t = t-1
    num.append(temp)
print(num)
