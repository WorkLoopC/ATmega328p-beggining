#include <avr/io.h>
#include <util/delay.h>

int main(void){
DDRB=(1<<PB0);
while(1){
PORTB=(1<<PB0);
_delay_ms(500);
PORTB=0;
_delay_ms(500);

}
}