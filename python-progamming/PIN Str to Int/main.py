'''
print() and input(), type(), int() function example

'''
# example
PIN=input("Enter a PIN:") # everything taking data as string format
# string value
print("PIN=%s"%PIN)
print("type(PIN): ",type(PIN))

# Converting str to int
pin=int(PIN)
# digit value
print("PIN=%d"%pin)
# int type
print("type(pin): ",type(pin))
# int + int = int
print(pin+10)
