if __name__ == '__main__':
    n = int(input())
    integer_list = map(int, input().split())
    c=[]
    for i in integer_list:
        c.append(i)
    t=tuple(c)
    #print(t)
    print(hash(t))
