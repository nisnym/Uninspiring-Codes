public class functions {
    public static void main(String args[]) {
        Scanner scn = new Scanner(System.in);
        int num1, num2;
        num1 = scn.nextInt();
        num2 = scn.nextInt();
        boolean flag1 = true, flag2 = true;
// checking prime for number 1
        for (int i = 2; i<num1; i++) {
            if (num1 % i == 0) {
                flag1 = false;
                break;
            }
        }
// checking prime for number 2
        for (int i = 2; i<num2; i++) {
            if (num2 % i == 0) {
                flag2 = false;
                break;
            }
        }
        if (flag1)
            System.out.println(num1 + " is prime");
        else
            System.out.println(num1 + " is not prime");
        if (flag2)
            System.out.println(num2 + " is prime");
        else
            System.out.println(num2 + " is not prime");
    }

}