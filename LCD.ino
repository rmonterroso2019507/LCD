/*
 Fundacion Kinal
 Centro Educativo Tecnico Laboral KINAL
 Electronica
 Grado:5to A
 Nombre:Roberto Monterroso
 Carne :2019507
 */
#include <LiquidCrystal.h>

#define RS 6
#define E 7 
#define D4 5
#define D5 4
#define D6 3
#define D7 2

LiquidCrystal LCD_Roberto(RS, E, D4, D5, D6, D7); 

void setup() {
 
  LCD_Roberto.begin(16,2); //Objeto de una LCD de 16 columnas x 2 filas
   LCD_Roberto.setCursor(0,0); 
  LCD_Roberto.print("Roberto");
   LCD_Roberto.setCursor(0,1); 
  LCD_Roberto.print("2019507");
}
void loop()
{
 
  
}
