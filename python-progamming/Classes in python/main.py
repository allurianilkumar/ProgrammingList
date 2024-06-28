#Example:
class Person:
    name="MOM"
    def getMyName():
        print("My Function")
#Example
# to create an object
p1=Person()
print(p1.name)
print(p1.name)
#Example
class Person:
    name="MOM"
    def getMyName(self):
        print("Function")
#Create a object
p1=Person() # object is p1
# calling property of a class
print(p1.name)
# calling method by object
p1.getMyName()
#Example
class Person:
    name="MOM"
    # constructor
    def __init__(self):
        print("__init__()called when object is created")
        # Function
        def getMyname(self):
            print("Function")
# creating a object
p2=Person()
#Person()
#Exampe:

class Person:
    name=""
    age=0
    # self is currant object or present object
    def __init__(self,name,age):
        self.name=name
        self.age=age

# p1 object creating
p1=Person("MOM",33)

# print name
print("Name:",p1.name)

#Print age
print("Age:",p1.age)
#Example:

class Person:
    name=""
    age=0
    # self is currant object or present object
    def __init__(self,name,age):
        self.name=name
        self.age=age
    # show Function
    def showPerson(self,name,age):
        print("updated name:",name)
        print("updated age:",age)
        print(self.name)
        print(self.age)

# p1 object creating
p1=Person("MOM",33)
p1.showPerson("Aneel",34)
#Example:

class Person:
    name=""
    age=0
    # self is currant object or present object
    def __init__(self,name,age):
        self.name=name
        self.age=age
    # Show Function
    def  setPerson(self,name,age):
        self.name=name
        self.age=age
        print(self.name)
        print(self.age)
            
# p1 object creating
p1=Person("MOM",33)
p1.setPerson("Aneel",34)
print("Name:",p1.name)
print("Age:",p1.age)
p1.name="Hello"
p1.age=100
print("Hello Name:",p1.name)
print("Helloage:",p1.age)

                
            

