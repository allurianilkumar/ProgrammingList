# show ASCII codes
puts "A".ord # 65
# print ASCII codes char format
puts "65".chr
puts "ANIL".chr
print "\nASCII Code: ", 65.chr ,"\n"

# bytes 
puts "abc".bytes # [97, 98, 99]\
# empty sting example
puts "ABC".clear # romove the all chars
# concat exmaple
s = 'foo'
s.concat(32, 'bar', 32, 'baz')
print s

# eql

s = 'foo'
puts s.eql?('foo') # => true
puts s.eql?('food') # => false
puts s.eql?('FOO') # => false


# insert example
print "\n", 'MM'.insert(1, 'O') # => "MOM"

# replace
s = 'foo'        # => "foo"
s.replace('bar') # => "bar"

print "\nreplace: ", s

# reverse the stirng
name = "ABCDEF"
print "\nreverse: ", name.reverse
print "\nreverse: ", name

print "\nreverse: ", name.reverse!
print "\nreverse: ", name

print "\nstart_width?: ", 'hello'.start_with?('hell')
print "\nend_with?: ", 'hello'.end_with?('llo') 

s = 'Hello World!' # => "Hello World!"
print "\n swapcase: ", s.swapcase
print "\n swapcase!: ", s.swapcase!

print "\n", 'hello'.tr('el', 'ip')


