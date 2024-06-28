a=10
b=2
# format() with basic
print("{}+{}={}".format(a,b,a+b))
print("{}-{}={}".format(a,b,a-b))
# format() with index
print( "{0}*{1}={2}".format(a,b,a*b) )
print("{0}/{1}={2}".format(a,b,a/b))
# format() wiht name
print("{a1}%{b1}={r1}".format(a1=a,b1=b,r1=a%b))
print("{a1}**{b1}={r1}".format(a1=a,b1=b,r1=a**b))

