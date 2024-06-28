# TypeError: can only concatenate str (not "int") to str
# print("a"+1) 
# TypeError: unsupported operand type(s) for +: 'int' and 'str'
# print(1+"a") 

print(1<2) # True ( bool type)
print(type(1<2))

# sum of two value
a=float(input("Enter A:"))
b=float(input("Enter B:"))
print("Sum of two value is",(a+b))
print("Sum of two value is %d"%(a+b))
print("Sum of two value is %f"%(a+b))
print("Sum of two value is %.2f"%(a+b))
print("Sum of two value is "+str(a+b))
print("Sum of two values is {}".format(a+b))
print("Sum of two values is {0}".format(a+b))
print("Sum of two values is {sum}".format(sum=a+b))


