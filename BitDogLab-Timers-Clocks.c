#include <stdio.h>
#include "pico/stdlib.h"

const int gpio_pin = 13; // LED vermelho

int main() {
    stdio_init_all(); // Inicializa comunicação serial (opcional)
    
    gpio_init(gpio_pin);
    gpio_set_dir(gpio_pin, GPIO_OUT);

    while (true) {
        gpio_put(gpio_pin, 1); // Liga o LED
        sleep_ms(500);
        gpio_put(gpio_pin, 0); // Desliga o LED
        sleep_ms(500);
        
        printf("LED alternado!\n"); // Mensagem para depuração (opcional)
    }

    return 0;
}
