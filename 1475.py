x = [0]*10
i = input()
for char in i:
  x[int(char)]+=1
x[6] = x[6]+x[9]
if x[6]%2==1: x[6]=(x[6]+1)//2
else: x[6] = x[6]//2
print(max(x[:-1]))
