# string functions

name = "Tops technologies"

# print(name)
# print(type(name))

# capitalize first letter of string
print(name.capitalize())

# whole string in same case
print(name.casefold())

# makes size of 50 and keep string in center. using * as fillcharacter.
print(name.center(50,'*'))

# check the character count with range.
print(name.count("T",0,7))

# check star or end 
print(name.endswith("logies"))

# to find the position and if character not found then return -1 in output.
print(name.find("te"))

print(name.index("Tea"))
# diff between find and index is when it get the position then give number and if didnot find then find will return -1 and index will return value error.


# argument
print("my name is {}".format("sakshi"))
print("my fname is {1} and lname is {0}".format("sakshi","derasari"))

# caracter should be alphanumeric to convert in number
print("1a3".isalnum())
print("123".isdigit())
print("abc".isalpha())

# check decimal number is or not
print("12".isdecimal())
print("10".isnumeric())
# if the first letter is not capital then it will return false,then use capitalize function to make it true.
print("Tops".istitle())

print("_".join("Tops"))
print("Tops".ljust(10,'*'))
print(name.partition("*"))
print(name.replace("s","t"))
print(name.split("s"))
print(name.swapcase())
