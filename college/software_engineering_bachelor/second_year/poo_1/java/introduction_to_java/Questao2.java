import java.util.Scanner;

public class Questao2 {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        int num;

        System.out.println("Digite um número para verificar se o mesmo é par ou ímpar: ");
        num = leitor.nextInt();

        System.out.println("Verificando se o número " + num + " é par ou ímpar...");
        System.out.println("Resultado: " + ((num % 2 == 0) ? "Par" : "ímpar"));
    }
}
