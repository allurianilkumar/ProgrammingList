public class Main
{
	public static void main(String[] args) {
		String name="MOM IT Solutions";
		String name1="MOM IT Solutions";
		int len=name.length();
		System.out.println(len);
		char firstName=name.charAt(0);
		System.out.println(firstName);
		System.out.println(name.charAt(name.length()-1));
		String subStr=name.substring(7);
		System.out.println("Substring : "+subStr);
		boolean isExist = name.contains(subStr);
		System.out.println("contains : "+isExist);
		System.out.println("equals1 : "+name.equals(subStr));
		System.out.println("equals2 : "+name.equals(name1));
		System.out.println("isEmpty1 : "+name.isEmpty());
		String emptyStr="";
		System.out.println("isEmpty2 : "+emptyStr.isEmpty());
		System.out.println("concat1 : "+emptyStr.concat("Hello"));
		System.out.println("concat2 : "+name.concat("Hello"));
		// direact format
		System.out.println("Replace : "+"MOM".replace('M','J'));
		//equalsIgnoreCase
		System.out.println("equalsIgnoreCase : "+"MOM".equalsIgnoreCase("mom"));
	    String[] nameList=name1.split(" ");
	    System.out.println(nameList[0]);
	    System.out.println(nameList[1]);
	    System.out.println(nameList[2]);
	    System.out.println("nameList lenght is "+nameList.length);
	    System.out.println("nameList : "+nameList);
	    // show the name list by foreach loop
	    for(String item : nameList){
	        System.out.println(item);
	    }
	    // show the name list by for loop
	    for(int i=0;i<nameList.length;i++){
	        System.out.println(nameList[i]);
	    }
	    System.out.println(" toLowerCase():"+ "MOM". toLowerCase() );
	    String check=" MOM ";
	    System.out.println(" trim() :"+ check.trim()+"Hello");
	    
	    //toUpperCase()
	    System.out.println(" toUpperCase() :"+ "mom it solutions".toUpperCase());
	    
		
	}
}
