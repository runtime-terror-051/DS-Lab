/*WAP to implement a class name emp and it's instance variable name as a string data type, empid as a int DT and Basic salary as a
 * double data type and its method process asvoid datatype. To initiate all the information of an employee and print all the information 
 * of the employee to display method of datatype void*/
 import java.util.Scanner;
 class EMP
{
    String name;
    int empid;
    double basic_sal;
    Scanner obj=new Scanner(System.in);
    void input()
    {
        System.out.print("ENter your name:");
        name=obj.nextLine();
        System.out.print("Enter your Employee ID:");
        empid=obj.nextInt();
        System.out.print("Enter your basic salary:");
        basic_sal=obj.nextDouble();
    }
    void display()
    {
        System.out.println("Employee's Name")
    }
} 