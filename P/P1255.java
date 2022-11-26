import java.math.*;
import java.util.*;

public class P1255 {
    public static BigInteger[] dp = new BigInteger[5010];
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        dp[1] = new BigInteger("1");
        dp[2] = new BigInteger("2");
        if (n <= 2) {
            System.out.println(dp[n]);
        } else {
            for (int i=3;i<=n;i++) {
                dp[i] = dp[i-2].add(dp[i-1]);
            }
            System.out.println(dp[n]);
        }
    }
}
