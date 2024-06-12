#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>
#include <zephyr/logging/log.h>
#include <zephyr/drivers/gpio.h>

int main(void) {

    const struct device *dev = DEVICE_DT_GET(DT_NODELABEL(gpio0));

    // Configure pin 0 as output and toggle
	gpio_pin_configure(dev, 0, GPIO_OUTPUT);
    gpio_pin_set(dev, 0, 1);
    gpio_pin_set(dev, 0, 0);

    // Configure pin 1 as input and toggle
    gpio_pin_configure(dev, 1, GPIO_INPUT);
    gpio_pin_set(dev, 1, 1);
    gpio_pin_set(dev, 1, 0);

}