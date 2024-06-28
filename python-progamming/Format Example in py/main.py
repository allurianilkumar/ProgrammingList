#format() function Example
# --> this is called string function.
a=11
b=22
c=33
# 1. format() function with basic
print("a={},b={},c={}".format(a,b,c))
# 2. format() function with index
print("a={0},b={1},c={2}".format(a,b,c))
# 3. format() function with naming
print("a={a1},b={b1},c={c1}".format(a1=a,b1=b,c1=c))

