import java.util.*;
public class pattern11 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int limit=sc.nextInt();
        for (int i = 1; i <=limit ; i++) {
            int start=1;
            if(start%2==0)
                start=0;
            for (int j = 1; j<=i;j++){
                System.out.print(start);
                start=(start+1)%2;
            }
            System.out.println("");
        }
        sc.close();
    }
}
