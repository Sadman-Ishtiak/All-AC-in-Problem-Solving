import java.util.*;
public class MINWAGE {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        if (n > 11) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
        input.close();
    }
}
