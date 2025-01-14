

#ifndef LCDD_H_
#define LCDD_H_



#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"
#include "driverlib/pin_map.h"

#define LCDPORT     GPIO_PORTB_BASE
#define RS          GPIO_PIN_0
#define RW          GND
#define E           GPIO_PIN_1

#define D4          GPIO_PIN_4
#define D5          GPIO_PIN_5
#define D6          GPIO_PIN_6
#define D7          GPIO_PIN_7

void baslangic(void);
void komut_yaz(unsigned char);
void LCD_sil(void);
void veri_yaz(char*);
void satir_sutun(unsigned char, unsigned char);
void veri(char);
void portfkesmesifonksiyonu();







#endif /* LCDD_H_ */
