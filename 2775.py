ls = []
for i in range(16):
  ls.append([1]*16)

for i in range(1,16):
  for j in range(1,16):
    ls[i][j] = ls[i-1][j]+ls[i][j-1]


num = int(input())
for i in range(num):
  x = int(input())
  y = int(input())
  print(ls[x+1][y-1])
