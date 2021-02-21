record = []
t = int(input())
x = -1
while t>0:
    record.append([])
    x = x+1
    for i in range(0,2):
        record[x].append(input())
    t = t-1
marks = []
for i in range(0,len(record)):
    marks.append(record[i][1])
marks.sort()
print(marks)
mark = marks[1]
names = []
for i in range(0,len(record)):
    if record[i][1]==mark:
        names.append(record[i][0])
names.sort()
for i in names:
    print(i)
