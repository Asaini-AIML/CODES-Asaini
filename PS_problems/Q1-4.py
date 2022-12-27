# check whether the year entered by the user is a leap year or not.
year = int(input("enter the year",))
if (year % 400 == 0) and (year % 100 == 0):
    print("enter year is leap year", year)
elif (year % 4 == 0) and (year100 != 0):
    print("year is leap year", year )
else:
    print("year is not leap year")
