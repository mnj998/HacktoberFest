//LEAKY BUCKET ALGORITHM
import java.util.Scanner;
public class lab1 {
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		int is=0;
		System.out.println("ENTER THE BUCKET SIZE");
		int bsize=in.nextInt();
		System.out.println("ENTER THE OUTPUT SIZE");
		int outsize=in.nextInt();
		int rs*bsize;
		do{
			System.out.println("ENTER THE NUMBER OF INPUT LINES");
			int n=in.nextInt();
			for(int i=0;i<n;i++){
				System.out.println("ENTER THE VALUE OF INPUT LINE "+(i+1));
				int ipsize=in.nextInt();
				if(ipsize<=rs){
					is+=ipsize;
					if(rs==0){
						System.out.println("BUCKET IS FULL");
					}
				}
				else{
					System.out.println("OVERFLOW");
					System.out.println("CAPACITY FULL VALUE IS DROPPED");
					System.out.println("THE SIZE OF THE PACKET DROPPED IS "+ipsize);
				}	
			}
			if(is!=0){
			is=(is>outsize)?(is-outsize);
			rs=bsize-is;
			System.out.println("INITIAL SIZE IS "+is);
			System.out.println("REMAINING SIZE IS "+rs);
			if(is==0){
				System.out.println("THE BUCKET IS EMPTY");
			}
		}	
			else{
				System.out.println("UNDERFLOW");
				abc=0;
			}
		}while(abc==1);
		
		}
	}

