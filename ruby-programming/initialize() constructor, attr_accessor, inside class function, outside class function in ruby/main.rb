class Student
    attr_accessor :sid,:sname
    # constructor
    def initialize(id,name) 
       @sid = id
       @sname = name
    end
    # show studentDetails function
    def studentDetails()
        puts "My Student Id is #{@sid}"
        puts "My Student Name is #{@sname}"
    end
end

# outside function show
def show(s)
    # print the id and name for s1 object
    puts "SID: #{s.sid}"
    puts "SNAME: #{s.sname}"    
end

# object creating 
s1=Student.new(101,"ANIL")

# Show studentDetails
s1.studentDetails()


# update a id and name for s1 object
s1.sid =  501
s1.sname  = "Karthik"

# calling the show function
show(s1)

# 

