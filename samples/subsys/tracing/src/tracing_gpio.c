#include "tracing_gpio.h"
#include <zephyr/drivers/gpio.h>
#include <zephyr/tracing/tracing.h>

void sys_trace_gpio_pin_active(const struct device* port, gpio_pin_t pin)
{
	printk("port: %s, pin: %d status: active\n", port->name, pin);
}

void sys_trace_gpio_pin_inactive(const struct device* port, gpio_pin_t pin)
{
	printk("port: %s, pin: %d status: inactive\n", port->name, pin);
}

void sys_trace_gpio_pin_configured_output(const struct device* port, gpio_pin_t pin)
{
	printk("port: %s, pin: %d status: configured output\n", port->name, pin);
}

void sys_trace_gpio_pin_configured_input(const struct device* port, gpio_pin_t pin)
{
	printk("port: %s, pin: %d status: configured input\n", port->name, pin);
}

void sys_trace_gpio_pin_event_attached(const struct device* port, struct gpio_callback* callback)
{
	printk("port: %s status: event attached\n", port->name);
}

void sys_trace_gpio_pin_event_removed(const struct device* port, struct gpio_callback* callback)
{
	printk("port: %s status: event removed\n", port->name);
}

void sys_trace_gpio_pin_event_executed(const struct device* port, struct gpio_callback* callback)
{
	printk("port: %s status: event executed\n", port->name);
}