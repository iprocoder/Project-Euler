public class Solution {
    public static void main(String[] args) {
        System.out.println(
                sumDivisibleBy(3) + sumDivisibleBy(5) - sumDivisibleBy(15));
    }

    private static int sumDivisibleBy(int n) {
        int target = 999;
        int p = target / n;
        return n * (p * (p + 1)) / 2;
    }
}
