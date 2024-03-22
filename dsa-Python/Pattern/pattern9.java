import java.util.*;
public class pattern9 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println( "Enter the number of rows:");
        int limit=sc.nextInt();
        int count=1;
        for (int i = 1; i <=limit ; i++) {
            for(int j=1;j<=limit-i;j++){
                System.out.print(" ");
            }
            for(int k=1;k<=count;k++){
                System.out.print("*");
            }
            System.out.println();
            count+=2;
        }
        count=2*limit-1;
        for (int i = limit;  i>=0; i--) {
            for(int j=1;j<=limit-i;j++){
                System.out.print(" ");
            }
            for(int k=1;k<=count;k++){
                System.out.print("*");
            }
            System.out.println();
            count-=2;
        }
        sc.close();
    }
}