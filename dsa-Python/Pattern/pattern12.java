import java.util.Scanner;
/**
 * pattern12
 */
public class pattern12 {

    public static void main(String[] args){
        Scanner sc =new Scanner(System.in);
        int limit=sc.nextInt();
        for (int i=1;i<=limit;i++){
            for (int j=1;j<=i;j++){
                System.out.print(j);
            }
            System.out.print(" ".repeat((limit-i)*2));
            for (int j=i;j>=1;j--){
                System.out.print(j);
            }
            System.out.println();
        }
    }
}
