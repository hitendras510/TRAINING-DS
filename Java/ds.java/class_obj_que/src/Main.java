////1. Create a class Student with fields name, rollNumber, and marks. Write a method to display
//// student details. Create 3 student objects and display their data.
//
//class Student1{
//    String name = "Hitendra";
//    int marks = 10;
//    int rollno = 26;
//    static void a(){
//        Student1 a=new Student1();
//        System.out.println("Name of 1st student:"+a.name);
//        System.out.println("Marks of 1st student:"+a.marks);
//        System.out.println("Rollno of 1st student:"+a.rollno);
//        System.out.println("\n");
//    }
//}
//class Student2{
//    String name = "om";
//    int marks = 1;
//    int rollno = 226;
//    static void a(){
//        Student2 a=new Student2();
//        System.out.println("Name of 2st student:"+a.name);
//        System.out.println("Marks of 2st student:"+a.marks);
//        System.out.println("Rollno of 2st student:"+a.rollno);
//        System.out.println("\n");
//    }
//}
//class Student3{
//    String name = "Krishna";
//    int marks = 0;
//    int rollno = 6;
//    static void a(){
//        Student3 a=new Student3();
//        System.out.println("Name of 3st student:"+a.name);
//        System.out.println("Marks of 3st student:"+a.marks);
//        System.out.println("Rollno of 3st student:"+a.rollno);
//        System.out.println("\n");
//    }
//}
//
//class Main{
//    public static void main(String[] args){
//        Student1.a();
//        Student2.a();
//        Student3.a();
//    }
//}
///////////////////////////////////////////////////////////////////////////////////////////////
// 2. Create a class Rectangle with length and breadth as fields. Add methods to calculate area and
// perimeter. Create objects with different values and call those methods.

//    class Rectangle{
//    int length=10;
//    int breadth=20;
//    int area=length*breadth;
//    int Perimeter=2*length+breadth;
//    static void a(){
//        Rectangle r1=new Rectangle();
//        System.out.println("Perimeter:"+r1.Perimeter);
//        System.out.println("area:"+r1.area);
//    }
//}
//class Main{
//    public static void main(String[] args) {
//        Rectangle.a();
//    }
//}
//////////////////////////////////////////////////////////////////////////////////////////////////
// 3. Create a class BankAccount with fields accountNumber, accountHolder, and balance. Implement
// methods to deposit and withdraw money.
//class BankAccount{
//    int accountNumber;
//    String accountHolder;
//    int balance;
//    BankAccount(int accountNumber, String accountHolder, int balance){
//        this.accountNumber = accountNumber;
//        this.accountHolder = accountHolder;
//        this.balance = balance;
//    }
//    void deposit(int amount){
//        if(amount > 0){
//        balance += amount;
//            System.out.println("Deposited " + amount + " to account number " + accountNumber);
//        } else {
//            System.out.println("Insufficient funds!");
//        }
//    }
//    void withdraw(int amount){
//        if(amount<0){
//            System.out.println("Insufficient funds!");
//        }else if (amount > balance){
//            System.out.println("Insufficient balance!");
//        }else{
//            balance -= amount;
//            System.out.println(amount + "\n"+"updated balance = "+balance);
//        }
//    }
//    void display(){
//            System.out.println("\n--- Account Details ---");
//            System.out.println("Account Number: " + accountNumber);
//            System.out.println("Account Holder: " + accountHolder);
//            System.out.println("Balance: " + balance);
//        }
//}
//
//    class Main {
//        public static void main(String[] args) {
//
//
//            BankAccount b = new BankAccount(12345, "Hitendra", 1000);
//
//            b.display();
//
//            b.deposit(500);
//            b.withdraw(200);
//            b.withdraw(2000); // insufficient balance
//        }
//    }
//////////////////////////////////////////////////////////////////////////////////////////////////
/** 4. Create a class Car with fields brand, model, and price.
 Write a method to display car details.
 Create multiple objects and display info.
 **/
//class Car {
//    String brand;
//    String model;
//    double price;
//
//    Car(String brand, String model, double price) {
//        this.brand = brand;
//        this.model = model;
//        this.price = price;
//    }
//
//    void display() {
//        System.out.println("Brand: " + brand + ", Model: " + model + ", Price: " + price);
//    }
//}
//
//class Main {
//    public static void main(String[] args) {
//
//
//        Car car1 = new Car("Ford", "Figo", 50000);
//        Car car2 = new Car("Toyota", "Innova", 60000);
//        Car car3 = new Car("Tata", "Nexon", 120000);
//
//
//        car1.display();
//        car2.display();
//        car3.display();
//    }
//}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  5. Create a class Circle with radius. Write methods to calculate area and circumference of the circle.
//class Circle{
//   int radius ;
//  Circle(int r){
//      radius = r;
//  }
//  double area(){
//    return Math.PI*radius*radius;
//  }
//  double circumference(){
//    return 2*Math.PI*radius;
//  }
//}
//class Main{
//   public static void main(String[] args){
//       Circle c1 = new Circle(5);
//       System.out.println("Area:"+c1.area());
//       System.out.println("Circumference:"+c1.circumference());
//   }
//}
//////////////////////////////////////////////////////////////////////////////////////////////////
// 6. Create a class Book with title, author, and price. Add a method to apply a discount of 10% and
// display the final price.
//class Book{
//    String title;
//    String author;
//    int price;
//
//    void setPrice(int p){
//        price=p;
//    }
//    int applyDiscount(){
//        int discountAmount=(price*10)/100; //10%
//        int finalPrice=price-discountAmount;
//        return finalPrice;
//    }
//}
//
//class Main{
//    public static void main(String[] args) {
//        Book book=new Book();
//        book.title="JAVA programming";
//        book.author="Great Hitendra Singh";
//        book.setPrice(10980);
//
//        int finalPrice=book.applyDiscount();
//
//        System.out.println("Tile:"+book.title);
//        System.out.println("Author:"+book.author);
//        System.out.println("Final price after 10% discount:"+finalPrice);
//    }
//}
//////////////////////////////////////////////////////////////////////////////////////////////////
//  7. Create a class Employee with name, id, and salary. Write a method to give a 5% salary
// increment. Print details before and after increment.
// 7. Create a class Employee with name, id, and salary.
// Write a method to give a 5% salary increment. Print details before and after increment.
//class Employee {
//    String name;
//    int id;
//    double salary;
//
//
//    double giveIncrement() {
//        double increment = (salary * 5) / 100;   // 5% of salary
//        salary = salary + increment;             // update salary
//        return salary;                           // return updated salary
//    }
//}
//
//class Main {
//    public static void main(String[] args) {
//
//        Employee e1 = new Employee();
//        e1.name = "John";
//        e1.id = 11;
//        e1.salary = 1000;
//
//
//        System.out.println("Before increment:");
//        System.out.println("Name: " + e1.name);
//        System.out.println("ID: " + e1.id);
//        System.out.println("Salary: " + e1.salary);
//
//        // Apply increment
//        double finalSalary = e1.giveIncrement();
//
//
//        System.out.println("\nAfter increment:");
//        System.out.println("Name: " + e1.name);
//        System.out.println("ID: " + e1.id);
//        System.out.println("Updated Salary: " + finalSalary);
//    }
//}

import java.util.Scanner;

//////////////////////////////////////////////////////////////////////////////////////////////////
// 8. Create a class Movie with name, rating, and releaseYear. Create 5 movie objects and display
// movies released after 2020.
//class Movie{
//    String name;
//    double rating;
//    int year;
//    Movie(String name,double rating,int year){
//        this.name=name;
//        this.rating=rating;
//        this.year=year;
//    }
//}
//class Main{
//    public static void main(String[] args) {
//        Movie m1 = new Movie("KGF 2", 8.9, 2022);
//        Movie m2 = new Movie("Avengers Endgame", 9.0, 2019);
//        Movie m3 = new Movie("RRR", 9.2, 2022);
//        Movie m4 = new Movie("Dune", 8.3, 2021);
//        Movie m5 = new Movie("Joker", 8.7, 2019);
//
//        Movie[] movies={m1,m2,m3,m4,m5};
//
//        System.out.println("Movies released after 2020:");
//       for (int i=0;i<movies.length;i++){
//           if(movies[i].year>2020){
//               System.out.println(movies[i].name + " (" + movies[i].year + ")");
//           }
//       }
//
//    }
//}
//////////////////////////////////////////////////////////////////////////////////////////////////
//  9. Create a class Calculator with methods add, subtract, multiply, and divide. Use objects to call
// these methods.
//class Calculator{
//    int add(int a,int b){
//        return a+b;
//    }
//    int sub(int a,int b){
//        return a-b;
//    }
//    int mul(int a,int b){
//        return a*b;
//    }
//    double div(int a,int b){
//        return(double) a/b;
//    }
//}
//class Main{
//    public static void main(String[] args) {
//        Calculator c = new Calculator();
//        System.out.println("Addition: " + c.add(10, 5));
//        System.out.println("Subtraction: " + c.sub(10, 5));
//        System.out.println("Multiplication: " + c.mul(10, 5));
//        System.out.println("Division: " + c.div(10, 5));
//    }
//}
//////////////////////////////////////////////////////////////////////////////////////////////////
// 10. Create a class Laptop with brand, RAM, and price. Add a constructor to initialize values and a
// method to display them
//class Laptop{
//    String brand;
//    String ram;
//    int price;
//    Laptop(String brand,String ram,int price){
//        this.brand=brand;
//        this.ram=ram;
//        this.price=price;
//        System.out.println("Laptop brand:"+brand);
//        System.out.println("Laptop ram:"+ram);
//        System.out.println("Laptop price:"+price);
//    }
//}
//class Main{
//    public static void main(String[] args){
//        Laptop l1=new Laptop("LENOVO","8GB",50000);
//        System.out.println("\n");
//        Laptop l2=new Laptop("ACER","16GB",55000);
//        System.out.println("\n");
//        Laptop l3=new Laptop("ASUS","8GB",60000);
//
//    }
//}
//////////////////////////////////////////////////////////////////////////////////////////////////