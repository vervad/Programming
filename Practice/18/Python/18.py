import collections
a = dict(collections.Counter('halloklempnerdasistfantastischfluggegecheimen'))
c = str(input())
f = [0]*len(c)
b = str('halloklempnerdasistfantastischfluggegecheimen')
t = float(1)
q = 0 
for i in range(len(c)):
    for j in range(len(b)):
        if (c[i] == b[j]):
            f[i] = f[i]+1 
for i in range(len(c)):
    if (f[i] == 0):
        q = 1 
if (q == 1):
    print('Неверная буква')
else:
    for i in range(len(c)):
        t = t*(a[c[i]]/len(b))
    print(t)
