import math
while True:
    try:
        x = float(input("Введіть число х: "))
        break
    except:
        print("Wrong input")
k = 0
n = 2
s = 0
d = 1.0
f = 1.0
a = 0.0
t = bool(1)
while t:
    d *= x
    f *= n*(n-1)
    a = d / f
    n += 2
    k += 1
    s += a
    if k > 10 and abs(a) < 0.00001:
        t = 0
print(s)
# print(k)

