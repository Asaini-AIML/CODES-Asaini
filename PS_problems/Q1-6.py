#Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
l=int(input("enter the length",))
b=int(input("enter the length",))
h=int(input("enter the length",))
if (l==b==h):
    print("tringle is equilateral")
elif(l==b) or (b==h)or (h==l):
    print("triangle is isosceles")
else:
    print("triangle is scalene")