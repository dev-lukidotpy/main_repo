import java.util.Scanner;
import java.util.Locale;

public class Questao8 {

    // Refactored Beale's function to use double for precision
    static double beale(double x, double y) {
        // Computing the three components of Beale's function
        double p1 = Math.pow((1.5 - x + x * y), 2);
        double p2 = Math.pow((2.25 - x + x * Math.pow(y, 2)), 2);  // Corrected here
        double p3 = Math.pow((2.625 - x + x * Math.pow(y, 3)), 2);  // Corrected here

        // Return the sum of the components
        return p1 + p2 + p3;
    }

    public static void main(String[] args) {
        // Initialize Scanner for user input with Portuguese locale (for comma as decimal separator)
        Scanner scanner = new Scanner(System.in, "UTF-8");
        scanner.useLocale(Locale.forLanguageTag("pt-BR")); // Use the Brazilian locale for comma

        // Prompt for input with clarification about decimal separator
        System.out.print("Insira o valor para x (entre -4.5 e 4.5): ");
        double x = scanner.nextDouble();
        System.out.print("Agora, insira o valor para y (entre -4.5 e 4.5): ");
        double y = scanner.nextDouble();

        // Validate the input range
        if (isValidRange(x) && isValidRange(y)) {
            // Call the Beale function and display the result
            System.out.println("Resultado da função Beale: " + beale(x, y));
        } else {
            System.out.println("Valores precisam estar entre -4.5 e 4.5.");
        }
    }

    // Helper function to check if a value is within the valid range (-4.5 to 4.5)
    static boolean isValidRange(double value) {
        return value >= -4.5 && value <= 4.5;
    }
}
