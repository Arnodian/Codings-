t = int(input())
while t>0:
    num = int(input())
    if num>40:
        if num%10==3 or num%10==4:
            if num%10==3:
                num = num+2
            else:
                num = num+1
        elif num%10==8 or num%10==9:
            if num%10==8:
                num = num+2
            else:
                num = num+1
        print(num)
    else:
        print(num)
t = t-1
