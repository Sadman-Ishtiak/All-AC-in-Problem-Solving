import java.util.Scanner;

public class CHRISTGREET {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int date = input.nextInt();
        if (date == 25) {
            System.out.println("CHRISTMAS");
        } else{
            System.out.println("ORDINARY");
        }
        input.close();
    }
}
