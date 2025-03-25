public class Main{
    public static void main(String[] args) {
        int [] n = {0, 1 ,2, 3, 4, 5, 6, 7, 8, 9};
        int a=0, b=0;
        for (int i=0; i<10; i++){
            if((n[i]/2)%2==0 || n[i]%2==0)
                a+=n[i];
            else 
                b+=n[i];
        }
        System.out.println(a+"/"+b);
    }
}