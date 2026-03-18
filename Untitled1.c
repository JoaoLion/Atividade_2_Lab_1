#include <stdio.h>

float calcular_fahrenheit(float celsius);

void verificar_alarme(float temp_c, int *alarme);

int main() {

    float temp_c = 38.5;
    float temp_f;
    int alarme = 0;

    temp_f = calcular_fahrenheit(temp_c);

    verificar_alarme(temp_c, &alarme);

    printf("F: %.2f | Alarme: %d\n", temp_f, alarme);

    return 0;
}

float calcular_fahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}


void verificar_alarme(float temp_c, int *alarme) {
    if (temp_c > 35.0) {
        *alarme = 1;
    } else {
        *alarme = 0;
    }
}
