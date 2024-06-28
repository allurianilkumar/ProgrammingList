Method Overloading in Java
If a class has multiple methods having same name but different in parameters, it is known as Method Overloading.
Advantage of method overloading
Method overloading increases the readability of the program.
Different ways to overload the method
There are two ways to overload the method in java
1.	By changing number of arguments
2.	By changing the data type
1) Method Overloading: changing no. of arguments
class Adder{  
    static int add(int a,int b){return a+b;}  
    static int add(int a,int b,int c){return a+b+c;}  
}  
class TestOverloading1{  
    public static void main(String[] args){  
        System.out.println(Adder.add(11,11));  
        System.out.println(Adder.add(11,11,11));  
    }
}
2) Method Overloading: changing data type of arguments
class Adder{  
    static int add(int a, int b){return a+b;}  
    static double add(double a, double b){return a+b;}  
}  
class TestOverloading2{  
    public static void main(String[] args){  
        System.out.println(Adder.add(11,11));  
        System.out.println(Adder.add(12.3,12.6));  
    }
}  
Q) Why Method Overloading is not possible by changing the return type of method only?

class Adder{  
    static int add(int a,int b){return a+b;}  
    static double add(int a,int b){return a+b;}  
}  
class TestOverloading3{  
    public static void main(String[] args){  
        System.out.println(Adder.add(11,11));//ambiguity  
    }
}  
compile Time Error: method add(int,int) is already defined in class Adder

 
Super Keyword in Java
---------------------
The super keyword in Java is a reference variable which is used to refer immediate parent class object.
Whenever you create the instance of subclass, an instance of parent class is created implicitly which is referred by super reference variable.
Usage of Java super Keyword

1.	super can be used to refer immediate parent class instance variable.
2.	super can be used to invoke immediate parent class method.
3.	super() can be used to invoke immediate parent class constructor.
1) super is used to refer immediate parent class instance variable.
class Animal{  
    String color="white";  
}  
class Dog extends Animal{  
    String color="black";  
    void printColor(){  
        System.out.println(color);//prints color of Dog class  
        System.out.println(super.color);//prints color of Animal class  
    }  
}  
class Main{  
    public static void main(String args[]){  
        Dog d=new Dog();  
        d.printColor();  
    }
}  
2) super can be used to invoke parent class method


class Animal{  
    void eat(){
       System.out.println("eating...");
    }  
}  
class Dog extends Animal{  
    void eat(){System.out.println("eating bread...");}  
    void bark(){System.out.println("barking...");}  
    void work(){  
          super.eat();  
          bark();  
    }  
}  
class TestSuper2{  
    public static void main(String args[]){  
        Dog d=new Dog();  
        d.work();  
    }
}  

3) super is used to invoke parent class constructor.

class Animal{
    Animal(){
        System.out.println("animal is created");
    }
}
class Dog extends Animal{
    Dog(){
        super();
        System.out.println("dog is created");
    }
}
class Main{  
    public static void main(String args[]){  
        Dog d=new Dog();  
    }
}  

super example: real use
---------------------
class Person{  
    int id;  
    String name;  
    Person(int id,String name){  
        this.id=id;  
        this.name=name;  
    }  
}  
class Emp extends Person{  
    float salary;  
    Emp(int id,String name,float salary){  
        super(id,name);//reusing parent constructor  
        this.salary=salary;  
    }  
    void display(){
        System.out.println(id+" "+name+" "+salary);
    }  
}  
class TestSuper5{  
    public static void main(String[] args){  
        Emp e1=new Emp(1,"ankit",45000f);  
        e1.display();  
    }
}  
 

Final Keyword In Java
=======================
The final keyword in java is used to restrict the user. The java final keyword can be used in many context. Final can be:
1.	variable
2.	method
3.	class
 
1) Java final variable
If you make any variable as final, you cannot change the value of final variable(It will be constant).
https://onlinegdb.com/gWH2nsNcb

public class Main
{
	public static void main(String[] args) {
	    final float PI=3.14f;
	    System.out.println("PI="+PI);
	    // error: cannot assign a value to final variable PI
	    PI=12.34f;
	    System.out.println("PI="+PI);
	}
}



2) Java final method
If you make any method as final, you cannot override it.
class A{
    // error: car() in B cannot override car() in A
    final void car(){
        System.out.println("Super car");
    }
}
class B extends A{
    void car(){
        System.out.println("Sub car");
    }
}
public class Main
{
	public static void main(String[] args) {
		System.out.println("Hello World");
	}
}
3) Java final class
If you make any class as final, you cannot extend it
// error: cannot inherit from final A
final class A{
    
}
class B extends A{
    
}
public class Main
{
	public static void main(String[] args) {
		System.out.println("Hello World");
	}
}


