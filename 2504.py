s = input()
stack = []

def err():
  print (0)
  quit()

def pop():
  global stack
  try:
    r = stack[-1]
    stack = stack[:-1]
    return r
  except:
    err()

def push(x):
  global stack
  stack.append(x)

def pop_until(s):
  global stack
  ret = 0
  try:
    while stack[-1] != s:
      ret += pop()
    stack = stack[:-1]
    return ret
  except:
    err()

for letter in s:
  if letter in '([':
    push(letter)
  else:
    if letter == ']':
      x = pop_until('[')
      if x == 0:
        push(3)
      else:
        push(3*x)
    elif letter == ')':
      x = pop_until('(')
      if x == 0:
        push(2)
      else:
        push(2*x)

try:
  ret = 0
  for x in stack:
    ret += x
  print(ret)
except:
  err()
