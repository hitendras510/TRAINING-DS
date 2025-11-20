import java.util.Scanner;
////
////public class Main {
////   public static void main(String[] args) {
////       Scanner sc = new Scanner(System.in);
////
////       System.out.println("Enter integer:");
////       int a = sc.nextInt();
////
////       System.out.println("Enter double:");
////     double b = sc.nextDouble();
////
////       System.out.println("Enter the single word:");
////       String c = sc.next();
////
////       sc.nextLine();
////
////       System.out.println("Enter the full line");
////       String d = sc.nextLine();
////
////       System.out.println("Integer:" + a);
////       System.out.println("double:" + b);
////       System.out.println("word:" + c);
////       System.out.println("Line:" + d);
////}
////
////}
//
////type casting
//
//class Main {
//    public static void main(String[] args) {
//
//        String str = "Hello";
//        char[] ch = str.toCharArray();
//
//        System.out.println("Reversed string:");
//
//
//        for (int i = ch.length - 1; i >= 0; i--) {
//            System.out.print(ch[i]);
//        }
//
//        System.out.println();
//    }
//}
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

//class Main {
//    public static void main(String[] args) {
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter the word:");
//        String word = sc.nextLine();
//        String b = "";
//
//        for (int i = word.length() - 1; i >= 0; i--) {
//            b += word.charAt(i);
//        }
//
//        if (word.equals(b)) {
//            System.out.println("Yes");
//        } else {
//            System.out.println("No");
//        }
//

//         Scanner sc = new Scanner(System.in);
//         System.out.println("Enter the sentence:");
//         String word = sc.nextLine();
//
//         String arr[] = word.split(" ");
//
//         for(String val : arr){
//         System.out.println(val);
//          }
//





//        String str="Hello";
//        String str1="Hello;
//        String str=new String("Hello");
//        String str1=new String("Hello");
//
//        System.out.println(str==str1);
//        System.out.println(str.equals(str1));


//        System.out.println("length of string:"+ str.length());
//        System.out.println("char of string at defined index:"+ str.charAt(1));
//        System.out.println("char to uppercase:"+ str.toUpperCase());
//        System.out.println("char to lower case:"+ str.toLowerCase());
//        System.out.println(":"+ str.trim());
//        System.out.println("starting point with given index no.:"+ str.substring(2));
//        System.out.println("start and end point as need :"+ str.substring(1 , 4));
//        System.out.println("index number:"+ str.indexOf(str));
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//LECT4
//        StringBuilder str=new StringBuilder("Hello");
//        str.append("j"); //output = helloj //1. append
//        System.out.println("Append:" + str);
//        str.insert(2,"byee"); //Hebyeelloj //2.insert
//        System.out.println("Insert:"+str);

//        str.replace(1,4,"JAVA");
//        System.out.println("Replace:" + str);

//        str.delete(2,4);//
//        System.out.println("Delete:" + str);

//        str.deleteCharAt(1);
//        System.out.println("dltCharAt:" +str);

//        str.setCharAt(0, 'X');
//        System.out.println("SetCharAt:"+str);

//        str.reverse();
//        System.out.println("Reverse:"+str);

//        str.length();
//        System.out.println("Length:" + str.length());

//        str.capacity();
//        System.out.println("Capacity:"+str.capacity());




//        StringBuilder str = new StringBuilder("I love java");
//        String newStr = str.toString();
//        StringBuilder result = new StringBuilder();
//
//        String arr[] = newStr.split(" ");
//        for (String s : arr) {
//            StringBuilder str2 = new StringBuilder(s); //"i", "L"O"V"E", "J"A"V"A".
//            result.append(str2.reverse().append(" "));
//        }
//
//        str.reverse();
//        System.out.println(result.toString().trim());



//        String str = "aaaaabbbccd";
//        StringBuilder result = new StringBuilder();
//        int count = 1;
//
//
//        for (int i = 1; i < str.length(); i++) {
//            if (str.charAt(i) == str.charAt(i - 1)) {
//                count++;
//            } else {
//
//                result.append(str.charAt(i - 1)).append(count);
//
//                count = 1;
//            }
//        }
//
//        result.append(str.charAt(str.length() - 1)).append(count);
//
//        System.out.println(result);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//lect 5
//class Main {
//    static int a=5; //"static" keyword to make var static
//    int data=20;

//    static void Sum(){ //"static" keyword to make var static
//        System.out.println("Hello");
//    }

//    public static void main(String[] args) {

//   Main obj=new Main(); //to print non static var.
//   System.out.println("Non static or instant var : " +obj.data);
//   System.out.println("non static or instant var : "+ a);
//
//   int c = 70;
//   System.out.println("static var : " +c);

//Main obj = new Main();
//        obj.Sum(); to call non static

//Sum(); // to call when turned into static


    //NON Static condition
//class car{
//
//    String name="Hello";
//    void Sum(){
//        System.out.println(name);
//    }
//}
//class Main {
//    public static void main(String[] args) {
//        car obj = new car();
//        obj.Sum();

    //turning into static
//class car {
// static String name = "Hello";
//static void Sum() {
//
//System.out.println(name);
//}
//}
//class Main{
//    public static void main(String[] args) {
//
//        car.Sum();

////////////////////////////////////////////////////////////////////////////////////////////////////////////

//lect6

class Car {
    int a;
    String name;
Car(int a,String name) {
    this.a=a;
    this.name=name;
System.out.println("Name: "+" "+name);
System.out.println("age: "+" "+a);
}
}
class Main{
    public static void main(String[] args){
        Car s1=new Car(31,"Jain");
        System.out.println("\n");
        Car s2=new Car(43,"Mishra");
        System.out.println("\n");
        Car s3=new Car(52,"Singh");





















/// ////////////////////////////////////////////////////////////////////////////////













/// //////////////////////////////////////////////////////////////////////////////

































    }
}


