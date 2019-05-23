def get_num(h, w, dist):
  hh=dist%h # 층
  ww=dist//h # 호실 번호
  if hh==0: # 0층은 없기 때문에...
    hh=h # 0YY 형태의 방은 H(YY-1) 형태로 옮겨 줘야 함
    ww-=1
  ww+=1 # 방 번호는 0이 아닌 1부터 시작하므로
  return str(hh)+str(ww).zfill(2)

num = int(input())
ls = []
for i in range(num):
  n = input().split()
  ls.append([int(n[0]),int(n[1]),int(n[2])])

for i in ls:
  print(get_num(i[0],i[1],i[2]))
