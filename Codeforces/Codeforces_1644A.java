import java.util.HashSet;
import java.util.Scanner;
import java.lang.String;
import java.util.Set;

import static java.lang.Character.*;

public class Codeforces_1644A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        scanner.nextLine();
        while (t-- != 0){
            String s = scanner.nextLine();
            Set<Character> keys = new HashSet<Character>();
            boolean answer = true;
            for (int i = 0; i < 6; i++) {
                char a = s.charAt(i);
                if (isLowerCase(a)) keys.add(a);
                else {
                    a = toLowerCase(a);
                    if(!keys.contains(a)){
                        answer = false;
                    }
                }
//                System.out.print(a + " ");
            }
//            System.out.println();
            System.out.println((answer)?"YES":"NO");
        }
        scanner.close();
    }
}
