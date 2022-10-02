n, a = input(), list(map(int, input().split()))

mx, mn = max(a), min(a)
for i in range(len(a)):
    if(a[i] == mx):
        a[i] = mn

print(*a)