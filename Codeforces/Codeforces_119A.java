import java.util.Scanner;

public class Codeforces_119A {
    public static int gcd(int x, int y) {
        return (x == 0) ? y : gcd(y % x, x);
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt(), b = scanner.nextInt(), n = scanner.nextInt();
        int count = 0;
        while (n >= 0) {
            ++count;
            n -= gcd((count & 1) != 0 ? a : b, n);
        }
        System.out.println(count&1);
        scanner.close();
    }
}
