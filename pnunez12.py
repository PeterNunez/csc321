#Pedro Nunez
#lab 12
#csc 321

def rectangle(base,height):
    area = base * height
    return area

def circle(radius):
    rad = radius * radius
    CArea = 3.14 * rad
    return CArea


x = int(input("Enter the base of the rectangle: "))
y = int(input("Enter the height of the rectangle: "))

recArea = rectangle(x,y)

print("The area of the rectangle is: ",recArea)

z = int(input("Enter the radius of the circle: "))

cirArea = circle(z)

print("The area of the circle is: ",cirArea)

