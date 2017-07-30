


#include <myBoard.h>
#include <asf.h>

int main (void)
{

	myBoard_init();
	port_pin_set_output_level(LED_R, 0);
	port_pin_set_output_level(LED_G, 0);
	port_pin_set_output_level(LED_B, 0);

	while(1)
	{
		cpu_delay_ms(150);
		port_pin_set_output_level(LED_R, 0);
		cpu_delay_ms(850);
		port_pin_set_output_level(LED_R, 1);
	}
}

