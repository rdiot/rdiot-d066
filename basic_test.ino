/* 8-Digit 7 Segment Module (MAX7219) [D066] : http://rdiot.tistory.com/301 [RDIoT Demo] */

/* Include the HCMAX7219 and SPI library */
#include <HCMAX7219.h>
#include "SPI.h"

/* Set the LOAD (CS) digital pin number*/
#define LOAD 10
 
/* Create an instance of the library */
HCMAX7219 HCMAX7219(LOAD);


void setup() 
{        
}

/* Main program */
void loop() 
{
  /* Clear the output buffer */
  HCMAX7219.Clear();
  /* Write some text to the output buffer */
  HCMAX7219.print7Seg("HELLO !!",8);
  /* Send the output buffer to the display */
  HCMAX7219.Refresh();  
  delay(2000);

  /* Clear the output buffer */
  HCMAX7219.Clear();
  /* Write some text to the output buffer */
  HCMAX7219.print7Seg("D066",8);
  /* Send the output buffer to the display */
  HCMAX7219.Refresh();  
  delay(2000);

  /* Clear the output buffer */
  HCMAX7219.Clear();
  /* Write some text to the output buffer */
  HCMAX7219.print7Seg("8-Digit",8);
  /* Send the output buffer to the display */
  HCMAX7219.Refresh();  
  delay(2000);

  /* Clear the output buffer */
  HCMAX7219.Clear();
  /* Write some text to the output buffer */
  HCMAX7219.print7Seg("MAX7219",8);
  /* Send the output buffer to the display */
  HCMAX7219.Refresh();  
  delay(2000);

  
  HCMAX7219.Clear();
  for (int Position = 1; Position <= 7; Position++)
  { 
    HCMAX7219.print7Seg(-1234567,Position,8);
    HCMAX7219.Refresh();
    delay(1000);
  }

    /* Clear the output buffer */
  HCMAX7219.Clear();
  /* Write some text to the output buffer */
  HCMAX7219.print7Seg("BYE",8);
  /* Send the output buffer to the display */
  HCMAX7219.Refresh();  
  delay(2000);
  
  while(1);
}
