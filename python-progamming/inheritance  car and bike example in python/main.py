# supper class
class Father:
    def __init__(self,name):
        self.name=name
    def car(self,name):
        print(self.name,"Car is driving now")
# sub class
class Son(Father):
    def bike(self,name):
        print(self.name,"Bike is driving now")

# supper class an object created 
f1=Father("Father")
# calling car()
f1.car("Father")
# calling bike()
#f1.bike() # AttributeError: 'Father' object has no attribute 'bike'

#### Sub class an object created
s1=Son("Son")

# calling car() by the son
s1.car("Son-1")
# calling bike() by the son
s1.bike("Son-1")

    