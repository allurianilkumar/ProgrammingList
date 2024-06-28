public class Main{
    // Data Type variable
    int id;
    // Data Type variable
    String name;
    /* Getter Methods */
    
    // getter method : get the id
    int getID(){
        return this.id;
    }
    // getter Method : get the name
    String getName(){
        return this.name;
    }
    
    /* Setter Methods */
    
    // setter method: to set a id 
    void setID(int id){
     this.id = id;   
    }
    
    // setter method : to set the name.
    
    void setName(String name) {
        this.name = name;
    }
    
    
    // method : called method
    void show(){
        System.out.println("Person ID: "+this.id);
        System.out.println("Person Name: "+this.name);
    }
    
    
    // main method
	public static void main(String[] args) {
	    Main m1=new Main();
	    
	    // instanece.property = value;
	    m1.setID(101); //m1.id = 101; 
	    
	    m1.setName("ANIL"); //m1.name = "ANIL";
	    // // instanece.property
		
		//System.out.println("ID: "+m1.id);
		System.out.println("ID: "+m1.getID());
		
		//System.out.println("Name: "+m1.name);
		System.out.println("Name: "+m1.getName());
		
		// calling method : instanece.methodName();
		m1.show();
	}

}
