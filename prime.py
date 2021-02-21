x=int(input())
p=1
for i in range(2,int(x/2)):
    if x%i==0:
        p=0
if p==1:
    print('Its a prime')
else:
    print('Its not a prime')
