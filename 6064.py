n = int(input())
def get_gcd(a,b):
  if a>b:
    return get_gcd(b,a)
  elif a==0:
    return b
  else:
    return get_gcd(b%a,a)
def find_nm(a,b):
  s = 0
  o_s=1
  t = 1
  o_t=0
  r = b
  o_r=a
  while r != 0:
    q = o_r//r
    o_r,r = (r,o_r-q*r)
    o_s,s = (s,o_s-q*s)
    o_t,t = (t,o_t-q*t)
  return (o_s,o_t)
def get(a,b,c,d):
#  t = ax+c = by+d
#  t ≡ c (mod a)
#  t ≡ d (mod b)
#  find n, m s.t. an+bm = 1
#  t= cbm+dan
#   = c(1-an)+dan = c+(d-c)an -> t ≡ c (mod a)
#   = cbm+d(1-bm) = (c-d)bm+d -> t ≡ d (mod b)
#  find n, m s.t. an+bm = gcd
#  t= xbm
#  t= x(gcd-an) = xgcd-xan ≡ xgcd (mod a)
#  t=
  gcd = get_gcd(a,b)
  if c>d:
    xgcd = c-d
    ygcd = 0
    if xgcd%gcd != 0:
      print(-1)
      return
    x = xgcd/gcd
    n,m = find_nm(a,b)
    print(int(xgcd-(x*a*n)+d+(a*b/gcd)))
  else:
    xgcd = 0
    ygcd = d-c
    if ygcd%gcd != 0:
      print(-1)
      return
    y = ygcd/gcd
    n,m = find_nm(a,b)
    print(int(ygcd-(y*b*m)+c+(a*b/gcd)))

  
for i in range(n):
  x = input().split()
  get(int(x[0]),int(x[1]),int(x[2]),int(x[3]))
  
