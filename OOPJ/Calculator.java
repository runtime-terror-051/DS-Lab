import java.util.Scanner;

public class Calculator {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);

    // Prompt the user to enter two numbers
    System.out.print("Enter first number: ");
    double number1 = input.nextDouble();
    System.out.print("Enter second number: ");
    double number2 = input.nextDouble();

    // Prompt the user to enter an operator
    System.out.print("Enter an operator (+, -, *, /): ");
    char operator = input.next().charAt(0);

    double result;

    // Perform the operation
    switch (operator) {
      case '+':
        result = number1 + number2;
        break;
      case '-':
        result = number1 - number2;
        break;
      case '*':
        result = number1 * number2;
        break;
      case '/':
        result = number1 / number2;
        break;
      // If the operator is invalid, set result to 0
      default:
        System.out.println("Invalid operator");
        result = 0;
    }

    // Display the result
    System.out.println("Result: " + result);
  }
}
