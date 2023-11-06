package javaapplication46;

import java.util.Scanner;



public class Televisor {
    
    
    //Defino las propiedades y las encapsulo
    
    private String marca;
    private int cantidadCanales;
    private boolean estado; // true para prendido, false para apagado
    private double pulgadas;
    private int canalActivo;

    //Sobre cargamos el " metodo Cosntructor"
    
    // Constructor predeterminado
    public Televisor() {
        marca = "Samsung";
        cantidadCanales = 120;
        estado = false;
        pulgadas = 42.0;
        canalActivo = 1;
    }

    // Constructor con parámetros para marca y pulgadas
    public Televisor(String marca, double pulgadas) {
        this.marca = marca;
        cantidadCanales = 120;
        estado = false;
        this.pulgadas = pulgadas;
        canalActivo = 1;
    }

    // Constructor que recibe la cantidad de canales y permite entrada para el resto de variables
    public Televisor(int cantidadCanales) {
        estado = false;
        this.cantidadCanales = cantidadCanales;
        
        Scanner entrada = new Scanner(System.in);
        System.out.println("----->Ingrese el resto de la variables miembro");
        
        System.out.print("Ingrese la marca del televisor:");
        String marca = entrada.nextLine();

        System.out.print("Ingrese las pulgadas del televisor:");
        double pulgadas = entrada.nextDouble();
        
        
        this.marca = marca;
        this.pulgadas= pulgadas;
        canalActivo = 1;     // decido que no es necesario ingresar
    }

    
    
    //Los geters y seters "en refactor " y luego "encapsulet filds"

    /**
     * @return the marca
     */
    public String getMarca() {
        return marca;
    }

    /**
     * @param marca the marca to set
     */
    public void setMarca(String marca) {
        this.marca = marca;
    }

    /**
     * @return the cantidadCanales
     */
    public int getCantidadCanales() {
        return cantidadCanales;
    }

    /**
     * @param cantidadCanales the cantidadCanales to set
     */
    public void setCantidadCanales(int cantidadCanales) {
        this.cantidadCanales = cantidadCanales;
    }

    /**
     * @return the estado
     */
    public boolean isEstado() {
        return estado;
    }

    /**
     * @param estado the estado to set
     */
    public void setEstado(boolean estado) {
        this.estado = estado;
    }

    /**
     * @return the pulgadas
     */
    public double getPulgadas() {
        return pulgadas;
    }

    /**
     * @param pulgadas the pulgadas to set
     */
    public void setPulgadas(double pulgadas) {
        this.pulgadas = pulgadas;
    }

    /**
     * @return the canalActivo
     */
    public int getCanalActivo() {
        return canalActivo;
    }

    /**
     * @param canalActivo the canalActivo to set
     */
    public void setCanalActivo(int canalActivo) {
        this.canalActivo = canalActivo;
    }
    
    
    
    
    
    
    
    //cambiar el estado del televisor (prendido/apagado)
    public void cambiarEstado() {
        
        if (this.estado==true) {
            System.out.println("El televisor se apaga.");
            setEstado(false);
        } else {
            System.out.println("El televisor se prende");
            setEstado(true);
        }
    }
    
    
     
    //mostrar la información del televisor
    public void mostrar() {
        //es el mejor metodo para probar las demas metodos
        
        
        System.out.println("Marca: " + marca);
        System.out.println("Pulgadas: " + pulgadas);
        System.out.println("Cantidad de Canales: " + cantidadCanales);
        System.out.println("Estado: " + estado );//si le pongo un IF, puede decir Prendido o Apagado
        System.out.println("Canal Activo: " + canalActivo);
    }
    
    
    
    
    
    //el metodo sobrecargado de "cambiarCanal"
    
    
    //cambiar el canal al valor especificado
    public void cambiarCanal(int nuevoCanal) {
        if (estado==true) {
            if (nuevoCanal > 0 && nuevoCanal < cantidadCanales) {
                canalActivo = nuevoCanal % cantidadCanales; //modifico al canal ,usamos modulo
                if (canalActivo == 0) {
                    canalActivo = cantidadCanales;//modifico al canal
                }
                System.out.println("Cambiando al canal " + canalActivo);
            } else {
                System.out.println("el valor tiene que ser positivo");
            }
        } else {
            System.out.println("El televisor esta apagado o canal ingresado supera la cantidad de canales disponibles");
        }
    }
    
    
    
    
    //cambiar el canal incrementando o decrementando
    public void cambiarCanal(boolean incrementar) {
        if (estado==true) {
            if (incrementar==true) {
                cambiarCanal(canalActivo + 1);//uso al metodo anterior
            } else {
                cambiarCanal(canalActivo - 1);
            }
        } else {
            System.out.println("El televisor esta apagado.");
        }
    }
    
}
