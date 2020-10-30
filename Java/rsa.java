import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.Random;
import java.util.Scanner;


public class rsa {
	static boolean prime(int p){
   	 if(p==1||p==0){
   		 return false;
   	 }
   	 for(int i=2;i<p;i++){
   		 if(p%i==0)
   			 return false;
   	 }
   	 return true;
    }
    static boolean gcd(int a,int b){
   	 if((a==1||b==1)||(a==0||b==0)){
   		 return false;
   	 }
   	 else{
   	 for(int i=2;i<=a;i++){
   		 if(((a%i)==0)&&((b%i)==0)){
   			 return false;
   		 }
   	 }
   	}
   
    return true;
   }
public static void main(String[] args) {
	    int p = 0,q=0,n,phi=0,e,d,ip1,ip2;
		Scanner in= new Scanner(System.in);
		Random r=new Random();
		boolean flag=false;
		while(flag){
			ip1=r.nextInt(100);
			if((prime(ip1))==true){
				p=ip1
				flag=false;
				
			}
		}
		flag=true;
		while(flag){
			ip2=r.nextInt(100);
			if(((prime(ip2))==true)&&(p!=ip2)){
				q=ip2
				flag=false;
				
			}
		}
		
		System.out.println("p:"+p+" q:"+q);
		phi=(p-1)*(q-1);
		for(e=2;e<phi;e++){
			if(gcd(e,phi)==true){
				break;
				
			}
		}
		System.out.println("n:"+n);
		for(d=1;d<n;d++){
			if(((e*d)%phi)==1)
		}
		System.out.println("phi:"+phi);
		System.out.println("PUBLIC KEY:"+e+"\nPRIVATE KEY:"+d);
		int t = 0,ip;
		flag=true;
		while(flag){
			ip=r.nextInt(20);
			if(ip<n&&ip!=0){
				flag=false;
				
			}
		}
	System.out.println("INPUT VALUE IS "+t);
	double cip=((Math.pow(t,e))%(double)n);
	System.out.println("CIPHER TEXT IS "+cip);
	BigInteger c=BigDecimal.valueOf(cip).toBigInteger();
	BigInteger N=BigInteger.valueOf(n);
	BigInteger plain=c.pow(d).mod(N);
	System.out.println("PLAIN TEXT IS "+plain);
		}


}