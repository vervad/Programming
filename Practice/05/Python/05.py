x0 = float(input())
v0 = float(input())
t = float(input())
a = 9.8

xt = x0 + v0 * t - (a * t * t) / 2
x = abs(x0 - xt)
print(x)
