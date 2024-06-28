# define an array
ary = [1,2,3,4,5]
# every index start from 0 value

puts ary[0]
puts ary[1]

# update a value
ary[0]=100

# to print Length of an arry
puts "Length or size of an arry: #{ary.length}"
# to print first value from any array
puts "First value is #{ary[0]}"
# last value = length - 1
puts "Last value is #{ary[ary.length-1]}"
puts "\nprinting an array via each loop\n"
# printing an array via each loop
ary.each do |i|
    puts i
end
puts "Completed"

