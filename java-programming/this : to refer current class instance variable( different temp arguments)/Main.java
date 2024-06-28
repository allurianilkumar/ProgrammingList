class Main{  
    // properties
    int rollno;
	String name;  
	float fee;
	// constructor
	Main(int r,String n,float f){  
		rollno=r;  
		name=n;  
		fee=f;  
	}
	// method
	void display(){
		System.out.println(rollno+" "+name+" "+fee);
	}
	// main method
	public static void main(String[] args){
		Main m1=new Main(111,"MOM",5000.5f);  
		Main m2=new Main(112,"IT",6000.5f);  
		m1.display();  
		m2.display();  
	}
}  
