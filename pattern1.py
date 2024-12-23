# # total number rows
# for j in tange(1,6): 
# # total number of coumn
#     for i in range (1,6):
#         print("*",end="")
#     print("")

# * 
# **
# ***
# ****
# *****

# for i in range (1,6):
#     for j  in range (1,i+1):
#         print("*",end="")
#     print("")

# or 

# starCount=1
# for i in range (1,6):
#     for j  in range (1,i+1):
#         print("*",end="")
#     print("")
# starCount+=1

# *****
# ****
# ***
# **
# *

# for i in range (5,0,-1):
#     for j  in range (1,i+1):
#         print("*",end="")
#     print("")

# lines=10
# starCount=lines-1
# for i in range (1,lines):
#     for j  in range (starCount):
#         print("*",end="")
#     print("")
#     starCount-=1


#     *    *****
#    **     ****
#   ***      ***
#  ****       **
# *****        *


# lines=7
# starCount=lines-1
# spaceCount=0
# for i in range (1,lines):
#     for k in range(spaceCount):
#         print(" ",end="")
#     for j in range (starCount):
#         print("*",end="")
#     print("")
#     starCount-=1
#     spaceCount+=1

#    *
#   * *
#  * * *

# lines=7
# starCount=lines-1
# spaceCount=0
# for i in range (1,lines):
#     for k in range(spaceCount):
#         print(" ",end="")
#     for j in range (starCount):
#         print("*",end=" ")
#     print("")
#     starCount-=1
#     spaceCount+=1

# lines=7
# mid=(lines//2)+1
# # print(mid)
# starCount=1
# spaceCount=lines-1
# for i in range (1,lines+1):
#     for k in range(spaceCount):
#         print(" ",end="")
#     for j in range (starCount):
#         print("*",end=" ")
#     print("")
#     if (mid>i):
#         starCount+=1
#         spaceCount-=1
#     else:
#         starCount-=1
#         spaceCount+=1


# hollow diamond , t , h , 1357 star pattern

# T pattern

# def print_pattern(n):
#     for row in range(n):
#         for column in range(n):
#             if (
#                     # first row
#                     (row == 0) or
#                     # middle column
#                     (column == n//2)
#             ):
#                 print("*", end=" ")
#             else:
#                 print(" ", end=" ")
#         print()
# size = int(input("Enter a size: \t"))
# if size < 8:
#     print("Enter a size minimum of 8")
# else:
#     print_pattern(size)

# H pattern



# hollow pattern

# lines=7
# mid=(lines//2)+1
# # print(mid)
# starCount=1
# spaceCount=lines-1
# for i in range (1,lines+1):
#     for k in range(1,spaceCount+1):
#         print(" ",end="")
#     for j in range (1,starCount+1):
#         # condition is j=1 and starCount=1 it will print only at this point, then move to other numbers point. 
#         if j==1 or j==starCount:
#             print("*",end=" ")
#             # otherwise, it will give space at other points.
#         else:
#             print(" ",end=" ")
#     print("")
#     if (mid>i):
#         starCount+=1
#         spaceCount-=1
#     else:
#         starCount-=1
#         spaceCount+=1


# 12345 star pattern , 1357 pattern

# lines=7
# starCount=1
# spaceCount=lines-1
# for i in range (1,lines):
#     for k in range(spaceCount):
#         print(" ",end="")
#     for j in range (starCount):
#         print("*",end=" ")
#     print("")
#     starCount+=1
#     spaceCount-=1

# 1
# 12
# 123
# 12345

# starCount=1
# for i in range (1,6):
#     for j in range(1,starCount+1):
#         print(j,end=" ")
#     print("")
#     starCount+=1

# 1
# 23
# 345
# 4567
# 56789

# for j in range(5):
#     for i in range (j+1):
#         print(j+i+1,end=" ")
#     print("")

# 1
# 23
# 456
# 78910

# num=1
# for j in range(5):
#     for i in range (j+1):
#         print(num,end=" ")
#         num=num+1
#     print("")

# 0
# 10
# 010
# 1010
# 01010

# num=1
# for j in range(5):
#     for i in range (j+1):
#         # odd+even=  ,even+odd= 
#         print((j+i)%2,end=" ")
#     print("")

# home work

# a
# bc
# def
# ghij

# for i in range(1, 6):
#     for j in range(65, 65+i):
#         a = chr(j)
#         print(a, end=" ")
#     print()



# Pascal triangle

# def solve(n):
#    for i in range(n+1):
#       for j in range(n-i):
#          print(' ', end='')

#       C = 1
#       for j in range(1, i+1):
#          print(C, ' ', sep='', end='')
#          C = C * (i - j) // j
#       print()

# n = 5
# solve(n)

