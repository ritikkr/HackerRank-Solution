n = int(input())
s = set(map(int, input().split()))
no_of_command=int(input())
command_list=[]
for i in range(0,no_of_command):
    command=input()
    command_list.append(command)
for i in range(0,no_of_command):
    if('remove' in command_list[i]):
        value=int(command_list[i][7:])
        s.remove(value)
    if('pop' in command_list[i]):
        s.pop()
    if('discard' in command_list[i]):
        value=int(command_list[i][7:])
        s.discard(value)
sum=0
for j in s:
    sum=sum+j
print(sum)
