/* System_X.ino
 *  
 *  Greg MCIntyre
 *  
 *  using three sensors overlapping arc to improve detection and reduce false positives
 * 
 */

void setup() {
  //configure for three HCSR505 IR sensors
  pinMode(3, INPUT);
  pinMode(5, INPUT); //centre sensor
  pinMode(6, INPUT);
  
}

void loop() {
  // 

  if ((digitalRead(3) == HIGH && digitalRead(5) == HIGH) || (digitalRead(5) == HIGH && digitalRead(6) == HIGH))
  {
    digitalWrite(LED_BUILTIN, HIGH); //on for alert
  }
  else
  {
    digitalWrite(LED_BUILTIN, LOW); //off for alert
  }
      

}
