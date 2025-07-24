import random

n = 1_000
m = 100

print(n, m)
for _ in range(m):
    a = random.randint(1, 100)
    b = random.randint(1, a - 1)
    print(a, b)
