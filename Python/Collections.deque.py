# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import deque
import re
n=int(input())
d=deque()
for i in range(0,n):
    command=input()
    if re.match('append',command):
        if(len(command)>9):
            value=int(command[10:])
            
            d.appendleft(value)
        else:
            value=int(command[7:])
            
            d.append(value)
    if re.match('pop',command):
        if(len(command)>4):
            d.popleft()
        else:
            
            d.pop()

print(*d)
