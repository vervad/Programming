from math import pow
f = 0
i = 1
b = ''
n = int(input("Введите количество билетов\n"))
if n < 1 or n > pow(10, 9):
    print ("Неверный ввод")
print ("Введите билеты")
for i in range (n):
    a = str(input())
    if a[0] == 'a' and a[4] == '5' and a[5] == '5' and a[6] == '6' and a[7] == '6' and a[8] == '1':
        b = b + ' ' + a
    else:
        f = f + 1
if f == n:
    print ("-1")
else:
    print (b)
