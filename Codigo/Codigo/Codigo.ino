// Pines del STM32
const int PinVelocidadVentilador = PA0;
const int PinBomba = PA1;
const int PinLed = PA2;   // Controla el relé de la luz y el ventilador


// Tiempos en milisegundos
const unsigned long bombaEncendida = 5UL * 60UL * 1000UL;        // 5 min
const unsigned long bombaApagada   = 55UL * 60UL * 1000UL;       // 55 min
const unsigned long ledEncendido   = 18UL * 60UL * 60UL * 1000UL; // 18 h
const unsigned long ledApagado     = 6UL * 60UL * 60UL * 1000UL;  // 6 h


bool bombaOn = true;
bool ledOn = true;
unsigned long ultimoCambioBomba = 0;
unsigned long ultimoCambioLed = 0;


void setup() {
  pinMode(PinVelocidadVentilador, OUTPUT);
  pinMode(PinBomba, OUTPUT);
  pinMode(PinLed, OUTPUT);


  digitalWrite(PinVelocidadVentilador, HIGH); // Ventilador a velocidad fija
  digitalWrite(PinBomba, HIGH);               // Arranca con bomba y luz encendidas
  digitalWrite(PinLed, HIGH);
}


void loop() {
  unsigned long ahora = millis();


  // 1. Bomba: 5 min encendida, 55 min apagada
  if (bombaOn && ahora - ultimoCambioBomba >= bombaEncendida) {
    bombaOn = false;
    ultimoCambioBomba = ahora;
    digitalWrite(PinBomba, LOW);
  } else if (!bombaOn && ahora - ultimoCambioBomba >= bombaApagada) {
    bombaOn = true;
    ultimoCambioBomba = ahora;
    digitalWrite(PinBomba, HIGH);
  }
  // 2. Luz y ventilador: 18 h encendidos, 6 h apagados
  if (ledOn && ahora - ultimoCambioLed >= ledEncendido) {
    ledOn = false;
    ultimoCambioLed = ahora;
    digitalWrite(PinLed, LOW);
  } else if (!ledOn && ahora - ultimoCambioLed >= ledApagado) {
    ledOn = true;
    ultimoCambioLed = ahora;
    digitalWrite(PinLed, HIGH);
  }
}
