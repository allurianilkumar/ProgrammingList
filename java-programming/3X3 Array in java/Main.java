public class Main
{
	public static void main(String[] args) {
	    int row=3,column=3;
		int[][] arr=new int[row][column];//3 row and 3 column  
        // ASSIGNING 3x3 ARRAY
        arr[0][0]=1;  
        arr[0][1]=2;  
        arr[0][2]=3;  
        arr[1][0]=4;  
        arr[1][1]=5;  
        arr[1][2]=6;  
        arr[2][0]=7;  
        arr[2][1]=8;  
        arr[2][2]=9;
        
        for(int r=0;r<row;r++){
            for(int c=0;c<column;c++){
                System.out.print(arr[r][c] + " ");
            }
            System.out.println();
        }
	}
}
