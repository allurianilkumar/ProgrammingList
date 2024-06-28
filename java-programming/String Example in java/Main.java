public class Main{    
    public static void main(String args[]){
        //char name[]={'s','t','r','i','n','g','s'};
        char[] name={'M','O','M'}; // name is char Array
        System.out.println(name[0]);
        System.out.println(name[1]);
        System.out.println(name);
        String myName=new String(name);//converting char array to string    
        System.out.println("MY Name :"+myName);
        // string literal
        String nickName="Mummy";
        System.out.println("nickName :"+nickName);
    }
}    
