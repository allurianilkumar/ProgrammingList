// Calling default constructor from parameterized constructor:
class Main{
    int w;
    int h;
    // default constructor
    Main(){
        System.out.println("default constructor");
    }
    // Single Argument constructor
    Main(int w){
        this(); // calling the default constructor by using "this()"\
        // this() must be first line of statement
        this.w=w;
        System.out.println("Single Argument constructor");
    }
    // two Argument constructor
    Main(int w,int h){
        this(w); // calling Single Argument constructor
        this.w=w;
        this.h=h;
        System.out.println("two Argument constructor");
    }
    public static void main(String[] args){
        // new Main();
        // new Main(1);
        new Main(1,2);
        System.out.println("MOM");
    }
}
