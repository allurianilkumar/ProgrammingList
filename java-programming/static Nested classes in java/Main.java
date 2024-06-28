class Main{  
    static int data=30;  
 	static class Inner{  
   		void msg(){
            System.out.println("data is "+data);
        }  
  	}  
    public static void main(String args[]){  
        Main.Inner obj=new Main.Inner();  
        obj.msg();  
    }
} 



