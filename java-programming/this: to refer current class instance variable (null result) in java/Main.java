class Student{  
    // properties
    int rollno;
	String name;  
	float fee;
	// constructor
	Student(int rollno,String name,float fee){  
		rollno=rollno;  
		name=name;  
		fee=fee;  
	}
	// method
	void display(){
		System.out.println(rollno+" "+name+" "+fee);
	}
}  
class Main{  
	public static void main(String args[]){
		Student s1=new Student(111,"MOM",5000.5f);  
		Student s2=new Student(112,"IT",6000.5f);  
		s1.display();  
		s2.display();  
	}
}  
