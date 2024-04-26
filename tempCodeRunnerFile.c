#include <stdio.h>

int main ()

{
    int mesestot, ahorromensual, tasamensual, impuestorenta, montoañadido, ahorrototal, meses, intereses;
    printf("Ingrese el monto mensual que ahorra: ");
    scanf("%lf", &ahorromensual);
    
    printf("Ingrese el total de meses que ahorrará: ");
    scanf("%d", &mesestot);

    tasamensual = 0.00583;  // Tasa mensual de ahorro del 0.583%
    impuestorenta = 0.08;  // Tasa de impuesto sobre la renta del 8%

    ahorrototal = 0;
    
    for ( meses = 1; meses <= mesestot; meses++) {
        ahorrototal = ahorrototal + ahorromensual + (ahorromensual*tasamensual) - (ahorromensual*impuestorenta);
        printf("Mes %d: Ahorros totales = $%.2f\n", meses, ahorrototal);
    }
    return 0;
}
