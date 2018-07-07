#include <Bounce.h>

// Create Bounce objects for each button.  The Bounce object
// automatically deals with contact chatter or "bounce", and
// it makes detecting changes very simple.
Bounce button1 = Bounce(1, 10);
Bounce button2 = Bounce(2, 10);  // 10 = 10 ms debounce time
Bounce button3 = Bounce(3, 10);  // which is appropriate for
Bounce button4 = Bounce(4, 10);  // most mechanical pushbuttons
Bounce button5 = Bounce(5, 10);
Bounce button6 = Bounce(6, 10);  //change 13-18 to your pins #s
 

void setup() {
  // put your setup code here, to run once:
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  button1.update();
  button2.update();
  button3.update();
  button4.update();
  button5.update();
  button6.update();

  if (button1.fallingEdge()) {
    Keyboard.set_modifier(0);
    Keyboard.set_key1(0);
    Keyboard.send_now();
    delay(50);
    Keyboard.print("Please direct that to operations.");
    Keyboard.set_key1(0);
    Keyboard.send_now();
  }

  if (button2.fallingEdge()) {
    Keyboard.set_modifier(0);
    Keyboard.set_key2(0);
    Keyboard.send_now();
    delay(50);
    Keyboard.println("git pull");
    delay(100);
    Keyboard.set_key2(0);
    Keyboard.send_now();
  }

  if (button3.fallingEdge()) {
    Keyboard.set_modifier(0);
    Keyboard.set_key3(0);
    Keyboard.send_now();
    delay(50);
    Keyboard.print("sudo -i -u ");
    delay(100);
    Keyboard.set_key3(0);
    Keyboard.send_now();
  }

  if (button4.fallingEdge()) {
    Keyboard.set_modifier(0);
    Keyboard.set_key4(KEY_ESC);
    Keyboard.send_now();
    delay(50);
    Keyboard.println(":set paste");
    Keyboard.set_key4(0);
    Keyboard.send_now();
  }

  if (button5.fallingEdge()) {
    Keyboard.set_modifier(MODIFIERKEY_CTRL);
    Keyboard.send_now();
    Keyboard.set_modifier(MODIFIERKEY_CTRL | MODIFIERKEY_ALT);
    Keyboard.send_now();
    Keyboard.set_key5(KEY_DELETE);
    Keyboard.send_now();
    delay(50);
    Keyboard.set_modifier(0);
    Keyboard.set_key5(0);
    Keyboard.send_now();
  }

  if (button6.fallingEdge()) {
    Keyboard.set_modifier(MODIFIERKEY_GUI);
    Keyboard.set_key6(KEY_L);
    Keyboard.send_now();
    delay(50);
    Keyboard.set_modifier(0);
    Keyboard.set_key6(0);
    Keyboard.send_now();
  }


}
