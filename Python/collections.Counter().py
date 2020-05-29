# Enter your code here. Read input from STDIN. Print output to STDOUT

def getList(dict): 
    return dict.keys() 


from collections import Counter
x=int(input())

shoe_size = list(map(int, input().split()))
n=int(input())
sl=[[]]*n
a=[[]for i in range(n)] #create an 5 empty list under one 
for i in range(0,n):
    x,y =input().split()
    x=int(x)
    y=int(y)
    a[i].append(x)
    a[i].append(y)
mydict={}
for value in shoe_size:
    mydict[value]=mydict.get(value,0)+1
#
#print("my dict",mydict)
dv=[]
dk=[]
for key, value in mydict.items() :
    dk.append(key)
    dv.append(value)
price=0
for i in range(0,len(mydict)):
    count=0
    for j in range(0,len(a)):
       
        if(a[j][0]==dk[i]):
            
            price=price+a[j][1]
            count=count+1
            if(count==dv[i]):
                break
print(price)

'''
for i in range(0,n):
    a,b=input().split()
    value=(a,b)
    sl[i].append(value)
print(sl)
'''

