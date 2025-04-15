import java.util.Scanner;

public class Questao3 {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        int a, b;

        System.out.println("Insira o primeiro número:");
        a = leitor.nextInt();
        System.out.println("Insira o segundo número:");
        b = leitor.nextInt();

        System.out.println("O resultado de " + a + " dividido por " + b + " é igual a " + (a / b));
    }
}

// Ao dividir por zero recebemos uma exceção aritmética de divisão por zero