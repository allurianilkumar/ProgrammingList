class Father:
    def car(self):
        print("car")
class Son(Father):
    def bike(self):
        print("bike")

f1=Father()
s1=Son()

f1.car()
s1.car()
s1.bike()
f1.bike()