import java.util.*;

public class Sample{

    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int z = 0; z < t; z++){
            int a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();
            int big = (a>b)?((a>c)?a:c):(b>c)?b:c;
            int small = (a<b)?((a<c)?a:c):(b<c)?b:c;
            System.out.println(a+b+c-big-small);
        }
        sc.close();
    }
}