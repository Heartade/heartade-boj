def get_tri_num(num):
  ret = 1
  a = 1
  while a < num:
    ret += 1
    a += ret
  return ret+1
def get_ith_tri(num):
  ret = 0
  for i in range(num):
    ret += i
  return ret

i = int(input())
x = get_tri_num(i)
y = get_ith_tri(x-1)
z = i-y

if x%2 == 1:
  print(str(z)+'/'+str(x-z))
else:
  print(str(x-z)+'/'+str(z))
