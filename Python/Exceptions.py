# Enter your code here. Read input from STDIN. Print output to STDOUT
t=int(input())
for i in range(t):

    try:
        a,b=input().split()
        a,b=int(a),int(b)
        print(a//b)
    except ZeroDivisionError as e: 
        print("Error Code:",e)
    except ValueError as e:
        print("Error Code:",e)
