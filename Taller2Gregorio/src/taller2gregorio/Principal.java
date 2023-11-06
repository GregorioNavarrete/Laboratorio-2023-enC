package javaapplication46;

import java.util.Scanner;


public class JavaApplication46{

    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        // TODO code application logic here
        
        //creo una instancia del objeto televisor
        //System.out.println("--->Probamos el primer constructor");
        
        
      
        
     
        
    /*
        
        //probar el segudno constructor
        System.out.println("--->Probamos el primer constructor");
        
        System.out.print("Ingrese la marca del televisor:");
        String marca = entrada.nextLine();

        System.out.print("Ingrese las pulgadas del televisor:");
        double pulgadas = entrada.nextDouble();

        Televisor T2 = new Televisor(marca, pulgadas);
        
        T2.mostrar();
        
        //probar el tercer constructor
        
        System.out.println("--->Probamos el tercer constructor");

        System.out.print("Ingrese la cantidad de canales: ");
        int cantCanales = entrada.nextInt();

        Televisor T3 = new Televisor(cantCanales);

        T3.mostrar();

    */

    
    
    

         /* 
            Esto es lo q nos da ChatGPT
            1)ver si hace lo q nos pide 
            2)ponerle la nomenclatura propia
            3)estudiar de el ,para el parcial

         */
        // Crear un televisor con marca "Philco" y 72 pulgadas
        Televisor T1 = new Televisor("Philco", 72.0);

        
        T1.cambiarEstado(); // prender la tele

        int cambiosDeCanal = 0;

        int b=0;
        //para que usuario cambie de canal tantas veces como quiera ,0 es la condicion de corte 
        while (b==0) {
            System.out.print("Ingrese canal : ");
            int nuevoCanal = entrada.nextInt();//modifica el canal del Obj T1
            
            //PREGUNTAR SI VA ACAMBIAR CON NUMERO O INCREMENTAL ! 
            //

            if (nuevoCanal == 0) {
                System.out.println("Apagando el televisor...");
                T1.cambiarEstado(); // Se apaga
                b=1;
            } else {
                T1.cambiarCanal(nuevoCanal);
                cambiosDeCanal++;
                System.out.println("Ahora el televisor está sintonizando el canal " + T1.getCanalActivo());
                T1.mostrar();
            }
        }

        System.out.println("Se realizaron " + cambiosDeCanal + " cambios de canal.");
    
        
        
    }
    
    
    
}
