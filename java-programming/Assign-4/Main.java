public class Main{

  public static void main (String[] args) {

    int[] nums = new int[18];

    System.out.println("Earned salaries: " + "\t" +"Gross sales: ");

    int a = 200;

    for (int i =0; i <18; i+=2)

    {

      nums[i] = a; nums[i+1] = a+99;

      a+=100;

    }

     

    for (int i =0; i <18; i+=2)
    {

      if ( i == 16)

      System.out.println("$"+nums[i] +"" +" and over" +

                        "\t\t" +"$" + (int)(nums[i]*0.09 +200)+" "+"and over");

      else

      System.out.println("$"+nums[i] +"-" +"$" + nums[i+1]

                      +"\t\t" +"$" + (int)(nums[i]*0.09 +200)+"-"+"$" +

                                                    (int)(nums[i+1]*0.09 +200));



    }

  }

}
