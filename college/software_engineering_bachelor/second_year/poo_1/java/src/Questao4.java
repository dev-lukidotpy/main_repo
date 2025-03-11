import java.util.Scanner;

public class Questao4 {
    public static void main(String[] args) {
        String texto1, texto2;

        Scanner leitor = new Scanner(System.in);

        System.out.println("Digite a primeira palavra:");
        texto1 = leitor.nextLine();
        System.out.println("Agora digite a segunda palavra:");
        texto2 = leitor.nextLine();

        System.out.println(texto1.equals(texto2) ? "São iguais" : "São diferentes");
    }
}
