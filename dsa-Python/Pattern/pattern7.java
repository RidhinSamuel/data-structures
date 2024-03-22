/**
 * The pattern7 class prints a pattern of asterisks in a pyramid shape based on the user input for the
 * number of rows.
 */
import java.util.*;
public class pattern7 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println( "Enter the number of rows:");
        int limit=sc.nextInt();
        int count=1;
        for (int i = 1; i <=limit ; i++) {
            for(int j=1;j<=limit-i;j++){
                System.out.print("  ");
            }
            for(int k=1;k<=count;k++){
                System.out.print("* ");
            }
            System.out.println();
            count+=2;
        }
        sc.close();
    }
}
