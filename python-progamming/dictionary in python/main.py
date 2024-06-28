# Valid dictionary

my_dict = {
  1: "Hello-1", 
  2: "Hello-2", 
  3: "Hello-3"
}

print(my_dict)
# show keyes
for key in my_dict:
    print("K:",key)
    
# show values
for k in my_dict:
    print("V:",my_dict[k])
# show the key,value pairs

for key,value in my_dict.items():
    print(key,":",value)


for key in my_dict.keys():
    print(key,"*",my_dict[key])

for value in my_dict.values():
    print("value:",value)
