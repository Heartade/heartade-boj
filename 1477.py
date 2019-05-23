import math

def tr(tries_left, ls):
  if tries_left == 0: return ls[-1]
  ret = []
  for i in range(1, tries_left+1):
    lls = ls.copy()
    x = lls[-1]
    lls = lls[:-1]
    lls += [x/(i+1)]*(i+1)
    lls.sort()
    ret.append(math.ceil(tr(tries_left-i, lls)))
  return(min(ret))

i1 = input().strip().split()
N = int(i1[0])
M = int(i1[1])
L = int(i1[2])
i2 = input().strip().split()
for i in range(len(i2)):
  i2[i]=int(i2[i])
i2.sort()
i3 = i2.copy()
for i in range(1, len(i2)):
  i3[i] = i2[i]-i2[i-1]
i3.sort()
print(tr(M,i3))

