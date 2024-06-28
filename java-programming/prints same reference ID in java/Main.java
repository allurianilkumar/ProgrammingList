// prints same reference ID
class Main{  
    void m(){  
        System.out.println(this);//prints same reference ID  
    }  
    public static void main(String args[]){  
        Main obj=new Main();  
        System.out.println(obj);//prints the reference ID  
        obj.m();  
    }  
}  
