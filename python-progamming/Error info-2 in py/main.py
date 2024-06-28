pin=int(999.12) # converting float to int.
print("PIN=",pin) # 999
value="123.45"

# ValueError: invalid literal for int() with base 10: '123.45'
a=int(value) # converting str to int
# Error Hint: str contains "." value so that get the error.
# not converting "." symbol into integer   type
# "." is not number so that getting an error.
print(a) 


