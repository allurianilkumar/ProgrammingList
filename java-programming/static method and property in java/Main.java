class Student{
    static void details(){
        System.out.println("Student details");
    }
}
public class Main{
    // non static property
    int id=101;
    // non-static method
    static void show(Main m){
        System.out.println(m.id);
    }
	public static void main(String[] args) {
		Main m=new Main();
		show(m); // it can access within the class// Main.show(m); // m.show(m);
		// details() not working bcoz outside the class defined
		//Student.details(); 
		Student std=new Student();
		std.details();
	}
}
