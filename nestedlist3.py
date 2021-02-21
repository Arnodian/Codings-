record = []
t = int(input())
x = -1
while t>0:
    record.append([])
    x = x+1
    for i in range(0,2):
        record[x].append(input())
    t = t-1
val = []
for i in range(0,len(record)):
    val.append(record[i][1])
val = sorted(list(val))
min = val[1]
print(val)
print(min)
name = []
for i in range(0,len(record)):
    if record[i][1]==min:
        name.append(record[i][0])
name = sorted(name)
for i in range(0,len(name)):
    print(name[i])
