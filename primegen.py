t = int(input())
while t>0:
    m = int(input())
    n = int(input())
    num = []
    for i in range(m,n+1):
        p = 1
        for j in range(2,int(i/2)):
            if i%j==0:
                p=0
        if p==1:
            num.append(i)
    print()
    for i in range(0,len(num)):
        print(i)
