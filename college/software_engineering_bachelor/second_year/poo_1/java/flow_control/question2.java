import java.util.Scanner;

public class question2 {
    public static void main(String[] args) {
        int num, sum = 0;

        Scanner gscan = new Scanner(System.in);
    
        System.out.println("Type in a roof integer to sum all numbers up to that number: ");
        
        num = gscan.nextInt();

        for (int i = 1; i <= num; i++) {
            sum += i;
        }

        System.out.println("A soma dos valores entre 1 e " + num + " é igual a " + sum);

        gscan.close();
    }
}
