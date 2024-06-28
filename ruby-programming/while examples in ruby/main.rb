=begin


1.#while condition

while conditional [do]
   code
end

2.# while modifier

code while condition

OR

begin 
  code 
end while conditional


=end

# to print 1 to 10 numbers
$i=1
$n=10
while $i <= $n
    puts "i=#{$i}"
    $i=$i+1
end

# 
puts "Begin end examples"
$i=1
$n=10
begin
    puts "i=#{$i}"
    $i=$i+1
end while $i <= $n

puts "while modifier"
x = 0

x += 1 while x < 10
p  x     # prints 10

