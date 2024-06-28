/******************************************************************************

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*******************************************************************************/
public class Main
{
	public static void main(String[] args) {
		int r,c,n=5;
		r=1;
		while(r<=n){
		    c=1;
		    while(c<=r){
		        System.out.print(c++ +" ");
		    }
		    r++;
		    System.out.println();
		}
	}
}

