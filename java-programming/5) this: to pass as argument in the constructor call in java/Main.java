// 5) this: to pass as argument in the constructor call
class B{
  // property for Main class object.
  Main obj;  
  // constructor
  B(Main ref){  
    this.obj=ref;  
  }  
  // method
  void display(){  
    System.out.println(obj.data);//using data member of A4 class  
  }  
}  
  
class Main{
  // property
  int data=10; // display 10 value for every instance
  // constructor
  Main(){
   B b=new B(this); // this means s1
   b.display();  
  }
  // main() method
  public static void main(String args[]){  
   Main s1=new Main();  
  }  
}  
