import math

a = float(input())
b = float(input())
c = float(input())

if a == 0:
    if b ==0:
        print("Действительных корней нет.")
    else:
        x1 = -(c / b)
        print("x1 =", x1)
else:
    D = b ** 2 - 4 * a * c
    if D < 0:
        print("Действительных корней нет.")
    elif D == 0:
        x1 = -(b / (2 * a))
        print("x =", x1)
    else:
        x1 = -b + math.sqrt(D) / (2 * a)
        x2 = -b - math.sqrt(D) / (2 * a)
        print("x1 =", x1)
        print("x2 =", x2)
