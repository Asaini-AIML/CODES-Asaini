#find the largest number among the three numbers entered by the user.
a=int(input("enter the first number\n",))
b=int(input("enter the second number\n",))
c=int(input("enter the third number\n",))
if(a>b)&(a>c):
    print("a is the largest among three")
elif(b>a)&(b>c):
    print("b is greatest among these")
else:
    print("c is largest among these")
