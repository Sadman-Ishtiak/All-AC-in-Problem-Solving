import java.util.Arrays;
import java.util.Scanner;

public class Codeforces_1421A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- != 0) {
            int[] masks = new int[30];
            boolean[] ans = new boolean[30];
            Arrays.fill(ans, false);
            for (int i = 0; i < 30; i++) {
//            System.out.println(1L<<i);
                masks[i] = 1 << i;
            }
            int a = scanner.nextInt(), b = scanner.nextInt();
            for (int i = 0; i < 30; i++) {
                if ((a ^ masks[i]) + (b ^ masks[i]) < (a + b)) ans[i] = true;
            }
            int result = 0;
            for (int i = 0; i < 30; i++) {
                if (ans[i]) result += masks[i];
            }
            System.out.println(((a^result) + (b^result)));
        }
        scanner.close();
    }
}
