#list to set
list1=[1,2,3]
set1=set(())

for x in list1:
    set1.add(x)
print(set1)

# set to list
set2={1,2,3}
list2=[]
for x in set2:
    list2.append(x)
print(list2)

