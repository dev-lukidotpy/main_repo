import java.util.Scanner;

public class question4 {
    public static void main(String[] args) {
        /*
        Escreva um programa que calcule a média final em um bimestre. O
        usuário deve informar quantas atividades teve no bimestre. Em seguida, o
        programa deve solicitar as notas de cada atividade e calcular a média
        aritmética. Apresente o resultado em tela.
        */
        
        Scanner gscan = new Scanner(System.in);
        int atividades;
        float soma = 0, media;

        System.out.println("Quantas atividades houve no bimestre?");
        atividades = gscan.nextInt();

        for (int i = 0; i < atividades; i++) {
            System.out.println("Informe a " + i + "° nota: ");
            soma += gscan.nextFloat();
        }

        media = soma / atividades;

        System.out.println("A média das notas é igual a: " + media);

        gscan.close();
    }
}
