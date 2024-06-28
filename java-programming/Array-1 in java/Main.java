class Main{
    public static void main(String args[]){
        // Initialization of an array
        int a[]={1,2,3,4,5};
        
        //printing array first value
        System.out.println("First value: "+a[0]);
        System.out.println("Length of an array: "+a.length);
        System.out.println("Last value: "+a[a.length-1]);
        // print 1 to 5 values
        for(int index=0;index<a.length;index++){
            System.out.println(a[index]);
        }
        System.out.println("For each output");
        // for each 
        for(int item: a){
            System.out.println(item);  
        }

    }
}