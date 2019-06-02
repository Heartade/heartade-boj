visit = [False]*1001

num_visited = 0

manifest = input().split()
N = int(manifest[0])
M = int(manifest[1])
V = int(manifest[2])

node = []

for i in range(N+1): node.append([])

for i in range(M):
  edge = input().split()
  node[int(edge[0])].append(int(edge[1]))
  node[int(edge[1])].append(int(edge[0]))

for i in range(N+1):
  node[i].sort()

ls = [V]

s = ''
while num_visited < N:
  if len(ls) == 0: break
  v = ls.pop()
  while visit[v]:
    v = ls.pop()
  visit[v] = True
  s = s+str(v)+' '
  num_visited += 1
  for i in range(len(node[v])-1,-1,-1):
    vertex = node[v][i]
    if not visit[vertex]:
      ls.append(vertex)
print(s)

visit = [False]*(N+1)
ls = [V]

s = ''
num_visited = 0
while num_visited < N:
  if len(ls) == 0: break
  v = ls[0]
  ls = ls[1:]
  while visit[v]:
    v = ls[0]
    ls = ls[1:]
  visit[v] = True
  s = s+str(v)+' '
  num_visited += 1
  for i in range(len(node[v])):
    vertex = node[v][i]
    if not visit[vertex]:
      ls.append(vertex)
print(s)
