/*

How to create an Object?
Ans:

Syntax:

 ClassName object;

Ex:   Main m;
   --> m is an object.
   -- Main is class Name.

How to create instance/reference of a class?
Ans:
Syntax:     object=new ClassName();
Example:    m1=new Main();
--> new is predefined keyword.To allocate a memory
   for an object with help of constructor.
   
   
   
   Ex:   Main m1=new Main();
    --> m1 is instance of Main Class.
    --> Main() is a constructor.
How can you access the property of the class?
Ans:
 Syntax:
            instance.property
Example:    m1.a
 
How can you call the method in class?
Ans:
 Syntax:
            instance.method
Example:    m1.show()


*/
public class Main
{
    // property
    int a;
    // method
    void show(){
        System.out.println("A="+a);
    }
    
	public static void main(String[] args) {
		Main m1=new Main();
		// reference.property
		m1.a=100;
		// reference.method
		m1.show();
	}
}
