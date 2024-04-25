// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md


import java.util.Scanner;

public class Solver {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n, m = 0, aux;

        n = scanner.nextInt();
        aux = n;

        while (n != 0) {
            m = m * 10 + n % 10;
            n = n / 10;
        }

        if(aux == m) {
            System.out.println("1");
        } else {
            System.out.println("0");
        }

    }
}