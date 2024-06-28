Java Arrays 
Normally, an array is a collection of similar type of elements which has contiguous memory location.
Java array is an object which contains elements of a similar data type. Additionally, The elements of an array are stored in a contiguous memory location. It is a data structure where we store similar elements. We can store only a fixed set of elements in a Java array.
Array in Java is index-based, the first element of the array is stored at the 0th index, 2nd element is stored on 1st index and so on.
Unlike C/C++, we can get the length of the array using the length member. In C/C++, we need to use the sizeof operator.
In Java, array is an object of a dynamically generated class. Java array inherits the Object class, and implements the Serializable as well as Cloneable interfaces. We can store primitive values or objects in an array in Java. Like C/C++, we can also create single dimentional or multidimentional arrays in Java.
Moreover, Java provides the feature of anonymous arrays which is not available in C/C++.
 
Advantages
o	Code Optimization: It makes the code optimized, we can retrieve or sort the data efficiently.
o	Random access: We can get any data located at an index position.
Disadvantages
o	Size Limit: We can store only the fixed size of elements in the array. It doesn't grow its size at runtime. To solve this problem, collection framework is used in Java which grows automatically.
Types of Array in java
There are two types of array.
o	Single Dimensional Array
o	Multidimensional Array
Single Dimensional Array in Java
Syntax to Declare an Array in Java
	dataType[ ]   arr; (or)  
	dataType    [ ]arr; (or)  
	dataType    arr[ ];  
Instantiation of an Array in Java
arrayRefVar=new datatype[size];  

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
    }
}
Compile by: javac Main.java
Run by: java Main
First value: 1
Length of an array: 5
Last value: 5
1
2
3
4
5


For-each Loop for Java Array
The syntax of the for-each loop is given below:
for(data_type variable:array){  
//body of the loop  
} 

Example:
/Java Program to print the array elements using for-each loop  
class Main{  
public static void main(String args[]){  
int arr[]={33,3,4,5};  
//printing array using for-each loop  
for(int i:arr)  
System.out.println(i);  
}
}  
}
Note: https://onlinegdb.com/reKBCxcDw


Multidimensional Array in Java

In such case, data is stored in row and column based index (also known as matrix form).
Syntax to Declare Multidimensional Array in Java
dataType[ ][ ] arrayRefVar; (or)  
dataType [ ][ ]arrayRefVar; (or)  
dataType arrayRefVar[ ][ ]; (or)  
dataType [ ]arrayRefVar[ ]; 

Example to instantiate Multidimensional Array in Java
int[][] arr=new int[2][2];//2 row and 2 column  
int[][] arr=new int[3][3];//3 row and 3 column 
int[][] arr=new int[2][3];//2 row and 3 column 
int[][] arr=new int[3][2];//3 row and 2 column 


Assigning the Multidimensional Array:
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

Example:
3x3 Array:
int arr[ ][ ]={
{1,2,3},
{2,4,5},
{4,4,5}
};  
2X2 Array:
int arr[ ][ ]={  
{ 1,  2},
			{ 3,  4}
};
public class Main
{
	public static void main(String[] args) {
		int arr[][]={  
                        { 1,  2},
                        { 3,  4}
                    };
        for(int r=0;r<2;r++){
            for(int c=0;c<2;c++){
                System.out.print(arr[r][c]+" ");
            }
            System.out.print("\n");
        }
	}
}
https://onlinegdb.com/sUjtGjK3f
https://onlinegdb.com/msVSdmb8P
https://onlinegdb.com/1P_AoMcv8
