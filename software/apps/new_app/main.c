#include <stdbool.h>
#include <stdint.h>
#include "nrf.h"
#include "nrf_delay.h"
#include "nrf_gpio.h"

// Pin configurations
#include "nrf52840dk.h"

int main(void) {

  // Initialize.
  nrf_gpio_cfg_output(LED1);
  nrf_gpio_cfg_output(LED2);
  nrf_gpio_cfg_output(LED3);
  nrf_gpio_cfg_output(LED4);

  // Enter main loop.
  while (1) {
    nrf_gpio_pin_toggle(LED1);
    nrf_delay_ms(500);
    nrf_gpio_pin_toggle(LED4);
    nrf_delay_ms(500);
    nrf_gpio_pin_toggle(LED2);
    nrf_delay_ms(1000);
    nrf_gpio_pin_toggle(LED3);
    nrf_delay_ms(1000);

  }
}

