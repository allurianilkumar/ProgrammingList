'''
    Python data types
1. Number
2. String
3. List
4. Tuple
5. Set
6. Dictionary

'''
# Number
a=123 # int
print(a) # 123
print("A=",a) # A= 123
print(type(a)) # <class 'int'>

b=12.34 # float
print(b) # 12.34
print("B=",b) # B= 12.34
print(type(b)) # <class 'float'>

c='MOM' # str
print(c) # MOM
print("C=",c) # MOM
print(type(c)) # <class 'str'>

d=1<2 # bool
print(d) # true
print("1<2=",d) # true
print("1>2=",1>2) # false
print(type(d)) # <class 'bool'>


#list Example
mylist=[1,2,3,4,5]
# index start from 0 value

# printing 1 st value
print(mylist[0]) # 1

# printing 2nd value
print(mylist[1]) # 2

# updated the last(size-1) value
mylist[4]=10

#print(mylist[5]) #IndexError: list index out of range

#mylist[5]=10 #IndexError: list assignment index out of range


# adding a value to list ( last element in  mylist)
mylist.append(100)

# showing first value
print("My list first value is ",mylist[0])
# to print the length of the mylist
print("My list length is ",len(mylist))
# print the mylist
print("My list is ",mylist) # [1,2,3,4,5,100]

# for loop for list
print("\nLIST For Loop\n")
for x in mylist:
    print(x)


# tuple
mytuple =(1,2,3,4,5)
print(mytuple)
print("mytuple[0]=",mytuple[0])
print("len(mytuple)=",len(mytuple) )

# for loop for list
print("\ntuple For Loop\n")
for x in mytuple:
    print(x)

# set 
myset ={ 1,2,3,4,5}
print(myset)
#print("myset[0]:",myset[0]) # TypeError: 'set' object is not subscriptable

# for loop for set
print("\nset For Loop\n")
for x in myset:
    print(x)

# dictionary
mydict={"id":1,"name":"MOM"}
print(mydict)
print(mydict["id"]) # 1
print(mydict["name"]) # MOM
# assignment key and vlaue
mydict["Color"]="Green"
print(mydict)

# printing the color value
print(mydict['Color'])
print(mydict["Color"])

print("\nDictonary For Loop\n")
for item in mydict.items():
    print(item)
    print("Key:",item[0]) # key
    print("Value:",item[1]) # value

