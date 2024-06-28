# a function with arguments and return type
class Student
    #attr_reader :id, :name
    attr_accessor :id, :name

    def studentNames(id,name)
        @id = id
        @name = name
        return @id,@name
    end
    
    # get id
    def getId()
        @id
    end
    
    # get name
    def getName
        @name
    end
    
    # set id
    def setID(id)
        @id = id
    end
    
    # set name
    def setName(name)
        @name =  name
    end
    
    # show function
    def show()
        puts "SID: #{@id}"
        puts "SNAME: #@name"
        puts "SRANK: #@rank"
    end
end

s1=Student.new()
info = s1.studentNames(101,"MOM Computers")
puts info

# calling a function
s1.show()

puts "My id is #{s1.getId()}"
puts "My name is #{s1.getName()}"

s1.setID(102)
s1.setName("ANIL")

puts "Updated id is #{s1.getId()}"
puts "Updated name is #{s1.getName()}"
id=999
@id = 105
@name = "MOM IT"
#@@numbers = 100 RuntimeError

puts "ID: #{id}"

puts "SID: #{@id}"
puts "SNAME: #@name"
puts "SRANK: #@rank"
#puts "Studnet total numbers:#{@@numbers}"

# printing via attr_reader(Only getter)
puts "SID-1: #{s1.id}"
puts "SNAME-1: #{s1.name}"

# updated  values  via attr_accessor (getter and setter)
s1.id = 901
s1.name = "Sadik"

#printing  student information
puts "1. SID: #{s1.id}"
puts "2. SNAME: #{s1.name}"





