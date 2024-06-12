#ifndef _TRACE_GPIO_H
#define _TRACE_GPIO_H

#include <zephyr/drivers/gpio.h>
#include <zephyr/types.h>
#include <zephyr/device.h>
#include <zephyr/kernel.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef uint8_t gpio_pin_t;
void sys_trace_gpio_pin_active(const struct device* port, gpio_pin_t pin);
void sys_trace_gpio_pin_inactive(const struct device* port, gpio_pin_t pin);
void sys_trace_gpio_pin_configured_output(const struct device* port, gpio_pin_t pin);
void sys_trace_gpio_pin_configured_input(const struct device* port, gpio_pin_t pin);
void sys_trace_gpio_pin_event_attached(const struct device* port, struct gpio_callback* callback);
void sys_trace_gpio_pin_event_removed(const struct device* port, struct gpio_callback* callback);
void sys_trace_gpio_pin_event_executed(const struct device* port, struct gpio_callback* callback);

#define sys_port_trace_gpio_pin_active(port, pin) sys_trace_gpio_pin_active(port, pin)
#define sys_port_trace_gpio_pin_inactive(port, pin) sys_trace_gpio_pin_inactive(port, pin)
#define sys_port_trace_gpio_pin_configured_output(port, pin) sys_trace_gpio_pin_configured_output(port, pin)
#define sys_port_trace_gpio_pin_configured_input(port, pin) sys_trace_gpio_pin_configured_input(port, pin)
#define sys_port_trace_gpio_pin_event_attached(port, callback) sys_trace_gpio_pin_event_attached(port, callback)
#define sys_port_trace_gpio_pin_event_removed(port, callback) sys_trace_gpio_pin_event_removed(port, callback)
#define sys_port_trace_gpio_pin_event_executed(port, callback) sys_trace_gpio_pin_event_executed(port, callback)

#ifdef __cplusplus
}
#endif

#endif /* _TRACE_USER_H */