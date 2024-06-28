public class Main {
	public static void main(String[] args) {
		String textCipherSource="0101001010011",bitMsg6="110001",xorInfo="",results="";
		int possibleK1=1,possibleK2=1,possibleK3=0;
		System.out.println("We taking possible values K1=1, K2=1, K3=0");
		System.out.println("Assign K1="+possibleK1);
		System.out.println("Assign K2="+possibleK2);
		System.out.println("Assign K3="+possibleK3);

		for(int p=0;p<textCipherSource.length();p++) {
			if(p<3) {
				int ciphertextVal=Integer.parseInt((textCipherSource.charAt(p)+"").trim());
				int sixBitVal=Integer.parseInt((bitMsg6.charAt(p)+"").trim());
				results=results+(ciphertextVal ^ sixBitVal);
			}else {
				int sum= (Integer.parseInt((results.charAt(p-1)+"").trim())*possibleK3)+ (Integer.parseInt((results.charAt(p-2)+"").trim())*possibleK2) + (Integer.parseInt((results.charAt(p-3)+"").trim())*possibleK1);
				results=results+sum%2;
			}
		}
		System.out.println("The results as follow");
		for(int k=0;k<results.length();k++){
			System.out.println("S"+(k+1)+" ==> "+results.charAt(k));	
		}
	}
}
