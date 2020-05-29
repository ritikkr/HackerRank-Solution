import itertools
A = list(map(int, input().split()))
B=list(map(int, input().split()))

if(len(A)<=0 or len(A)>30):
    exit()
if(len(B)<=0 or len(B)>30):
    exit()

for i in itertools.product(A,B):
    print(i,end=" ")
