import java.util.Scanner;

public class pattern10 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int limit = sc.nextInt();
        sc.close(); // Close the scanner after getting input
        
        // Print pyramid pattern
        for (int i = 1; i <= 2 * limit - 1; i++) {
            int stars = i <= limit ? i : 2 * limit - i;
            System.err.println(stars);
            for (int j = 1; j <= stars; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
