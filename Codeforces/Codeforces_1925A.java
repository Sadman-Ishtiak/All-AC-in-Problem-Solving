import java.util.Scanner;

public class Codeforces_1925A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- != 0){
            int a = scanner.nextInt(), b = scanner.nextInt();
            for (int i = 0; i < a; i++) {
                char x = 'a';
                for (int j = 0; j < b; j++) {
                    System.out.print(x);
                    x += 1;
                }
            }
            System.out.println();
        }
        scanner.close();
    }
}
