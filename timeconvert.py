rec = []
rec.append([])
x = 0
rec[x] = input()
hr = int(rec[0][:2])
if rec[0][-2:]=="PM" and hr<12:
    y = rec[0][2:-2]
    hr = str(hr+12)
    print(hr+y)
elif rec[0][-2:]=="AM" and hr<12:
    y = rec[0][:-2]
    print(y)
elif rec[0][-2:]=="AM" and hr==12:
    y = rec[0][2:-2]
    print("00"+y)
elif rec[0][-2:]=="PM" and hr==12:
    y = rec[0][:-2]
    print(y)
