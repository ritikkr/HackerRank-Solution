
import array as arra
import sys
n = int(input())
arr = map(int, input().split())
numbers_array = arra.array('i', arr)
list2=sorted(numbers_array)
for i in range(0,len(list2)):
    if((n<2 or n>10 ) and (list2[i]<(-100) or n>100)):
        sys.exit()
    else:
        #print(list2)
        max_number=max(list2)
        index_of_max_number=list2.index(max_number)
        #print("max is :",max_number)
        #print("and index is: ",index_of_max_number)
print(list2[index_of_max_number-1])     
