#include <stdio.h>

int main ()

{
    float ahorromensual, tasamensual, montoañadido, ahorrototal, ahorromensualnormal;
    float interestotal, interesmensual, interesrenta, tasainteres, impuestosrenta, valortasamensual;
    int mes, mesestot;
    printf("Ingrese el monto mensual que ahorra: ");
    scanf("%f", &ahorromensual);
    
    printf("Ingrese el total de meses que ahorrará: ");
    scanf("%d", &mesestot);

    printf("La tasa de interes en porcentaje:  ");
    scanf("%f", &tasainteres);

    valortasamensual = (tasainteres/100)/12; 
    ahorrototal = 0;
    
    for ( mes = 1; mes <= mesestot; mes++) {
        ahorromensualnormal = ahorromensualnormal+ahorromensual;
        interesmensual = interesmensual + ahorromensualnormal*valortasamensual;
        ahorrototal = ahorrototal + ahorromensual + interesmensual;
        printf("Mes %d: Ahorro mensual = $%.2f\t Interes mensual = $%.2f\t Ahorro total = $%.2f\n", mes, ahorromensualnormal, interesmensual, ahorrototal);
    }
    return 0;
}
