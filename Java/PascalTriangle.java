import java.util.Scanner;

public class PascalTriangle {

	public static void main(String[] args) {
		Scanner scn=new Scanner(System.in);
	//	System.out.println("enter the no. N");
		int n=scn.nextInt(),i,j;
		for(i=1;i<=n;i++){
			int num=1;
			for(int spaces =1;spaces<=(n-i+1);spaces++)
			      System.out.print(" ");
			for(j=1;j<=i;j++){
				if(j==1)
					System.out.print(j+" ");
				else
				{
					num=num*(i-j+1)/(j-1);
					System.out.print(num+" ");
				}
			}
			System.out.print("\n");
		}
	}
}
