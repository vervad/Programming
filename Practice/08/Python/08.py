a, o, b = input().split(' ')
a = int(a)
b = int(b)
if o == '+':
    result = a+b
    print(result)
elif o == '-':
    result = a-b
    print(result)
elif o == '*':
    result = a*b
    print(result)
elif o == '/':
    result = a/b
    print(result)
else: print("Введён неверный символ.")

