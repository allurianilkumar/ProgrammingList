class Person:
  def __init__(self, fname, lname):
    self.firstname = fname
    self.lastname = lname

  def printname(self):
      return (self.firstname + " " + self.lastname)

class Student(Person):
    def __init__(self, fname, lname,graduationyear):
        super().__init__(fname, lname)
        self.graduationyear = graduationyear
    def welcome(self):
        print(self.firstname+" "+self.lastname,self.graduationyear)
stu1 = Student("Mike", "Olsen",2018)
stu2 = Student("Anil", "Kumar",2019)

#print(stu1.printname(),stu1.graduationyear)
stu1.welcome()
#print(stu2.printname(),stu2.graduationyear)
stu2.welcome()

