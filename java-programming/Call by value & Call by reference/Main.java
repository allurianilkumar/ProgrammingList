class  Main{  
 int data=50;  
  
 void change(Main m){
     m.data = m.data + 1000;
  //this.data=data+100;//changes will be in the local variable only  
  
 }  
  
  public static void main(String args[]){  
  	Main obj=new Main();  
  
   System.out.println("before change "+obj.data);  
   obj.change(obj);  
   System.out.println("after change "+obj.data);  
  
 }
 
}  
