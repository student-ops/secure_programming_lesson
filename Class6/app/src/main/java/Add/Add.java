package Add;

import java.math.BigInteger;
import java.util.Scanner;

public class Add {

    public static BigInteger add(int a, int b) {
        BigInteger bigA = BigInteger.valueOf(a);
        BigInteger bigB = BigInteger.valueOf(b);

        return bigA.add(bigB);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        try {
            System.out.print("Enter the value for x: ");
            int x = scanner.nextInt();

            System.out.print("Enter the value for y: ");
            int y = scanner.nextInt();

            BigInteger result = add(x, y);

            // 結果がintの範囲を超えているかチェック
            if (result.compareTo(BigInteger.valueOf(Integer.MAX_VALUE)) > 0 ||
                    result.compareTo(BigInteger.valueOf(Integer.MIN_VALUE)) < 0) {
                System.out.println("Warning: Result exceeds int range!");
            }

            System.out.println("Result: " + result);
        } finally {
            scanner.close();
        }
    }
}