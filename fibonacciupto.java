 
class fibonacciupto {
    public static void main(String[] args) {
        int n = 100, first = 0, second = 1, next = 0;
        System.out.print(first + " " + second);
        next = first + second;

        while (next <= n) {
            System.out.print(" " + next);
            first = second;
            second = next;
            next = first +second;
        }
    
    }
}