// this: to pass as argument in the constructor call
class B{
    // fileds
    Main obj; // Object creation
    // constructor
    B(Main obj){  
        this.obj=obj;  
    }  
	// method
	void display(){
	    System.out.println(obj.data);//using data member of main class  
	}
}
// Main class 
class Main{  
	 int data=10;  
	 Main(){
	   // creating a instacne of a class B
	   B b=new B(this);
	   b.display();  
	  }  
	  public static void main(String args[]){  
	   new Main();
	  }  
}  

