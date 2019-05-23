def get_num(dist):
  x = 1
  dist_left = dist
  while dist_left > 2*x:
    dist_left -= 2*x
    x += 1
  if dist_left > x: return 2*x
  else: return 2*x-1

num = int(input())
ls = []
for i in range(num):
  n = input().split()
  ls.append([int(n[0]),int(n[1])])

for i in ls:
  print(get_num(i[1]-i[0]))
