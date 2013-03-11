#expression to Reverse Polish Notation (or Postfix Notation)
import string

#testcases
t = int(raw_input())

for x in range(t):
  stack = []
  output = []
  operators = []
  rpn = ''
  exp = raw_input()
  for char in exp:
    if char == '(':
      stack.append('(')
    elif char == ')':
      output.append(operators.pop())
      stack.pop()
    elif char in string.ascii_lowercase:
      output.append(char)
    else:
      operators.append(char)
  for char in output:
    rpn = rpn + char
  print rpn