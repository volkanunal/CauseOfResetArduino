#include "causeofreset.h"

#define CAOUSE_OF_EXTERNAL_RESET_LED 12
#define DEBUG_LED 13

void setup() {  
  
    pinMode(DEBUG_LED,OUTPUT);
    pinMode(CAOUSE_OF_EXTERNAL_RESET_LED,OUTPUT);

    digitalWrite(DEBUG_LED,0);
    digitalWrite(CAOUSE_OF_EXTERNAL_RESET_LED,0);

    if (CauseOfReset() ==  EXTERNAL_RESET_PIN_RESET )
    {
      digitalWrite(CAOUSE_OF_EXTERNAL_RESET_LED,1);
    }
    else
    {
      digitalWrite(DEBUG_LED,1);
    }

    MCUSR = 0;
    
}

void loop() {

  //nothing
}
