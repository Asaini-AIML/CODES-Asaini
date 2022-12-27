#Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.
X=int(input("enter the x cordinate\n",))
Y=int(input("enter the y corddinate\n"))
if(X>=0) and (Y>=0):
    print("first quadrant")
elif(X<0) and (Y>=0):
    print("second quadrant")
elif(X<0)and (Y<0):
    print("third quadrant")
else:
    print("fourth quadrarnt")