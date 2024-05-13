import java.util.Scanner;
import java.util.Arrays;
public class Codeforces_1829A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- != 0){
            int n = scanner.nextInt();
            int [] time = new int[n];
            String [] flag = new String[n];
            for (int i = 0; i < n; i++) {
                time[i] = scanner.nextInt();
                flag[i] = scanner.next();
            }
            int min1 = (int)1e9, min2 = (int)1e9, minall = (int)1e9;
            for (int i = 0; i < n; i++) {
                if(flag[i].equals("11") && minall > time[i]) minall = time[i];
                if(flag[i].equals("01")  && min1 > time[i]) min1 = time[i];
                if(flag[i].equals("10") && min2 > time[i]) min2 = time[i];
            }
            int ans = Math.min(minall, min1+min2);
            if(ans == (int)1e9) ans = -1;
            System.out.println(ans);
        }
        scanner.close();
    }
}
