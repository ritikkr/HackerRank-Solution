import sys
def swap_case(s):
    if(len(s)<0 or len(s)>(1000)):
        sys.exit()
    a=str()
    for i in range(0,len(s)):
        if(s[i].islower()==True):
            a+=s[i].upper()
        elif(s[i].isupper()==True):
            
            a+=s[i].lower()
        else:
            a+=s[i]
           
    return a

