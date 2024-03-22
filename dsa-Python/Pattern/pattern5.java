import java.util.Scanner;
class pattern5{
    public static void main (String args[]){
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the limit");
        int limit=sc.nextInt();
        System.out.println(limit);
        for (int i = limit; i>0; i--) {
            for(int j=1;j<=i;j++){
                System.out.print("*");
            }
            System.out.println();
        }
        sc.close();
    }
}