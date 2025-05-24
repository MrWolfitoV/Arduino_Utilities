const int boton1 = 2;
const int boton2 = 3;
const int boton3 = 4;


bool estadoAnterior1 = LOW;
bool estadoAnterior2 = LOW;
bool estadoAnterior3 = LOW;


void setup() {
  Serial.begin(9600);
  pinMode(boton1, INPUT_PULLUP);
  pinMode(boton2, INPUT_PULLUP);
  pinMode(boton3, INPUT_PULLUP);
  
}

void loop() {
  bool estadoActual1 = digitalRead(boton1);
  bool estadoActual2 = digitalRead(boton2);
  bool estadoActual3 = digitalRead(boton3);
  

  // Detectar pulsación del botón 1
  if (estadoAnterior1 == HIGH && estadoActual1 == LOW) {
    Serial.println("boton1_presionado");
  }

  // Detectar pulsación del botón 2
  if (estadoAnterior2 == HIGH && estadoActual2 == LOW) {
    Serial.println("boton2_presionado");
  }


  if (estadoAnterior3 == HIGH && estadoActual3 == LOW) {
    Serial.println("boton3_presionado");
  }

  // Actualizar estado anterior
  estadoAnterior1 = estadoActual1;
  estadoAnterior2 = estadoActual2;
  estadoAnterior3 = estadoActual3;
}
