h1, m1 = map(int, input().split(":"))
h2, m2 = map(int, input().split(":"))
m1 += h1 * 60
m2 += h2 * 60
if (abs((m2 + h2 * 60) - (m1 + h1 * 60)) <= 15):
    print("Встреча состоится")
else:
    print("Встреча не состоится")
