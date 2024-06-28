name = "MOM"
puts name.object_id
myname = "MOM"
puts myname.object_id
puts name.equal? myname

# 
name1 = name
puts name1.object_id

puts name.equal? name1

puts myname.eql? name