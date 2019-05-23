import os
num = int(input())

def mergesort(ls):
  if len(ls)==1: return ls
  lls = mergesort(ls[:len(ls)//2])
  rls = mergesort(ls[len(ls)//2:])
  ret = []
  lind = 0
  rind = 0
  while True:
    while lind < len(lls) and lls[lind] <= rls[rind]:
      ret.append(lls[lind])
      lind += 1
    if lind == len(lls): return ret + rls[rind:]
    while rind < len(rls) and rls[rind] <= lls[lind]:
      ret.append(rls[rind])
      rind += 1
    if rind == len(rls): return ret + lls[lind:]
  return ret
    

ls=[]
for i in range(num):
  ls.append(int(input()))
ls.sort()
for i in ls: print(i)
