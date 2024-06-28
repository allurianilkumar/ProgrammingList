# simple example
print(1+1+1)
a=1
b=2
print(a+b)
print("MOM IT Solutions")
print('MOM IT Solutions')
print("A+b=",(a+b))
print('A+B=%d'%(a+b))
c=1.5
print("A+B+C=%f"%(a+b+c))
print("A+B+C=",(a+b+c))
print("A+B+C=%.2f"%(a+b+c))
print("A+B+C=%.3f"%(a+b+c))
print("A+B+C=%.0f"%(a+b+c))
# ** and pow() example
print(a*b)
print(c**b)
print(25**2)
print(pow(25,2)) # 625

# How to know type of the value
print(type(100)) # int
print(type('MOM')) # str
print(type(1.5)) # float
print(type(1<2)) # bool

# converting from one data type to another data type

#1. int to float
d=100
print(float(d)) # 100.0

#2. str to int
e="101"
print(e) # '101' is a string type`
print(int(e)+1) # 101+1 =>102

#3. str to float
f="101"
print(f) # '101' is a string type`
print(float(f)+1) # 101.0+1 =>102.0

# 4. strin to int
# print(int("MOM")) # ValueError: invalid literal for int() with base 10: 'MOM'

#5. float to int
g=123.5
print(int(g)) #123


# 6. string with float value into int type
h="123.5"
# print(int(h)) # ValueError: invalid literal for int() with base 10: '123.5'

























