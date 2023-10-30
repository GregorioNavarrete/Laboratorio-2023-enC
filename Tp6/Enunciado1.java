package gregocapo;

import java.util.Scanner;

public class Enunciado1 {

    private int a;
    private int b;

    public Enunciado1() {
        this.a = 0;
        this.b = 0;
    }

    public int suma() {
        return a +b;
    }

    public int producto() {
        return a * b;
    }

    /**
     * @param a the a to set
     */
    public void setA() {
        Scanner entrada = new Scanner(System.in);
        System.out.print("ingrese el valor del numero a : ");
        this.a = entrada.nextInt();
    }

    public int getB() {

        return b;
    }
 
    public int getA() {

        return a;
    }


    public void setB() {
        Scanner entrada = new Scanner(System.in);
        System.out.print("ingrese el valor del numero b : ");
        this.b = entrada.nextInt();
    }
}
