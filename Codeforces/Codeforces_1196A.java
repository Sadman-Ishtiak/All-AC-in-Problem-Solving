import java.util.Scanner;

public class Codeforces_1196A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- != 0){
            long a = scanner.nextLong(), b = scanner.nextLong(), c = scanner.nextLong();
            long sum = a+b+c;
            sum = sum/2;
            System.out.println(sum);
        }
        scanner.close();
    }
}
