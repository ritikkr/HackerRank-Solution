# Enter your code here. Read input from STDIN. Print output to STDOUT
m=int(input())
x = list(map(int, input().split())) 
n=int(input())
y= list(map(int, input().split())) 
listx=set(x)
listy=set(y)
adb=listx.difference(listy)
bda=listy.difference(listx)
final=list(adb.union(bda))
final.sort()
for i in final:
    print(i)
