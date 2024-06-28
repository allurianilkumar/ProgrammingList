// this: to pass as an argument in the method
class Main{
    void m(Main obj){
        System.out.println("m method\n m1 instance="+obj);
    }
    void n(){
        System.out.println("n method\n m1 instance="+this);
        // Passing the n() reference to m() method via this keyword.
        m(this);
    }
    public static void main(String args[]){
        
        Main m1=new Main();
        System.out.println("main() method");
        System.out.println(" M1 instance="+m1);
        // calling the n() method
        m1.n();
    }
}