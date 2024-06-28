a=123 
print(a) #123
print("%f"%a) # 123.000000
print("%d"%a) # 123
print("%s"%"HELLO") # HELLO
name="MOM"
print("%s"%name)
# input() and raw_input()
myName=input("Enter name:");
print(myName)
print(type(myName))
# adding two values
aa=input("Enter a:") # 1
bb=input("Enter b:") # 2
print(aa+bb) # 12
print(int(aa)+int(bb)) #1+2 =3
aa=float(aa)
bb=float(bb)
print(aa+bb) # 1.0+2.0=3.0
# to show the result as string type
print("A+B="+str(aa+bb))

# format() function
# it is string function
print("A is {}".format(101)) # A is 101
print("A = {}, B= {}".format(101,202)) # A=101, b=202
print("A = {0}, B= {1}".format(101,202)) # A=101, b=202
print("A = {1}, B= {0}".format(101,202)) # A=202, b=101
print("A={aNick}, b={bNick}".format(aNick=111,bNick=222))



















