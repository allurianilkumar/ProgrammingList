#print(10/0)
#The try block will generate a NameError, because x is not defined:

try:
  x=10
  print(x/0)
except NameError:
  print("Variable x is not defined")
except ZeroDivisionError:
  print("Division by zero")
except:
  print("Something else went wrong")
