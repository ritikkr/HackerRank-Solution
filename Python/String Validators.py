def printf(s):
    a=0
    d=0
    aln=0
    for i in range(0,len(s)):
        if(s[i].isalnum()==True):
            aln=aln+1
            print('True')
            break
    if(aln==0):
        print('False')
    for i in range(0,len(s)):
        if(s[i].isalpha()==True):
            a=a+1
            print('True')
            break
    if(a==0):
        print('False')
    for i in range(0,len(s)):
        if(s[i].isdigit()==True):
            d=d+1
            print('True')
            break
    if(d==0):
        print('False')
    l=0
    for i in range(0,len(s)):
        if(s[i].islower()==True):
            l=l+1
            print('True')
            break
    if(l==0):
        print('False')
    u=0
    for i in range(0,len(s)):
        if(s[i].isupper()==True):
            u=u+1
            print('True')
            break
    if(u==0):
        print('False')
if __name__ == '__main__':
    s = input()
    if(len(s)<=0 or len(s)>=1000):
        exit()
    printf(s)
