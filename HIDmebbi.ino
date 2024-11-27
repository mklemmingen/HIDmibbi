#include <HID-Project.h>

void setup() {
  Keyboard.begin();
}

void loop() {

  for(int i=0; i<4; i++){
    // HID functionality

    // Open the main menu (Start menu)
    Keyboard.press(KEY_LEFT_GUI);
    delay(100);
    Keyboard.release(KEY_LEFT_GUI);
    delay(100);

    // Type in command
    Keyboard.print("Command");
    delay(500);

    // Move right
    Keyboard.press(KEY_RIGHT_ARROW);
    
    delay(100);
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(100);

    // Move down
    Keyboard.press(KEY_DOWN_ARROW);
    delay(100);
    Keyboard.release(KEY_DOWN_ARROW);
    delay(100);

    // Press enter
    Keyboard.press(KEY_ENTER);
    delay(100);
    Keyboard.release(KEY_ENTER);
    delay(500);

    // Move left
    Keyboard.press(KEY_LEFT_ARROW);
    delay(100);
    Keyboard.release(KEY_LEFT_ARROW);
    delay(500);

    // Press enter
    Keyboard.press(KEY_ENTER);
    delay(100);
    Keyboard.release(KEY_ENTER);
    delay(500);

    if(i==0){
      Keyboard.print("whoami /groups");
      delay(100);
    } else {
      // Type in command
      Keyboard.print("curl parrot.live");
      delay(100);
    }

    // Press the ENTER key
    Keyboard.press(KEY_ENTER);
    delay(100);
    Keyboard.release(KEY_ENTER);

    // hold down the windows key
    Keyboard.press(KEY_LEFT_GUI);
    delay(100);

    if(i == 0){
      // push key right
      Keyboard.press(KEY_RIGHT_ARROW);
      delay(100);
      Keyboard.release(KEY_RIGHT_ARROW);
      delay(100);
      // push key up
      Keyboard.press(KEY_UP_ARROW);
      delay(100);
      Keyboard.release(KEY_UP_ARROW);
      delay(100);
    } else if (i == 1){
      // push key right
      Keyboard.press(KEY_RIGHT_ARROW);
      delay(100);
      Keyboard.release(KEY_RIGHT_ARROW);
      delay(100);
      // push key up
      Keyboard.press(KEY_DOWN_ARROW);
      delay(100);
      Keyboard.release(KEY_DOWN_ARROW);
      delay(100);
    } else if (i == 2){
      // push key right
      Keyboard.press(KEY_LEFT_ARROW);
      delay(100);
      Keyboard.release(KEY_LEFT_ARROW);
      delay(100);
      // push key up
      Keyboard.press(KEY_DOWN_ARROW);
      delay(100);
      Keyboard.release(KEY_DOWN_ARROW);
      delay(100);
    } else if (i==3){
      // push key right
      Keyboard.press(KEY_LEFT_ARROW);
      delay(100);
      Keyboard.release(KEY_LEFT_ARROW);
      delay(100);
      // push key up
      Keyboard.press(KEY_UP_ARROW);
      delay(100);
      Keyboard.release(KEY_UP_ARROW);
      delay(100);
    }
    // release windows key
    Keyboard.release(KEY_LEFT_GUI);
  }
}