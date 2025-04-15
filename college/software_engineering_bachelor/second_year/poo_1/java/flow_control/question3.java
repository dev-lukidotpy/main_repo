import java.util.Scanner;

public class question3 {
    public static void main(String[] args) {
        /*
        Escreva um programa que calcule a m´edia final em um bimestre.
        O usuário deve informar quantas atividades teve no bimestre. Em seguida, o
        programa deve solicitar as notas de cada atividade e calcular a m´edia
        aritmética. Apresente o resultado em tela.
         */

        Scanner gscan = new Scanner(System.in);
        int num;

        System.out.println("Type in a number: ");

        do {
            num = gscan.nextInt();
        } while (num != -1);
        
        gscan.close();

        System.out.print("End of execution");
    }
}
