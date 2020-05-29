  from __future__ import division
  def average(array):
    #print(array)
    s=set(array)
    #print(s)

    sum=0
    for i in s:
        sum=sum+i
    #print("total sum =",sum)
    average=sum/len(s)
    return average
    
if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    result = average(arr)
    print result
