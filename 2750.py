n = int(input())
l = []
for i in range(n):
    l.append(int(input()))
for i in range(len(l)):
    for j in range(i+1,len(l)):
        if l[i]>l[j]: l[i],l[j]=(l[j],l[i])
for i in l: print(i)
