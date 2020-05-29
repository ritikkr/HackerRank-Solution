# Enter your code here. Read input from STDIN. Print output to STDOUT
t=int(input())
for i in range(t):
    n_a,A=int(input()),set(map(int,input().split()))
    n_b,B=int(input()),set(map(int,input().split()))
    print(A.issubset(B))
