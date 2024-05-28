package problemSolving;
import java.util.Scanner;

public class Problems {
	
	public static int getFibonacc(int sequence) {
		if(sequence == 0){
			return 0 ;
			}
		else if(sequence == 1) {
			return 1 ;
		} 
		else {
			return getFibonacc(sequence-1) + getFibonacc(sequence-2);
		} 
 	}
	
	public static void main(String[] args){
		
		Scanner input = new Scanner(System.in);

		System.out.println("Please enter a number to get you result of the sequence: ");
		int offset = input.nextInt();
		System.out.printf("Your result is :%d ",Problems.getFibonacc(offset));
		
	}
}
