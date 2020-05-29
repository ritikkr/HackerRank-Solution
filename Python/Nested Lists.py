import sys
if __name__ == '__main__':
    student=int(input())
    if(student<2 or student>5):
        sys.exit()
    else:
        b=[] #for grade
        a=[[]for i in range(student)] #create an 5 empty list under one 
        '''for i in range(0,student):
        for j in range(0,2):
            a[i].append(j)'''
        for i in range(0,student):
            for j in range(0,2):
                if(j==0):
                    name=input()
                    a[i].append(name)
                else:
                    grade=float(input())
                    a[i].append(grade)
                    b.append(grade)

    b.sort()  #grades are sorted
    c=min(b)  #min of grade 
    count=b.count(c)
    for i in range(0,count):
        b.remove(c)
    secondmin=b[0]  #second minimum value will be grade[0]
    #print("second min =",secondmin)
    people=[]
    for i in range(0,student):
        name=a[i]
        for j in range(0,2):
            #print("a[",i,"][",j,"]=",a[i][j])
            if(j==1):
                    if(a[i][j]==secondmin):
                        people.append(name[0])
                        #print(name[0])
    people.sort()
    for i in people:
        print(i)
