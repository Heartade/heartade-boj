num = int(input())
ls = list(range(1,num+1))
while len(ls)>1:
  ls = ls[1:]
  ls = ls[1:]+[ls[0]]
print(ls[0])
