#Packing the balloons
#Score 1
t = int(raw_input())
for x in range(t):
  row = raw_input()
  dimensions = row.split(" ")
  l = int(dimensions[0])
  b = int(dimensions[1])
  h = int(dimensions[2])
  minimum = l
  if b < minimum:
    minimum = b
  if h < minimum:
    minimum = h
  if minimum % 2 == 0:
    ans = minimum / 2
    print str(ans) + ".0"
  else:
    ans = (minimum - 1) / 2
    print str(ans) + ".5"