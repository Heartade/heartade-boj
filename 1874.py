def main():
  #num = int(input())
  #ls = []
  #for i in range(num):
  #  ls.append(int(input()))

  num = 100000
  ls = list(range(100000,0,-1))
  print(ls)
  numbers = ls.copy()
  numbers.sort()

  pos = 0
  stack = []
  act = ''
  stack.append(numbers[0])
  numbers = numbers[1:]
  act = act+'+\n'
  while pos < num:
    while len(stack) == 0 or stack[-1] != ls[pos]:
      if len(numbers) == 0:
        return 'NONE'
      stack.append(numbers[0])
      numbers = numbers[1:]
      act = act+'+\n'
    stack.pop()
    act = act+'-\n'
    pos += 1
  return act

act = main()
print(act)
