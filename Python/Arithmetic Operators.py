import sys
a = int(input())
b = int(input())
if((a>=1 and a<=10000000000) and (b>=1  and b<=10000000000)):
    print(a+b)
    print(a-b)
    print(a*b)
else:
    sys.exit()
