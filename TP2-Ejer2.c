/*
2)Si una persona deposita una cierta cantidad de dinero en un banco durante 5 años o más, este le paga intereses a una
tasa del 25% anual; mientras que, si lo hace por menos tiempo, la tasa de interés que le pagará será del 16% anual.
Para una persona que desea depositar una cantidad de dinero durante una cantidad de años, mostrar la siguiente información:
Monto Depositado: xxxx.xx 
Cantidad de Años: xx 
Tasa de Interes: xx
Monto de Intereses: xxxx.xx 
Monto Total con Intereses: xxxx.xx
-----------------------------------------------------
analisis : 
    los Inputs son (monto depositado y cantidad de anios)
    los Outouts son (tasa de interes , monto de interes y monto total con interes)
*/

#include <stdio.h>
//Me faltan 2 librerias creo? 

//en el main me faltan los argumentos 
int main() {
    float montoDepositado, montoIntereses, montoTotal;
    int cantidadAnios;
    float tasaInteres;

    printf("Ingrese el monto depositado: ");
    scanf("%f", &montoDepositado);

    printf("Ingrese la cantidad de años: ");
    scanf("%d", &cantidadAnios);

    if (cantidadAnios >= 5) {
        tasaInteres = 0.25;  // 25% de tasa de interés anual
    } else {
        tasaInteres = 0.16;  // 16% de tasa de interés anual
    }

    montoIntereses = montoDepositado * tasaInteres * cantidadAnios;
    montoTotal = montoDepositado + montoIntereses;

    printf("Monto Depositado: %.2f\n", montoDepositado);
    printf("Cantidad de Años: %d\n", cantidadAnios);
    printf("Tasa de Interes: %.2f\n", tasaInteres);
    printf("Monto de Intereses: %.2f\n", montoIntereses);
    printf("Monto Total con Intereses: %.2f\n", montoTotal);

    return 0;
}
