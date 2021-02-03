public class factorial {
    int num;
    int fact=1;
    public void facto(int num){
        for (int i = 1; i <=num; i++) {
            fact = fact*i;
        }
        System.out.println("factorial is  " + fact );
    }
    public static void main(String[] args) {
        factorial obj = new factorial();
        obj.facto(5);
    }
}
