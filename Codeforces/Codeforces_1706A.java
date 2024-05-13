import java.util.Arrays;
import java.util.Scanner;

public class Codeforces_1706A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- != 0){
            int n = scanner.nextInt();
            int m = scanner.nextInt();
            int [] a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = scanner.nextInt();
            }
            char [] s = new char[m];
            Arrays.fill(s, 'B');
            for (int i = 0; i < n; i++) {
                if (s[Math.min(a[i] - 1, m - a[i])] == 'A'){
                    s[Math.max(a[i] - 1, m - a[i])] = 'A';
                } else{
                    s[Math.min(a[i] - 1, m - a[i])] = 'A';
                }
            }
            for (int i = 0; i < m; i++) {
                System.out.print(s[i]);
            }
            System.out.println();
        }
        scanner.close();
    }
}
