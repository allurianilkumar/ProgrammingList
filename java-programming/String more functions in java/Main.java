
public class StringExample {

	public static void main(String[] args) {
		System.out.println("MOM");
		String name="MOM IT Solutions";
		String myName=new String(name);
		System.out.println("MY name is "+myName);
		System.out.println("Char in String position:"+myName.charAt(1));
		System.out.println("Length of the string:"+myName.length());
		System.out.println("Length of the string:"+myName.length());
		System.out.println("Substring:"+myName.substring(4));
		System.out.println("Substring:"+myName.substring(4,6)); // Start=4,End=6-1=5
		System.out.println("Contains IT:"+myName.contains("IT"));
		System.out.println("IT".equals("IT"));
		System.out.println(myName.equals("IT"));
		System.out.println("isEmpty:"+myName.isEmpty());
		System.out.println("isEmpty:"+"".isEmpty());
		name=name.concat("Anil");
		System.out.println("concat="+name);
		System.out.println("MOM".replace('M', 'N'));
		System.out.println("equalsIgnoreCase:"+"MOM".equalsIgnoreCase("mom"));
		System.out.println("toLowerCase:"+"MOM".toLowerCase());
		System.out.println("toUpperCase:"+"mom".toUpperCase());
		System.out.println(" MOM ".trim());
	}

}
