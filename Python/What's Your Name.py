def print_full_name(a, b):
    if(len(a)<0 or len(a)>10):
        exit()
    if(len(b)<0 or len(b)>10):
        exit()
    b=b+'!'
    print("Hello",a,b,"You just delved into python.")
