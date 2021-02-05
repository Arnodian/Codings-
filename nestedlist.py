record = []
t = int(input())
x = -1
while t>0:
    record.append([])
    x = x+1
    for i in range(0,2):
        record[x].append(input())
    t = t-1
min = record[0][1]
for i in range(0,len(record)):
    if record[i][1]<min:
        min = record[i][1]
for i in range(0,len(record)):
    if record[i][1]==min:
        del record[i]
print(record)
min = record[0][1]
for i in range(0,len(record)):
    if record[i][1]<min:
        min = record[i][1]
print(min)
for i in range(0,len(record)):
    if record[i][1]==min:
        print(record[i][0])
