/*

Constructors in Java

In Java, a constructor is a block of codes similar to the method. It is called when an instance of the class is created. At the time of calling constructor, memory for the object is allocated in the memory. It  is used to initialize the object.
Rules for creating Java constructor
There are two rules defined for the constructor.
1.	Constructor name must be the same as its class name
2.	A Constructor must have no explicit return type
A Java constructor cannot be abstract, static, final, and synchronized

Types of Java constructors
There are two types of constructors in Java:
1.	Default constructor (no-arg constructor)
2.	Parameterized constructor
Java Default Constructor
A constructor is called "Default Constructor" when it doesn't have any parameter.
Syntax of default constructor:
<class_name>( ){
} 

Example of default constructor

//Java Program to create and call a default constructor  
class Bike1{  
//creating a default constructor  
Bike1( ){
   System.out.println("Bike is created");
}  
//main method  
public static void main(String args[]){  
//calling a default constructor  
Bike1 b=new Bike1();  
}  
}  
Example of parameterized constructor

class Student4{  
    int id;  
    String name;  
    //creating a parameterized constructor  
    Student4(int i,String n){  
    id = i;  
    name = n;  
    }  
    //method to display the values  
    void display( ){
       System.out.println(id+" "+name);
   }  
   
    public static void main(String args[]){  
    //creating objects and passing values  
    Student4 s1 = new Student4(101,"Pravallika");  
    Student4 s2 = new Student4(102,"Chandrika");  
    //calling method to display the values of object  
    s1.display();  
    s2.display();  
   }  
}
Output:
111 Karan
222 Aryan





*/

public class Main
{
    int id;
    String name;
    // 1.default Constructor
    Main(){
        System.out.println("default Constructor");
    }
    // 2.parameterized constructor  
    Main(int i,String n){
        System.out.println("parameterized constructor");
        id=i;
        name=n;
    }
    void show(){
        System.out.println(id+" "+name);
    }
	public static void main(String[] args) {
	    // new Main();
	    //Main object=new Main();
	    // to create an object.
	    // Person-1
	    Main object1=new Main(101,"MOM");
		System.out.println(object1.id);
		System.out.println(object1.name);
		object1.show();
		// Person-2
		Main object2=new Main(102,"IT");
		System.out.println(object2.id);
		System.out.println(object2.name);
		object2.show();
	}
}
