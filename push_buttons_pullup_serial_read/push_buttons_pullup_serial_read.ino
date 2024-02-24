/* Pushbutton with Pullup, Teensyduino Tutorial #3
   http://www.pjrc.com/teensy/tutorial3.html

   This example code is in the public domain.
*/

void setup() {                
  Serial.begin(38400);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
}

void loop()                     
{
  if (digitalRead(2) == HIGH) {
    Serial.println("Button 2 is not pressed...");
  } else {
    Serial.println("Button 2 pressed!!!");
  }

  if (digitalRead(3) == HIGH) {
    Serial.println("Button 3 is not pressed...");
  } else {
    Serial.println("Button 3 pressed!!!");
  }

  if (digitalRead(4) == HIGH) {
    Serial.println("Button 4 is not pressed...");
  } else {
    Serial.println("Button 4 pressed!!!");
  }

  if (digitalRead(5) == HIGH) {
    Serial.println("Button 5 is not pressed...");
  } else {
    Serial.println("Button 5 pressed!!!");
  }

  if (digitalRead(6) == HIGH) {
    Serial.println("Button 6 is not pressed...");
  } else {
    Serial.println("Button  6 pressed!!!");
  }

  delay(250);
}

