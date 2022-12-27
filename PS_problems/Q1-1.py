''' Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and 
the grade (an uppercase character), and depending upon which the total salary is calculated as - 
totalSalary = basic + hra + da + allow – pf. where : hra = 20% of basic, da = 50% of basic, 
allow = 1700 if grade = ‘A’, allow = 1500 if grade = ‘B’, allow = 1300 if grade = ‘C' or any other character,
 pf = 11% of basic. Round off the total salary and then print the integral part only.'''
                          # *********************Answer***********************
Basicsal= int(input("enter the BA-",)) 
Grade=(input("enter the grade-",)) 
Hra=0.2*Basicsal
Da=0.5*Basicsal
Pf=0.11*Basicsal
if(Grade=='A'):
    Allow=1700 
elif(Grade=='B'):
    Allow=100
else:
    Allow=1300
totalSalary=int(Basicsal+Hra+Da+Allow-Pf )
print(totalSalary)        