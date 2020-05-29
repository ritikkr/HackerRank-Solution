if __name__ == '__main__':
    N = int(input())
    c=[]
    a=[]
    for i in range(0,N):
        x=input()
        c.append(x)
    #print("list of command: ",c)
    for i in range(0,N):
        if(c[i].startswith("insert",0,len(c[i]))==True):
            a.insert(int(c[i][7]),int(c[i][9:]))

        if(c[i].startswith("print",0,len(c[i]))==True):
            print(a)
        if(c[i].startswith("remove",0,len(c[i]))==True):
            a.remove(int(c[i][7:]))
        if(c[i].startswith("sort",0,len(c[i]))==True):
            a.sort()
        if(c[i].startswith("append",0,len(c[i]))==True):
            a.append(int(c[i][7:]))
        if(c[i].startswith("pop",0,len(c[i]))==True):
            a.pop()
        if(c[i].startswith("reverse",0,len(c[i]))==True):
            a.reverse()
