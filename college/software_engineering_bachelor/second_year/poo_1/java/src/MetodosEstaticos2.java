public class MetodosEstaticos2 {
    static void toRed(String texto) {
        System.out.print("\u001b[31m");
        System.out.println(texto);
        System.out.print("\u001B[0m");
    }

    public static void main(String[] args) {
        System.out.println("Texto normal");
        toRed("Texto em vermelho");
    }
}
