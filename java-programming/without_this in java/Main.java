class Student{  
    int rollno;  
    String name;  
    float fee;  
    Student(int rollno,String name,float fee){  
        rollno=rollno;  
        name=name;  
        fee=fee;  
    }  
    void display(){
        System.out.println(rollno+" "+name+" "+fee);
    }  
}  

public class Main
{
    public static void main(String[] args) {
        Student s1=new Student(111,"Anil",5000f);  
        Student s2=new Student(112,"MOM",6000f);  
        s1.display();  
        s2.display();  
	}
}

