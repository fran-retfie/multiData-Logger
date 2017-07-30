

/*
 * CFile1.c
 * Queste sono le configurazioni per la scheda miniDatalogger
 * Created: 25/03/2017 14.26.28
 * Author: ostif
 */ 

#include <asf.h>

#define LED_R PIN_PB22
#define LED_G PIN_PB23
#define LED_B PIN_PA27


void myBoard_init() //funzione per l'inizializzazione della scheda
{
	system_init();
	
	
	
	delay_init();
	
	//configurazione uscite/entrate
	struct port_config config_port_pin;
	port_get_config_defaults(&config_port_pin);
	config_port_pin.direction = PORT_PIN_DIR_OUTPUT;
	port_pin_set_config(LED_R, &config_port_pin);
	port_pin_set_config(LED_G, &config_port_pin);
	port_pin_set_config(LED_B, &config_port_pin);
	
	
}






