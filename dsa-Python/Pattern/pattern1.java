import java.util.*;
public class pattern1 {
    public static void main(String args[]){
        System.out.println("Enter the limit ");
        Scanner sc=new Scanner(System.in);
        int limit=sc.nextInt();
        for (int i=0;i<limit;i++){
            for (int j=0;j<limit;j++){
                System.out.print("*");
            }
            System.out.println();
        }
        sc.close();
    }
}
