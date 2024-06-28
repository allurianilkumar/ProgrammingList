Abstract class in Java
----------------------

A class which is declared with the abstract keyword is known as an abstract class in Java. It can have abstract and non-abstract methods (method with the body).

Rules:
	If a class has abstract method then declares abstract keyword to class.
	Abstract class has a non-abstract methods & abstract methods.
	Every abstract method must be implementing to sub classes.
	Abstract method and non-abstract methods are optional.
	An abstract class not has to create an instance.
	But we can create an object.
	Abstaract class has final methods, static methods and constructors.

Example:
abstract class Bike{  
}
class Main extends Bike{
    public static void main(String[] args){
        System.out.println("MOM");
    }
}
Output:
MOM
Abstraction in Java
Abstraction is a process of hiding the implementation details and showing only functionality to the user.
Ways to achieve Abstraction
There are two ways to achieve abstraction in java
1.	Abstract class (0 to 100%)
2.	Interface (100%)



Example of abstract class
abstract class A{ }  

Abstract Method in Java
A method which is declared as abstract and does not have implementation is known as an abstract method.
Example of abstract method
abstract void printStatus(); //no method body and abstract  

Example:
abstract class Bike{
   abstract void run();
 }

class Honda4 extends Bike{
 void run(){
     System.out.println("running safely..");
 }
}
public class Main
{
	public static void main(String[] args) {
	    //Bike obj=new Bike();// Main.java:13: error: Bike is abstract; cannot be instantiated
	    // Honda4 obj=new Honda4(); valid
	    Bike obj=new Honda4(); //valid
	    // Honda4 obj=new Bike(); // error: Bike is abstract; cannot be instantiated
	    obj.run();
	}
}
Compile by: 
javac Honda4.java
Run by: 
java Honda4
running safely..

Example:
class Bike12{  
abstract void run();
}
class Main extends Bike12{
    public static void main(String[] args){
    }
}
Error:
Main.java:1: error: Bike12 is not abstract and does not override abstract method run() in Bike12
Example:

abstract class Bike12{  
abstract void run();
}
class Main extends Bike12{
    public static void main(String[] args){
    }
}
Error:
Main.java:4: error: Main is not abstract and does not override abstract method run() in Bike12

 
Interface in Java
An interface in Java is a blueprint of a class. It has static constants and abstract methods.
The interface in Java is a mechanism to achieve abstraction. There can be only abstract methods in the Java interface, not method body. It is used to achieve abstraction and multiple inheritance in Java.
In other words, you can say that interfaces can have abstract methods and variables. It cannot have a method body.
Java Interface also represents the IS-A relationship.
Syntax:
interface <interface_name>{  
      // declare constant fields  by default
     // declare methods that abstract by default.  
}  

Interface fields are “public static final” by default, and the methods are “public abstract”.
 
 
Java Interface Example



interface Printable1{  
    void print1(); // public abstract void print1();
}
class Main implements Printable1{  
    public void print1(){
        System.out.println("print1()");
    }
    public static void main(String args[]){  
        Main obj = new Main();  
        obj.print1();
           }  
}  
Output:
Print1()

  

Multiple inheritance in Java by interface
If a class implements multiple interfaces, or an interface extends multiple interfaces, it is known as multiple inheritance.
 




interface Printable1{  
    void print1(); // public abstract void print1();
}
interface Printable2 extends Printable1{
    void print2(); // public abstract void print2();
}
class Main implements Printable2{  
    public void print1(){
        System.out.println("print1()");
    }
    public void print2(){
        System.out.println("print2()");
    }
    public static void main(String args[]){  
        Main obj = new Main();  
        obj.print1();
        obj.print2();
    }  
}  
Output:
print1()
print2()

Example:
interface Printable{  
    void print();  
}  
interface Showable extends Printable{  
    void show();  
}  
class Main implements Showable{  
    public void print(){
        System.out.println("Hello");
    }  
    public void show(){
        System.out.println("Welcome");
    }
    public static void main(String args[]){  
        Main obj = new Main();
        obj.print();  
        obj.show();  
     }
}

Output:
Hello
Welcome


Example: Multiple inheritance example.
interface A{
    
}
interface B{
    
}
interface C extends A,B{
    
}
public class Main
{
	public static void main(String[] args) {
		System.out.println("Hello World");
	}
}

Example:
interface Printable1{  
    void print1(); // public abstract void print1();
}
interface Printable2{
    void print2(); // public abstract void print2();
}
class Main implements Printable1,Printable2{  
    public void print1(){
        System.out.println("print1()");
    }
    public void print2(){
        System.out.println("print2()");
    }
    public static void main(String args[]){  
        Main obj = new Main();  
        obj.print1();
        obj.print2();
    }  
}  
Output:
print1()
print2()
