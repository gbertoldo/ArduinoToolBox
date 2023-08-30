#include "Button.h"

// Creating an instance of Button
Button okButton;

void setup()
{

  // Initializing okButton to Arduino's pin 2 and setting reference time to 3000 ms  
  okButton.begin(2, 3000);

  pinMode(LED_BUILTIN, OUTPUT);

}



void loop()
{

  // Reading okButtonState for further decisions
  ButtonState okButtonState = okButton.getState();

  // If the button is not released, turns the led ON
  if ( okButtonState != ButtonState::released )
  {
    digitalWrite(LED_BUILTIN,HIGH);
  } 
  else
  {
    digitalWrite(LED_BUILTIN,LOW);
  }  
}
