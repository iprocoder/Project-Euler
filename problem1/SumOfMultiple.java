public class SumOfMultiple {
    public static void main(String[] args) {
        int target = 1000;
        int sum = 0;
        for (int i = 3; i < target; ++i)
            if (i % 3 == 0 || i % 5 == 0)
                sum += i;
        System.out.println(sum);
    }
}

