# a and $a are different
# a and @a are different
# @a and @@a are different

# global example
# demo function body
a=100
def demo
    $a=10
    puts $a
end

# calling function
demo
puts a
puts $a
