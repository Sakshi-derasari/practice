
# Task given in class 
# print the number is odd or even and then print 1 to 100 with even or odd tag.

# for A in range(100):
#     # print(A)
#     if(A%2==0):
#         print(f"{A} is even number")
#     else:
#         print(f"{A} is odd number")

# Prime number is the number is divisible by the number itself or 1
# for one number
# num=10
# flag=0  // check if the flag is 0 then move to another,or break
# for i in range(2,num):
#     if num%i==0:
#         flag=1
#         break

# if flag==0:
#     print(f"{num} is prime")
# else:
#     print(f"{num} is not prime")


# to check 0  to 100 prime or not

# for j in range(0,101):
#     num=j
#     flag=0
#     for i in range(2,num):
#         if num%i==0:
#             flag=1
#             break

#     if flag==0:
#         print(f"{num} is prime")
#     else:
#         print(f"{num} is not prime")


# study about armstrong number, fibonaacci series, factorial number, palindrome number

# 1.
#check if the number is an Armstrong number or not, fix value 

# take input from the user
# num = int(input("Enter a number: "))

# # initialize sum
# sum = 0

# # find the sum of the cube of each digit
# temp = num
# while temp > 0:
#    digit = temp % 10
#    sum += digit ** 3
#    temp //= 10

# # display the result
# if num == sum:
#    print(num,"is an Armstrong number")
# else:
#    print(num,"is not an Armstrong number")


# during class example practice, count and not fix value
# //153

# ######### counter ############
# number = int(input("enter number:"))
# temp = number
# count=0
# while number!=0:
#     rem = number%10
#     number = int(number/10)
#     count = count+1
# number = temp

# ######### armstrong #########

# sum = 0
# while number !=0:
#     rem = number%10
#     sum = sum +(rem**count)
#     number = int(number/10)

# if temp==sum:
#     print("armstrong")
# else:
#     print("not armstrong")



# print all the armstrong number that comes in between 100 to 999 or take two varibale from user 

# a = int(input("enter number to start:"))
# b = int(input("enter number to end:"))
# for i in range (a,b):
# # for i in range  (100,1000):
# ######### counter ##########
# # number = int(input("enter number:"))
#     number = i
#     temp = number
#     count=0
#     while number!=0:
#         rem = number%10
#         number = int(number/10)
#         count = count+1
#     number = temp

#     ######### armstrong #########

#     sum = 0
#     while number !=0:
#         rem = number%10
#         sum = sum +(rem**count)
#         number = int(number/10)

#     if temp==sum:
#         print(f"{temp} is armstrong")
#     else:
#         pass
#         # print(f"{temp} is not armstrong")


# 2.
# Python program to check if the number is an palindrome or not

# num = 1221
# temp = num
# rev = 0
# while temp > 0:
#     rem = temp % 10
#     rev = (rev * 10) + rem
#     temp = temp // 10
# if num == rev:
#   print(f'{num} is Palindrome')
# else:
#   print(f"{num} is Not Palindrome")


# 3. Fibonnacci series

# n_terms = int(input ("How many terms the user wants to print :"))  
  
# # First two terms  
# n_1 = 0  
# n_2 = 1  
# count = 0  
  
# # Now, check if the number of terms is valid or not  
# if n_terms <= 0:  
#     print ("Please enter a positive integer, the given number is not valid")  
# # if there is only one term, it will return n_1  
# elif n_terms == 1:  
#     print ("The Fibonacci sequence of the numbers up to", n_terms, ": ")  
#     print(n_1)  
# # Then we will generate Fibonacci sequence of number  
# else:  
#     print ("The fibonacci sequence of the numbers is:")  
#     while count < n_terms:  
#         print(n_1)  
#         nth = n_1 + n_2  
#        # At last, we will update values  
#         n_1 = n_2
#         n_2 = nth
#         count += 1

# class example 



# 4. Factorial number

# num = int(input("Enter a number: "))    
# factorial = 1    
# if num < 0:    
#    print(" Factorial does not exist for negative numbers")    
# elif num == 0:    
#    print("The factorial of 0 is 1")    
# else:    
#    for i in range(1,num + 1):    
#        factorial = factorial*i    
#    print("The factorial of",num,"is",factorial)

# class example

# number = 5
# fact=1 
# for i in range (1,number+1):
#     fact =fact*i
# print(fact)

# do it using while loop 
# number = 5
# fact=1 
# while number > 0:
#         fact =fact*number
#         number = number-1
# print(fact)


