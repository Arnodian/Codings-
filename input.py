x,k = input().split()
s = str(input())
l =[]
pos = int(0)
for i in range(len(s)):
    if s[i]=='+' or s[i]=='-':
        l.append(s[pos:i-1])
        pos = i+2
print(l)
for i in l:
    for j in i:
