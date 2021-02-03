public class prime {
    public static void main (String[] args){
        int flag,num = 100;
        int count =0;
        for (int i = 2; i <= num; i++) {
            flag = 1;
            for (int j = 2; j <= i/2; j++) {
                if (i%j == 0) {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1) {
                count++;
                System.out.println(i + " ");
            }
        }
        System.out.println("total prime" +count);
    }
}