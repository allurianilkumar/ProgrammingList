interface Bank{  
    float rateOfInterest();  
}  
class SBI implements Bank{  
    public float rateOfInterest(){
        return 9.15f;
    }  
}  
class PNB implements Bank{  
    public float rateOfInterest(){
        return 9.7f;
    }  
}  
class Main{  
    public static void main(String[] args){  
        Bank b=new SBI();  
        System.out.println("SBI ROI: "+b.rateOfInterest());  
        b=new PNB();  
        System.out.println("PNB ROI: "+b.rateOfInterest());  
    }
}
