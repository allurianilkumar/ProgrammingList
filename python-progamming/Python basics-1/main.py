a=10
print('MOM')
print("MOM")
print("'MOM'")
print('"MOM"')
print("MOM",a)
print("MOM="+str(a))
print("A=%d"%a)
print("A==> {}".format(a))
i=10
j=20
print("i={},j={}".format(i,j))
print("index i={0},j={1}".format(i,j))
print("Index: i={1},j={0}".format(i,j))
print("Named: i={ii},j={jj}".format(ii=i,jj=j))
print("Named: i={jj},j={jj}".format(ii=i,jj=j))

# type of the intergers

eid=100
esal=200.12
esucess=True
name ="MOM"
gender ="M"

print("EID={}".format(eid))
print("Eid:%d"%eid)
print("esal={}".format(esal))
# Esal:200.120000
print("#Esal:%f"%esal)
# Esal:200.12
print("Esal:%.2f"%esal)
print("esucess={}".format(esucess))
print("name={}".format(name))
print("Name: %s"%name)


# data types
print("type of the eid: ",type(eid))
print("type of the esal: ",type(esal))
print("type of the esucess: ",type(esucess))
print("type of the e name: ",type(name))

# converting one data type to another data type
bookPrice =123.456
# convetintg from float to int
price = int(bookPrice)
print("Book price is %.2f"%bookPrice)
print("Price is %d",price)

# int to float
iPrice = float(price)
print("IPrice =%f"%iPrice)
print("IPrice =%.2f"%iPrice)





