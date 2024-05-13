import java.util.HashSet;
import java.util.Scanner;

public class Codeforces_1721A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- != 0){
            char[] s = new char[4];
            String s1 = scanner.next();
            String s2 = scanner.next();
            s[0] = s1.charAt(0);
            s[1] = s1.charAt(1);
            s[2] = s2.charAt(0);
            s[3] = s2.charAt(1);
            HashSet<Character> set = new HashSet<>();
            for (int i = 0; i < 4; i++) {
                set.add(s[i]);
            }
            System.out.println(set.size() - 1);
        }
    }
}
