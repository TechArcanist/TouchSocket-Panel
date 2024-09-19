#define TOUCH_SENSOR_PIN_1 15
#define TOUCH_SENSOR_PIN_2 5
#define RELAY_PIN_1 4
#define RELAY_PIN_2 16 

bool relayState1 = false;
bool relayState2 = false;

void setup() {
  pinMode(TOUCH_SENSOR_PIN_1, INPUT);
  pinMode(TOUCH_SENSOR_PIN_2, INPUT);
  pinMode(RELAY_PIN_1, OUTPUT);     
  pinMode(RELAY_PIN_2, OUTPUT); 
}

void loop() {
  
  int touchState1 = digitalRead(TOUCH_SENSOR_PIN_1);
  int touchState2 = digitalRead(TOUCH_SENSOR_PIN_2);


  if (touchState1 == HIGH) {

    relayState1 = !relayState1;
    
    digitalWrite(RELAY_PIN_1, relayState1 ? HIGH : LOW);
  
    delay(200);
  }

  
  if (touchState2 == HIGH) {

    relayState2 = !relayState2;
    
    digitalWrite(RELAY_PIN_2, relayState2 ? HIGH : LOW);
  
    delay(200);
  }
}
