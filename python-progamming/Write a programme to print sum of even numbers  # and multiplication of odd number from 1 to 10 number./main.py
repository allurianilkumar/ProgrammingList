# Write a programme to print sum of even numbers 
# and multiplication of odd number from 1 to 10 number.

# Logic
# sum => 2+4+6+8+10 =30
# mul => 1*3*5*7*9 = 945
sum=0
mul=1
n=10
for i in range(1,n+1):
    #print(i)
    if(i % 2 == 0):
        sum=sum+i
    else:
        mul=mul*i
print("SUM=",sum)
print("Mul=",mul)