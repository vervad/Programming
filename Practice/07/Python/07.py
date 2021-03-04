import math

choice = int(input())
if choice == 1:
    a = float(input())
    b = float(input())
    c = float(input())
    if (a < b + c) & (b < a + c) & (c < a + b):
        p = (a + b + c) / 2
        S = math.sqrt(p * (p - a) * (p - b) * (p - c))
        print("S =", S)
    else: print("Такого треугольника не существует.")
elif choice == 2:
    Ax, Ay = map(float, input().split())
    Bx, By = map(float, input().split())
    Cx, Cy = map(float, input().split())
    a = math.sqrt((Bx - Ax) * (Bx - Ax) + (By - Ay) * (By - Ay))
    b = math.sqrt((Cx - Bx) * (Cx - Bx) + (Cy - By) * (Cy - By))
    c = math.sqrt((Cx - Ax) * (Cx - Ax) + (Cy - Ay) * (Cy - Ay))
    if (a < b + c) & (b < a + c) & (c < a + b):
        p = (a + b + c) / 2
        S = math.sqrt(p * (p - a) * (p - b) * (p - c))
        print("S =", S)
    else: print("Такого треугольника не существует.")
else:
    print("Ошибочный ввод")
