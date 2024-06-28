# class with constant variable example
# define  a class
class Student
    # define a constants
    VAR1=100
    VAR2=200
    
    # define show() function
    def show
        puts "var1=#{VAR1}"
        puts "var2=#{VAR2}"
    end
    # define a birthday function
    def birthday
        puts "VAR-1=#{VAR1}"
        puts "VAR-2=#{VAR2}"
        puts "Happy birthday to you."
    end
end
# crating an object
s1 = Student.new()
# calling a show() function
s1.show
# calling birthday function
s1.birthday