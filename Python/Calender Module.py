# Enter your code here. Read input from STDIN. Print output to STDOUT
import calendar


date=list(map(str,input().split()))
year,day,month=int(date[2]),int(date[1]),int(date[0])
c=calendar.weekday(year, month, day)
if(year<=2000 or year>=3000):
    exit()
if(c==0):
    print("MONDAY")
if(c==1):
    print("TUESDAY")
if(c==2):
    print("WEDNESDAY")
if(c==3):
    print("THURSDAY")
if(c==4):
    print("FRIDAY")
if(c==5):
    print("SATURDAY")
if(c==6):
    print("SUNDAY")
