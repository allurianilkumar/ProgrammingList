class Main{  
    
    static int data=30;
    // Inner class 
 	static class Inner{  
 	    // called method : msg()
 	    // return type: void
 	    // use: to show outside class static data value 
   		void msg(){
            System.out.println("data is "+data);
        }  
  	}
  	// Inner class end
    public static void main(String args[]){  
        Main.Inner obj=new Main.Inner(); 
        // calling method
        obj.msg();  
    }
}
