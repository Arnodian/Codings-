n = int(input())
a = list(map(int,input().strip().split()))[:n]
a = list(set(a))
a.sort(reverse = True)
print(a[1])
