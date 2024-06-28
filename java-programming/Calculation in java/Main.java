class Calculation{
 static int n;
  Calculation(){
   System.out.println("Constructor");
 }
 void fact(int n){
   int i,fact=1;
   for(i=1;i<=n;i++){
     fact=fact*i;
  }
  System.out.println(fact);
 }
} // Calculation close

public class Main{
public static void main(String[] args){
    Calculation.n=5; // ClassName.Field=value (or) reference.Property=value
    new Calculation().fact(Calculation.n);
}
}
