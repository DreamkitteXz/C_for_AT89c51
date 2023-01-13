/*
	PT-BR
	Código desenvolvido para o MCU AT89c51 por https://github.com/DreamkitteXz
	Este código tem a função de ler o sinal de entrada de um pino e atribui-lo à saída de outro pino no MCU AT89c51.
	
	EN
	Code developed for the AT89c51 MCU by https://github.com/DreamkitteXz
	This code has the function of reading the input signal of a pin and "print" it to the output of another pin in the MCU AT89c51    
*/

#include<reg52.h>

sbit I0=P0^0;  // Variáveis de Entrada | Input Variables
sbit I1=P0^1; 
sbit I2=P0^2;    
sbit I3=P0^3;  
sbit I4=P0^4;    
sbit I5=P0^5;    
sbit I6=P0^6;    
sbit I7=P0^7;    
sbit I8=P2^0;    
sbit I9=P2^1;    
sbit I10=P2^2;    
sbit I11=P2^3;    
sbit I12=P2^4;    
sbit I13=P2^5;            

sbit Out0=P1^0;  // Variáveis de Saída | Output Variables
sbit Out1=P1^1; 
sbit Out2=P1^2;    
sbit Out3=P1^3;  
sbit Out4=P1^4;    
sbit Out5=P1^5;    
sbit Out6=P1^6;    
sbit Out7=P1^7;    
sbit Out8=P3^0;    
sbit Out9=P3^1;    
sbit Out10=P3^2;    
sbit Out11=P3^3;    
sbit Out12=P3^4;    
sbit Out13=P3^5;           

    void main()
    {
    P0=0xff;  // Pinos P0 declarados como entrada | Pins P0 declared as input
    P2=0xff;  // Pinos P2 declarados como entrada | Pins P2 declared as input
    P1=0x00;  // Pinos P1 declarados como saída   | Pins P1 declared as output
    P3=0x00;  // Pinos P3 declarados como saída   | Pins P3 declared as output

    while(1){     //Control will remain in while loop for ever
     I0=Out0;
     I1=Out1;
     I2=Out2;
     I3=Out3;
     I4=Out4;
     I5=Out5;
     I6 = Out6;
     I7=Out7;
     I8=Out8;
     I9=Out9;
     I10=Out10;
     I11=Out11;
     I12=Out12;
     I13=Out13;    
}

}