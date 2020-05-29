def count_substring(string, sub_string):
    if(len(string)<1 or len(string)>200):
        exit()
    count=0
    l=len(sub_string)
    for i in range(0,len(string)):
        if(string[i:i+l]==sub_string):
            count=count+1
    
    return count
