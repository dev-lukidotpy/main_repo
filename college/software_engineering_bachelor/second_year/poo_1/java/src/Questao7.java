public class Questao7 {
    public static void main(String[] args) {
        int x = 10;
        int y = 2;

        System.out.println("x em binário = " + Integer.toBinaryString((x)));

        x = x << y;

        System.out.println("x = " + x);

        System.out.println("x em binário = " + Integer.toBinaryString((x)));
    }
}
