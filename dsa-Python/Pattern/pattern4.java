import java.util.Scanner;
class pattern4{
    public static void main (String args[]){
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the limit");
        int limit=sc.nextInt();
        for (int i = 0; i <=limit; i++) {
            for(int j=1;j<=i;j++){
                System.out.print(i);
            }
            System.out.println();
        }
    }
}