public class Main {

	public static void main(String[] args) {
		String preAsciiCode="01010000 01010010 01000101 01010011 01001001 01000100 01000101 01001110 01010100";
		String cipherTwoAsciiCodes="00001010 00011101 00000011 00010011 00010000 00010100 00000110 00000011 00001010 00001001 00011011";
		cipherTwoAsciiCodes=cipherTwoAsciiCodes.substring(18);
		String ASCIIValue="",BitwiseXOR="", presiTextData="", cipher2Txt="";
		String []chipher2TxtList=cipherTwoAsciiCodes.trim().split(" ");
		String []presiList=preAsciiCode.trim().split(" ");
		System.out.println("PRESIDENT Length = "+preAsciiCode.length());

		for(int p=0;p<=presiList.length-1;p++) {
			int aList=Integer.parseInt(presiList[p],2);
			int bList=Integer.parseInt(chipher2TxtList[p],2);
			char A=(char)aList;
			presiTextData+=A;
			char B=(char)bList;
			cipher2Txt+=B;
			int c=aList ^ bList;
			char C=(char)c;
			ASCIIValue=ASCIIValue+" "+C;
		}
		System.out.println("PRESIDENT:"+presiTextData);
		System.out.println("SECOND CIPHER TEXT = "+cipher2Txt);
		System.out.println("ASCII CODE = "+ASCIIValue);
		for(int q=65;q<90;q++){
		    for(int q1=65;q1<90;q1++){
		        if(q==q1) continue;
		        int code=q^q1;
		        char CValue=(char)code;
		        if(code == 10)
		        	System.out.println((char)q+" & "+(char)q1+" [ used 00001010 ] ");
		    	if(code == 29)
		    		System.out.println((char)q+" & "+(char)q1+" [ used 00011101 ]");
		    }
		}
	}
}
