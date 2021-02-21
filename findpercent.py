record = []
t = int(input())
x = -1
while t>0:
    record.append([])
    x = x+1
    record[x] = input().split()
    t = t-1
name = str(input())
for i in range(0,len(record)):
    if record[i][0]==name:
        sum = float(float(record[i][1])+float(record[i][2])+float(record[i][3]))
print("{:.2f}".format(sum/3))
