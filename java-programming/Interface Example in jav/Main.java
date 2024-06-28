interface Printable1{  
    void print1(); // public abstract void print1();
}
interface Printable2 extends Printable1{
    void print2(); // public abstract void print2();
}
class Main implements Printable2{  
    public void print1(){
        System.out.println("print1()");
    }
    public void print2(){
        System.out.println("print2()");
    }
    public static void main(String args[]){  
        Main obj = new Main();  
        obj.print1();
        obj.print2();
    }  
}  

