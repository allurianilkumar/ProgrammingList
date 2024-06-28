name1 = 'MOM\nMOM'
name = "MOM\nMOM"
puts name1
puts name

# size of the string
print("\n","Name Size: ",name.size)
print("\n","Name Size: ",name.length)
# is empty?
if "".size == 0
    puts "empty string"
else
    puts "Not empty string"
end

if name.empty?
    puts " Name is empty"
else
    puts "Name is not empty"
end


name = "MOM Computers"
# Positive Index with string
print("\n","First Index: ",name[0])
# last index from string
print("\n","Last Index: ",name[name.length-1])
# Negative Index with string
print("\n","Last value : ",name[-1])
print("\n","First value : ",name[-name.length])

# range index (+ve)
print("\n","first value, size ( only +ve) Index: ",name[0,3])
# range index 
print("\n","Range supports +ve and -ve Index: ",name[0..-10])

# updating substring 
name[0,3] = "ANIL"
print("\n","Updated Name-1 : ",name)

name[0..3] = "MOM"
print("\n","Updated Name-2 : ",name)

# How to Find Out If a String Contains Another String
if name.include?("MOM")
    print("\n","MOM include in Name")
else
    print("\n","MOM not include in Name")
end
# index(): counting the substring.
string = "Today is Sunday"
print("\n","index day: ", string.index("day") )
# How to Pad a Ruby String
binary_string = "1101"
print "\n rjust: ", binary_string.rjust(8, "0") # "00001101"

binary_string = "1111"
print "\n ljust: ", binary_string.ljust(8, "0") # "11110000"

lang1 = "ruby"
lang2 = "Ruby"

print "\n == ", lang1.upcase == lang2.upcase
print "\n casecmp? ", lang1.casecmp?(lang2)

extra_space = "   test    "
print "\n strip: ", extra_space.strip # "test"

string = "ruby programming"

print "\n start_with: ",string.start_with?("ruby") # true
print "\n end_with: ", string.end_with?("programming") # true

string = "bacon is expensive"

print "\n delete_suffix: ",string.delete_suffix(" is expensive") # "bacon"
print "\n", string

# string to array
string = "a b c d"
myArray = string.split
print("\nMy Array:",myArray) # ["a", "b", "c", "d"]

string = "a,b,c,d"
myArray = string.split(",")
print("\nMy Array:",myArray) # ["a", "b", "c", "d"]

# Convert an Array to a String by join
arr = ['a', 'b', 'c']
arrString = arr.join
print "\narr: ", arr # ["a", "b", "c"]

print "\njoin: ", arrString # "abc"
print "\njoin: ", arr.join("-") # "abc"

# to Convert string to int
print "\n to_i:", "49".to_i
print "\n to_i:", "a".to_i # "a" is not number so result = 0

# check the string is number 
print "\nmatch?: ","123".match?(/\A-?\d+\Z/) # true

print "\nmatch?: ","123bb".match?(/\A-?\d+\Z/) # false

# How to Append Characters
string = ""

string << "hello"
string << " "
string << "there"
print "\n <<: ", string # "hello there"

"MOM Computers".each_char { |ch| puts ch }

# string to chars Array
array_of_characters = "MOM".chars
print "\n string to array: ", array_of_characters # ["M", "O", "M"]

name = "MoM"

print "\nupcase: ", name.upcase
print "\ndowncase: ", name.downcase

# line by line sting example

a = %Q(aaa
bbb
ccc)
print "\nline by line string %Q(): ",a

# replace substring
string = "We have many dogs"
subSting = string.gsub("dogs", "cats") # "We have many cats"
print "\nOriginal string: ", string
print "\nupdated gsub: ", subSting
# exmale -2
string = "We have 3 cats"
print "\ngsub:", string.gsub(/\d+/, "5") # "We have 5 cats"

# capitalize example
title = "mom computer institutions"
print "\n", title.capitalize
print "\n", title.gsub(/\w+/) { |word| word.capitalize }

# How to Remove the Last Character From a String
puts "\nWhat's your name?"
name = gets
print "\nMy name is ", name
#chomp
print "\n", "abcd?".chomp("?") # "abcd"

# count example
str = "aaabc"
print "\ncount: ",str.count("a") # 3
print "\ncount: ",str.count("bc") # 2

name ="MOM Computers"
print "\ndelete: " , name.delete("O")
print "\ndelete: " , name.delete("M")
print "\ndelete: " , name.delete("oOM")





