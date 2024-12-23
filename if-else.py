# age=12

# if age>18:
#     print("eleigible")
# else:
#     print("not eligible")

# a=100
# b=20
# c=30

# # nested if 
# if a>b:
#     if a>c:
#         print("A is greater")
#     else:
#         print("B is greater")
# else:
#     if b>c:
#         print("B is greater")
#     else:
#         print("C is greater")

   
# # ladder if 

# if a>b and a>c:
#     print("A is greater")
# elif b>a and b>c:
#     print("B is greater")
# elif c>a and c>b:
#     print("C is greater")
# else:
#     print("All are equal")

# marks = 90

# if marks>=90:
#     print("grade is A+")
# elif marks>=60 and marks<=89:
#     print("grade is A")
# elif marks>=40 and marks<=59:
#     print("grade is B")
# elif marks<=40:
#     print("grade is c")
# else:
#     print("considered fail")


# simple calcualtor using A,b and choice.

# Function to perform arithmetic operations
def calculator(A, B, choice):
    if choice == 1:
        return A + B
    elif choice == 2:
        return A - B
    elif choice == 3:
        return A * B
    elif choice == 4:
        if B != 0:
            return A / B
        else:
            print("Error, Division by zero.")
    else:
        print("invalid choice")

# Taking user input
A = int(input("Enter the value for A: "))
B = int(input("Enter the value for B: "))

print("Select operation:")
print("1. Add")
print("2. Subtract")
print("3. Multiply")
print("4. Divide")
choice = int(input("Enter choice (1/2/3/4): "))

result = calculator(A, B, choice)
print("Result:", result)
