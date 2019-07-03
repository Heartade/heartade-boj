def get_n(arr,X):
  mar = arr.copy()
  mar.sort()
  var = [0]*len(arr)
  cur = 0
  ret = 0
  while var[X] == 0:
    if mar[-1] > arr[cur]:
      cur += 1
    else:
      if arr[cur] == mar[-1]: mar = mar[:-1]
      if var[cur] == 0:
        var[cur] = 1
        ret += 1
      cur += 1
    cur = cur%len(arr)
  print(ret)

num = int(input())
for i in range(num):
  k = input().strip().split()[-1]
  k = int(k)
  arr = input().strip().split()
  get_n(arr,k)  
