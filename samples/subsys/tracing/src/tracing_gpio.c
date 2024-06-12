#include "tracing_gpio.h"
#include <zephyr/drivers/gpio.h>
#include <zephyr/tracing/tracing.h>

void sys_trace_gpio_pin_active(const struct device* port, gpio_pin_t pin)
{
	printk("Active!\n");
}

void sys_trace_gpio_pin_inactive(const struct device* port, gpio_pin_t pin)
{
	printk("Inactive!\n");
}

void sys_trace_gpio_pin_configured_output(const struct device* port, gpio_pin_t pin)
{
	printk("Set output!\n");
}

void sys_trace_gpio_pin_configured_input(const struct device* port, gpio_pin_t pin)
{
	printk("Set input!\n");
}

void sys_trace_gpio_pin_event_attached(const struct device* port, struct gpio_callback* callback)
{
	printk("Event attached!\n");
}

void sys_trace_gpio_pin_event_removed(const struct device* port, struct gpio_callback* callback)
{
	printk("Event removed!\n");
}

void sys_trace_gpio_pin_event_executed(const struct device* port, struct gpio_callback* callback)
{
	printk("Event executed!\n");
}