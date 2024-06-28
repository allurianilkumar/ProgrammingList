$age =  3
case $age
when 2,3
   puts "baby"
when 5,6
   puts "little child"
when 7 .. 12
   puts "child"
when 13 .. 18
   puts "youth"
else
   puts "adult"
end