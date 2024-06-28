class Main {
  static int a;
  public static void main(String[] args) {
    System.out.println("A="+a);
    System.out.println("A="+Main.a);
    Main m1=new Main();
    m1.a=100;
    System.out.println("m1.a="+m1.a);
    Main m2=new Main();
    System.out.println("m2.a="+m2.a);
  }
}

