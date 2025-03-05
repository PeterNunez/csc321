"""
Pedro Nunez
csc-321
lab #8
"""

import random 

randNum = random.randint(0,9)

x = 0
y = 0

print("Guess a number between 0 - 9: ")

y = int(input())

if y < randNum:
    print("Ahh Unluky guess its too low")
    print("YOU LOSE")
else:
    print("Lucky guess your number is higher")
    print("YOU WIN")


for i in range(3):
    print("I am a Jedi, like my father before me")

while x < 10:
    print("My favorite food item is mochi")
    x = x + 1
