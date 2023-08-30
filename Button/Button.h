#ifndef BUTTON_H
#define BUTTON_H

/*
  Button states
              released: at time button state was read, it was released 
               pressed: at time button state was read, it was pressed by a time less than refTime (user defined reference time)
    pressedAndReleased: at time button state was read, it was released after had been pressed by a time less than refTime (user defined reference time)
           longPressed: at time button state was read, it was pressed by a time greater or equal to refTime (user defined reference time)
*/ 

enum class ButtonState {released, pressed, pressedAndReleased, longPressed};



/*

   Controls the button state

*/

class Button
{

    public:
        // Initializes
        bool begin(unsigned short pin, unsigned long int refTime = 3000);

        // Returns the button state
        ButtonState getState();

    private:

        // Defines on and off
        uint8_t  ON  {LOW}; // pressed
        uint8_t OFF {HIGH}; // released

        // Arduino pin associated to the button
        unsigned short pin;

        // Reference time to long pressed button state (milliseconds)
        unsigned long int refTime {3000};

        // Previous button state (pressed=ON or released=OFF)
        unsigned short pstate{OFF};
        
        // Current button state (pressed=ON or released=OFF)
        unsigned short cstate{OFF};

        // Stores the time when button was first pressed after a release
        unsigned long int T0;
          
};

#endif // BUTTON_H
