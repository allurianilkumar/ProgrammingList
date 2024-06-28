public class Main
{
	public static void main(String[] args) {
		int a[][]={  
                        { 1,  2},
                        { 3,  4}
                    };
        int b[][]={  
            { 1,  2},
            { 3,  4}
        };

        for(int r=0;r<2;r++){
            for(int c=0;c<2;c++){
                System.out.print((a[r][c]-b[r][c])+" ");
            }
            System.out.print("\n");
        }
	}
}
