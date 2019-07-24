
public class Fibonacci2 {
public static void main(String[] args) {
    int a=1;
    System.out.println(a);
    int b=1;
    System.out.println(b);
    int sum=a+b;
    for(int i = 0;i <9;i++) {       
        a = a + b;
        System.out.println(a);
        b = a + b;      
        System.out.println(b);
        sum+=(a+b);
    }
        System.out.println("和为"+sum);
}
} 