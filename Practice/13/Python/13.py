notprime = False
n = int(input())
for i in range(2, (n // 2) + 1):
    if n % i == 0:
        notprime = True
        print("Составное")
        break
if notprime == False:
    print("Простое")
