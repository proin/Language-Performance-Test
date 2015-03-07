public class Hanoi {
	private static void hanoi(int n, int a, int b) {
		int temp;
		if (n != 1) {
			temp = 6 - a - b;
			hanoi(n - 1, a, temp);
			hanoi(n - 1, temp, b);
		}
	}

	public static void main(String[] args) {
		long st = System.currentTimeMillis();
		hanoi(Integer.parseInt(args[0]), 1, 2);
		long t = System.currentTimeMillis() - st;
		System.out.println(t + " ms");
	}
}
