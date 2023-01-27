/*Q.16 Write a java program implementing multiple inheritance(an interface can be used to implement multiple inheritance)*/

class person
{
String name;
int age;
String address;
void persondetails(String nm,int ag,String add)
{
name=nm;
age=ag;
address=add;
}
void displayperson()
{
System.out.println("Name: "+name);
System.out.println("Age: "+age);
System.out.println("Address: "+address);
}
}
class Employee extends person
{
int empid;
int salary;
void empdetails(int id,int sal)
{
empid=id;
salary=sal;
}
void displayemployee()
{
System.out.println("Empid: "+empid);
System.out.println("Salary: "+salary);
}
}
interface Bonus
{
int bonus=1000;
void compute();
}
class Faculty extends Employee implements Bonus
{
int amount;
public void compute()
{
System.out.println("The bonus is: "+bonus);
amount=salary+bonus;
}
void facultydetails()
{
displayperson();
displayemployee();
compute();
System.out.println("The total amount is: "+amount);
}
}
public class Multiheritance
{
public static void main(String[] args)
{
Faculty obj=new Faculty();
obj.persondetails("Surabhi",23,"115,BBSR");
obj.empdetails(001,20000);
obj.facultydetails();
System.out.println("");
obj.persondetails("Krishna",25,"109,CUTT");
obj.empdetails(002,35000);
obj.facultydetails();
}
}
