a = float(input())
n = int(input())
b = 1
for i in range(abs(n)):
    b *= a
if n < 0:
    b = 1/b;
print(b)
