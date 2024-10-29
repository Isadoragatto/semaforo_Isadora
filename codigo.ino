// Definição dos pinos dos LEDs
#define LED_VERDE 11
#define LED_AMARELO 9
#define LED_VERMELHO 3

// Função para configurar os pinos dos LEDs
void configurarPinos() {
    pinMode(LED_VERDE, OUTPUT);
    pinMode(LED_AMARELO, OUTPUT);
    pinMode(LED_VERMELHO, OUTPUT);
}

void setup() {
    configurarPinos(); // Configura os pinos dos LEDs
}

// Função para acender o LED vermelho por 6 segundos
void faseVermelho() {
    digitalWrite(LED_VERMELHO, HIGH);
    digitalWrite(LED_AMARELO, LOW);
    digitalWrite(LED_VERDE, LOW);
    delay(6000);
}

// Função para acender o LED amarelo por 2 segundos
void faseAmarelo() {
    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(LED_AMARELO, HIGH);
    digitalWrite(LED_VERDE, LOW);
    delay(2000);
}

// Função para acender o LED verde por 4 segundos
void faseVerde() {
    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(LED_AMARELO, LOW);
    digitalWrite(LED_VERDE, HIGH);
    delay(4000);
}

void loop() {
    faseVermelho(); // Fase 1: Vermelho aceso por 6 segundos
    faseAmarelo();  // Fase 2: Amarelo aceso por 2 segundos
    faseVerde();    // Fase 3: Verde aceso por 4 segundos
    faseAmarelo();  // Fase 4: Amarelo aceso por 2 segundos
}
