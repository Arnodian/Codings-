t=int(input())
sum=0
mul=1
while t!=0 and sum!=123456789:
    sum+=(mul*t)
    t-=1
    mul*=10
print(sum)
