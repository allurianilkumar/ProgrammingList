public class Main
{
	public static void main(String[] args) {
		int i=1,n=5;
        while(i<=n){
            if(i==3){
                i++;
                //continue;
                break;
            }
            System.out.println("i="+i++);
        }
	}
}
