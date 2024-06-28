// 4) this: to pass as an argument in the method
class Main{  
  void m(Main obj){  
    System.out.println("method is invoked");  
    // printing obj address
    System.out.println(obj);
  }  
  void p(){  
     m(this); 
     // printing this address
     System.out.println(this);
  }  
  public static void main(String args[]){  
    Main s1 = new Main();
    // printing s1 address
    System.out.println(s1);
    s1.p();
    // anonymous object printing address
    System.out.println(new Main());
  }  
}  
