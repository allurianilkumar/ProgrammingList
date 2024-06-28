# defined?
#  ******
# puts bar # NameError
#  ******
print "bar: ", defined? bar, "\n"    # => nil (undefined)

$a = 10
b = 100
name = "ANIL"
print "Name: ",defined? name, "\n"
@name = "MOM"

class Student
    @@number = 0
    print "@@number: ", defined? @@number, "\n"
end

def demo
end



puts defined? $a
puts defined? b
puts defined? demo
puts defined? @name
puts defined? Student
#puts defined? @@number