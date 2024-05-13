import java.util.HashSet;
import java.util.Scanner;

public class Codeforces_1702B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- != 0){
            int ans = 0;
            String s = scanner.next();
            char[] chars = s.toCharArray();
            int n = chars.length;
            HashSet<Character> set = new HashSet<>();
            for (int i = 0; i < n; i++) {
                set.add(chars[i]);
                if (set.size() == 4){
                    ans++;
                    set.clear();
                    set.add(chars[i]);
                }
            }
            if (!set.isEmpty()) ans++;
            System.out.println(ans);
        }
        scanner.close();
    }
}
