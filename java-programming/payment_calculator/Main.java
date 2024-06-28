public class Main
{
	public static void main(String[] args) {
	    int a=100000;
	    int r=5;
	    int n=36;
	    double d=(double)r/100/12;
	    int i=1;
	   double rn = Double.parseDouble(String.format("%.3f", d));
		System.out.println("Rn ="+rn);
	    while(i<=1){
 
// 		System.out.println("Rn ="+Math.pow(2+2,2));
        // System.out.println("Payment1 ="+ (Math.pow(1+rn,n)-1) );
        // System.out.println("Payment1 ="+( (rn*a)* Math.pow(1+rn,n) ));
		double payment1=(Double.parseDouble(String.format("%.5f", (rn*a)* Math.pow(1+rn,n)  ))  )/ Double.parseDouble(String.format("%.5f", (Math.pow(1+rn,n)-1))) ;
		System.out.println("payment"+i+":"+payment1);
		double pp1= Double.parseDouble( String.format("%.5f",(payment1/Math.pow(1+rn,1+n-i)) )) ;
		System.out.println("pp"+i+"="+ pp1);
		double int1=payment1-pp1;
		System.out.println("INT"+i+"="+(int1) );
		double ob1 = (int1/ rn)-pp1;
		System.out.println("Ob"+i+"="+ob1);
		i++;
	    }
		
	}
}

