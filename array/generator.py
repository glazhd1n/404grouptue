from random import randrange


n = randrange(1, 1000)
print(n)
for i in range(n):
    print(randrange(100, 1000), end=" ")