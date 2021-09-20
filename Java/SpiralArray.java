import java.util.*;
public class SpiralArray {
    public static void main(String[] args){

    Scanner scn = new Scanner(System.in);

    int n = scn.nextInt();
    int m = scn.nextInt();

    int[][] arr = new int[n][m];

    for(int i = 0;i < n;i++){
    	for(int j = 0;j < m;j++){
    		arr[i][j] = scn.nextInt();
    	}
    }

    // spiral_clockWise(arr);
    spiral_anticlockWise(arr);

   }
    public static void spiral_anticlockWise(int[][] mat){

        int n = mat.length;
        int m = mat[0].length;

        int minRow = 0;
        int minCol = 0;
        int maxRow = n - 1;
        int maxCol = m - 1;

        int element = 1;
        int cnt = 1;
        int total = n*m;
        while(cnt <= total){

            for(int row = minRow;row <= maxRow && cnt <= total;row++){

                System.out.print(mat[row][minCol]+", ");
                cnt++;
            }

            minCol++;

            for(int col = minCol;col <= maxCol && cnt <= total;col++){

                // System.out.println(row+","+(maxCol - 1));
                System.out.print(mat[maxRow][col]+", ");
                cnt++;
            }

            maxRow--;

            for(int row = maxRow;row >= minRow && cnt <= total;row--){

                // System.out.println((maxRow -/)+","+col);
                System.out.print(mat[row][maxCol]+", ");
                cnt++;
            }

            maxCol--;

            for(int col = maxCol; col >= minCol && cnt <= total;col--){

                System.out.print(mat[minRow][col]+", ");
                cnt++;
            }

            minRow++;
        }

        System.out.println("END");

   }
}