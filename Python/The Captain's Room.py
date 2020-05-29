# Enter your code here. Read input from STDIN. Print output to STDOUT
'''
k=int(input())
room_list=list(map(int,input().split()))
print()
for i in range(0,len(room_list)):
    if(room_list.count(room_list[i])!=k):
        cr=room_list[i]
print(cr)
print (i for i in room_list if: count(i)!=k)
'''
k,arr = int(input()),list(map(int, input().split()))

myset = set(arr)

print(((sum(myset)*k)-(sum(arr)))//(k-1))
