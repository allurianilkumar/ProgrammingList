// 6) this keyword can be used to return current class instance
class Student{
    // property
    Student myObj;
    
    // getter method
    Student getStudent(){  
        return this;  
    }
    
    // setter method
    void setStudent(Student std){
        this.myObj = std;
    }
    // method
    void msg(){
        System.out.println("Hello java");
    }
}
class Main{  
    public static void main(String args[]){
        new Student().getStudent().msg();  	
    }  
}  
