import java.util.Scanner;


public class Codeforces_1849A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- != 0){
            int b = scanner.nextInt(), c = scanner.nextInt(), h = scanner.nextInt();
            b -= 1;
            int ans = 1 + 2 * Math.min(b,h+c);
            System.out.println(ans);
        }
        scanner.close();
    }
}
