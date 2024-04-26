
//enviar 1:50 al temas 
// un simulador de credito nosotros ingresamos el monto, la tasa del interes,timpo 
//monto 10.000
//tasa de intereses 15% anual
//tiempo 5
//
#include <stdio.h>

// Función para calcular la tabla de amortización para 5 años con interés fijo del 15%
void calcularTablaAmortizacion(float monto) {
    float interes_anual, interes_mensual, cuota_anual, monto_restante;
    float tasa_interes_anual = 15.0; // Tasa de interés anual fija del 15%

    // Calcular el interés anual
    interes_anual = monto * (tasa_interes_anual / 100);

    // Calcular la cuota anual
    cuota_anual = (monto + interes_anual) / 5;

    // Inicializar el monto restante
    monto_restante = monto;

    // Imprimir la tabla de amortización
    printf("\nTabla de amortización:\n");
    printf("| Año |  Interés  | Cuota Anual | Monto Restante |\n");
    printf("-------------------------------------------------\n");

    for (int i = 1; i <= 5; i++) {
        // Calcular el interés mensual
        interes_mensual = monto_restante * (tasa_interes_anual / 100) / 12;
        monto_restante += interes_anual - cuota_anual; // Actualizar el monto restante
        printf("|  %d  |  %.2f  |   %.2f   |     %.2f      |\n", i, interes_anual, cuota_anual * 12, monto_restante);
    }
}

int main() {
    float monto;

    // Solicitar al usuario que ingrese el monto del préstamo
    printf("Ingrese el monto del préstamo: ");
    scanf("%f", &monto);

    // Llamar a la función para calcular la tabla de amortización para 5 años con interés fijo del 15%
    calcularTablaAmortizacion(monto);

    return 0;
}
