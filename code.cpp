const int pinoVermelho = 8;
const int pinoAmarelo = 9;
const int pinoVerde = 10;

const int tempoVermelho = 6000;    // 6 segundos
const int tempoAmarelo = 2000;     // 2 segundos
const int tempoVerde = 2000;       // 2 segundos
const int tempoVerdeExtra = 2000;  // 2 segundos adicionais
const int tempoAmareloFinal = 2000; // 2 segundos final

void setup() {
  pinMode(pinoVermelho, OUTPUT);
  pinMode(pinoAmarelo, OUTPUT);
  pinMode(pinoVerde, OUTPUT);
}

void desligaTodosLeds() {
  digitalWrite(pinoVermelho, LOW);
  digitalWrite(pinoAmarelo, LOW);
  digitalWrite(pinoVerde, LOW);
}

void loop() {
  // 1. Vermelho - 6 segundos
  desligaTodosLeds();
  digitalWrite(pinoVermelho, HIGH);
  delay(tempoVermelho);
  
  // 2. Amarelo - 2 segundos
  desligaTodosLeds();
  digitalWrite(pinoAmarelo, HIGH);
  delay(tempoAmarelo);
  
  // 3. Verde - 2 segundos
  desligaTodosLeds();
  digitalWrite(pinoVerde, HIGH);
  delay(tempoVerde);
  
  // 4. Verde Extra (tempo adicional para pedestres) - 2 segundos
  // Mantém o verde ligado
  delay(tempoVerdeExtra);
  
  // 5. Amarelo Final - 2 segundos
  desligaTodosLeds();
  digitalWrite(pinoAmarelo, HIGH);
  delay(tempoAmareloFinal);
}