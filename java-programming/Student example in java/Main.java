class Student{
    int id;
    String name;
    Student(int id,String name){
        this.id=id;
        this.name=name;
    }
    void show(){
        System.out.println("Id   : "+id);
        System.out.println("Name : "+name);
    }
}
public class Main
{
	public static void main(String[] args) {
		Student stu1=new Student(101,"MOM");
		System.out.println("Student 1:");
		stu1.show();
		Student stu2=new Student(102,"IT");
		//System.out.println("Id2   : "+stu2.id);
        //System.out.println("Name2 : "+stu2.name);
        System.out.println("\nStudent 2:");
        stu2.show();
	}
}
