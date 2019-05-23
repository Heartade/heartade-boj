n = 1
while True:
  x = input()
  if x.strip().split()[1]=='E': break
  print("Case "+str(n)+": "+str(eval(x)).lower())
  n += 1
