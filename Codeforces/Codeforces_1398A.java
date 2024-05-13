import java.util.Scanner;

public class Codeforces_1398A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- != 0){
            int n = scanner.nextInt();
            int [] nums = new int[n];
            for (int i = 0; i < n; i++) {
                nums[i] = scanner.nextInt();
            }
            if(nums[0] + nums[1] > nums[n-1]) {
                System.out.println(-1);
            } else {
                System.out.println("1 2 " + n);
            }
        }
        scanner.close();
    }
}
