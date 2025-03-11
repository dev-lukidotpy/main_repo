public class Questao6 {
    public static void main(String[] args) {
        int x = 10;
        int y = 10;

        System.out.println(x++);
        System.out.println(++y);
        System.out.println("x = " + x);
        System.out.println("y = " + y);
    }
}

/** x foi incrementado após o print, y foi incrementado antes do print,
 * depois os valores atuais de x e y foram imprimidos **/