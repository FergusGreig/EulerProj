
x = 1 #starts on monday
year = 1900
jday = 1
sumsun=0
while (year <2001):
    if year%4 == 0 and year != 1900:
        eoy = 366
        firstdays = [1,32,61,92,122,153,183,214,245,275,306,336]
    else:
        eoy =365
        firstdays = [1,32,60,91,121,152,182,213,244,274,305,335]
    if (x==7):
        x=0  
        if jday in firstdays and year>1900:
            sumsun+=1
    if jday == eoy:
        jday = 0
        year +=1
    jday+=1
    x+=1
print(sumsun)