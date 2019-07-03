(a,b)=input().split()
a = int(a)
b = int(b)
ls = list(range(1,a+1))
ret = []
while len(ls)>0:
  for i in range(b-1):
    a = ls[0]
    ls = ls[1:]
    ls.append(a)
  ret.append(ls[0])
  ls = ls[1:]
s = '<'
for x in ret:
  s = s+str(x)+', '
s = s[:-2]+'>'
print(s)
