#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>
#include <zephyr/logging/log.h>
#include <zephyr/drivers/gpio.h>


void test_handler(const struct device *port, struct gpio_callback *cb, uint32_t pins)
{
	printk("Interrupt detected!\n");
}


int main(void) {

    const struct device *dev = DEVICE_DT_GET(DT_NODELABEL(gpio0));

    // Configure pin 0 as output and toggle
	gpio_pin_configure(dev, 0, GPIO_OUTPUT);
    gpio_pin_set(dev, 0, 1);
    gpio_pin_set(dev, 0, 0);

    // Configure pin 1 as input
    gpio_pin_configure(dev, 1, GPIO_INPUT);

    // Setup pin 1 for interrupt
    gpio_pin_interrupt_configure(dev, 1, GPIO_INT_LEVEL_HIGH);
    static struct gpio_callback gpio_cb;
	gpio_init_callback(&gpio_cb, test_handler, 1);
	gpio_add_callback(dev, &gpio_cb);

    // Trigger interrupt
	gpio_pin_set(dev, 0, 1);

    // Remove interrupt
	gpio_remove_callback(dev, &gpio_cb);
}
