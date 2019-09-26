#include "Button.h"



// Creating an instance of Button
Button okButton;



void setup()
{

  // Initializing okButton to Arduino's pin 5 and setting reference time to 300 ms  
  okButton.begin(5, 300);

}



void loop()
{

  // Reading okButtonState for further decisions
  ButtonState okButtonState = okButton.getState();
   
}
