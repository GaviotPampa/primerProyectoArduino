const int trigPin = 9;
const int echoPin = 10;
const int buzzer = 8;  // Pin para el zumbador

long duracion = 0;  //long toma valores decimales
int distancia = 0;
int ledYellow = 2;
int ledGreen = 3;
int ledRed = 4;
const float umbral1 = 29;
const float umbral2 = 400;
const float umbral3 = 10;

void setup() {

  pinMode(trigPin, OUTPUT);  //transmisor Trig, encargado de enviar al exterior una señal de onda
  pinMode(echoPin, INPUT);   //receptor Echo, recibe info del exterior

  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);  //activacion de la comunicacion serial, para ver el valor de la distancia en una ventana del ID
}

void loop() {

  //Configuración del trigger y el echo

  digitalWrite(trigPin, LOW);  //para asegurarnos que este apagado
  delayMicroseconds(2);        //se mantiene por 2 microsegundos

  digitalWrite(trigPin, HIGH);  //se genera el pulso por el triger de 10 µs
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);  //luego se apaga

  duracion = pulseIn(echoPin, HIGH);  //devolver una duracion de tiempo en µs
  distancia = 0.0172 * duracion;      //calcula la distancia:**{distancia=(duracion/58.2)} o ** {distancia = duracion * 0.034 /2;}
                                      //**{(duracion / 2) / 29.1}
  Serial.print(distancia);            // La función Serial.print() imprime el valor de distancia sin saltar de línea
  Serial.println(" cm");              // Serial.println() imprime la cadena " cm" seguida de un salto de línea, lo que hace que la siguiente impresión en el monitor serial comience en una nueva línea.
  delay(200);                         //para que demore entre dato y dato para verificar


  //umbral1= 29; y umbral3 = 10;
  if (distancia <= umbral1 && distancia > umbral3) {
    digitalWrite(ledYellow, HIGH);
    Serial.println(umbral1);
    delay(distancia * 10);

    tone(buzzer, 2500, 200);  // (pin, frecuencia, duración)

  }

  else {
    digitalWrite(ledYellow, LOW);
  }

  //umbral2 = 400; umbral1 = 29;
  if (distancia < umbral2 && distancia > umbral1) {
    digitalWrite(ledGreen, HIGH);
    Serial.println(umbral2);
    delay(distancia * 10);

    tone(buzzer, 2000, 200);

  } else {
    digitalWrite(ledGreen, LOW);
  }


  //umbral3= 10;

  if (distancia < umbral3 && distancia > 0) {
    digitalWrite(ledRed, HIGH);
    Serial.println(umbral3);
    delay(distancia * 10);

    tone(buzzer, 3000, 200);
  }

  // Apagar todos los LEDs si están fuera del rango

  else {
    noTone(buzzer);
    digitalWrite(ledYellow, LOW);
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledRed, LOW);
  }
}
