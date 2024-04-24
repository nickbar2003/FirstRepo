import math


print("Enter variable a") 
a = input()
print("Enter variable b") 
b = input()
print("Enter variable c") 
c = input()

a = int(a)
b = int(b)
c = int(c)

toBeRooted = (b * b - (4 * a * c))
if(toBeRooted > 0):
    rightSide = math.sqrt(toBeRooted)
    b = 0 - b

    pos = (b + rightSide) / (2 * a)
    neg = (b - rightSide) / (2 * a)
    print("Out put roots are: ", pos," ",  neg) 
else:
    print("Complex Roots")

