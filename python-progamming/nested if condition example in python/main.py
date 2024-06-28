a=int(input("Enter A:"))
b=int(input("Enter B:"))
c=int(input("Enter C:"))
if a<b:
    print("A<B")
    if(b<c):
        print("B<C")
        if(a<c):
            print("A<C")
print("Done")