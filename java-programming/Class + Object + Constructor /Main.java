// creating a class
class Main{

 // properties of  a class or fields
  int id;

// constructor
 Main(){
  System.out.println("constructor");
 }

// main method
public static void main(String[] args){
  // creating a instance of a class
  Main d1=new Main();
  
  // assigning a values
  d1.id=101;

  // showing the values
  System.out.println("ID:"+d1.id);

}

}