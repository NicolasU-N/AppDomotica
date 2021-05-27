#define d1 2
#define d2 3
#define d3 4

int state = 0;

void setup() {
  Serial.begin(115200);
  // put your setup code here, to run once:
  pinMode(d1, OUTPUT);
  pinMode(d2, OUTPUT);
  pinMode(d3, OUTPUT);
  digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    state = Serial.read();
  }

  if (state == '1') { //OFF all
    digitalWrite(d1, LOW);
  }

  if (state == '2') { //OFF all
    digitalWrite(d1, HIGH);
  }

  if (state == '3') { //OFF all
    digitalWrite(d2, LOW);
  }

  if (state == '4') { //OFF all
    digitalWrite(d2, HIGH);
  }

  if (state == '5') { //OFF all
    digitalWrite(d3, LOW);
  }

  if (state == '6') { //OFF all
    digitalWrite(d3, HIGH);
  }
}
