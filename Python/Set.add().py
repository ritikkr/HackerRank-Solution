# Enter your code here. Read input from STDIN. Print output to STDOUT
n=int(input())
country_name=[]
for i in range(0,n):
    name=input()
    country_name.append(name)
#print(country_name)
country_name=set(country_name)
print(len(country_name))
