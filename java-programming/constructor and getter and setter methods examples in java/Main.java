class Student3{
int id;
String name;
Student3(){
}
Student3(int id, String name){
this.id=id;
this.name=name;
}
void setId(int id){
this.id=id;
}
void setName(String name){
this.name=name;
}
int getId(){
return this.id;
}
String getName(){
return this.name;
}
void display(){System.out.println(id+" "+name);}

public static void main(String args[]){
Student3 s1=new Student3(101,"Anil");
s1.display();
Student3 s2=new Student3(102,"MOM");
s2.display();

// student3
Student3 s3=new Student3();
// set id
s3.setId(103);
// set name
s3.setName("Vivek");
// set display
s3.display();
System.out.println("Get SID:"+s3.getId());
System.out.println("Get SName:"+s3.getName());

}
}
