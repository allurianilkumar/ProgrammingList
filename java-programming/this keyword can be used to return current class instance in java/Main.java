//6) this keyword can be used to return current class instance

class A{  
    A getAClassInstance(){  
        return this;  
    }  
    void msg(){
        System.out.println("Hello java");
    }
}
class Main{  
    public static void main(String args[]){  
        new A().getAClassInstance().msg();  	
    }  
}  

