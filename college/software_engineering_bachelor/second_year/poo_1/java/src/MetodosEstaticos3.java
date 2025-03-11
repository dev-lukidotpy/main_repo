public class MetodosEstaticos3 {
    static int LuPower(int value, int exp) {
        if (exp == 0) {
            return 1;
        }

        if (exp == 1) {
            return value;
        }

        int result = value;

        while (exp > 1) {
            result *= value;

            exp--;
        }

        return result;
    }

    public static void main(String[] args) {
        System.out.println(LuPower(5, 2));
        System.out.println(LuPower(3, 3));
        System.out.println(LuPower(5, 3));
    }
}
