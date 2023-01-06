# FiveBot
Basic use for FiveBOT Mecanum 4WD Robotic Platform


|Pin|Motor 1|Motor 2|Motor 3|Motor 4|
|---|---|---|---|---|
|Speed|5|6|9|10|
|Direction|4|7|8|11|

---
### Example for running a motor
```arduino
//motor control pins
#define M1 4 
#define E1 5 

void loop() {
  analogWrite(E1, 100);		// speed (pwm)
  digitalWrite(M1, HIGH); 	// direction (LOW/HIGH)
}
```

Motor 1 and 3 is reversed relative to motor 2 and 4
so for just move on the correct command is 

||Motor 1|Motor 2|Motor 3|Motor 4|
|---|---|---|---|---|
|Direction|HIGH|LOW|HIGH|LOW|

---
#### Help for move
![](img/mecanium_functioning.jpg)

---
### Incremental encoders

To use incremental encoders please download [Encoder library](https://github.com/PaulStoffregen/Encoder) .ZIP

And install 
_Sketch ==> Include Library ==> Add .ZIP Library_

The encoder is connected to the robot by a VCC,GND and A and B

Where A et B is the signal

##### Exemple
```arduino
#include <Encoder.h>

#define A 2 
#define B 3 

Encoder myEnc(A, B);
void setup() {
  Serial.begin(9600);
}
void loop() {
  long newPosition = myEnc.read();
  if (newPosition != oldPosition) {
    oldPosition = newPosition;
    Serial.println(newPosition);
  }
}

```

---
### Work in progress

* Use RS485 for captors