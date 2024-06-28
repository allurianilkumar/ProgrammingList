# class define
class Student
    @@number_of_objects = 0
    #attr_accessor :sid
    #attr_reader :sid
    
    #constructor
    def initialize(sid,sname)
        puts "It is constructor"
        @sid = sid
        @sname = sname
        @@number_of_objects = @@number_of_objects + 1
    end
    
    def show()
        a=100
        puts "A=#{a}"
        puts "SID:#{@sid}"
        puts "SNAME:#{@sname}"
    end
    
    def numbersOfObjects()
        puts "Number of objects are #{@@number_of_objects}"
    end
end

# creating an object is s1.
s1 = Student.new(101,"ANIL")
# calling a show() method or function
s1.show()
# calling numbersOfObjects() function
s1.numbersOfObjects()

#puts "#{s1.sid}"

# creating an object is s2.
s2 = Student.new(102,"KUMAR")
# calling a show() method or function
s2.show()
# calling numbersOfObjects() function
s2.numbersOfObjects()


# creating an object is s1.
s3 = Student.new(103,"MOM")
# calling a show() method or function
s3.show()
# calling numbersOfObjects() function
s3.numbersOfObjects()