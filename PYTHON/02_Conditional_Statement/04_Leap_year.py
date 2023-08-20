yr=int(input("Enter the year : "))
if yr%100==0:
    if yr%400==0:
        print(yr,"year is leap year")
    else:
        print(yr,"year is not a leap year")
else:
    if yr%4==0:
        print(yr,"year is leap year")
    else:
        print(yr,"year is not a leap year")
