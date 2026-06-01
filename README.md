# primerProyectoArduino

# Sensor de Distancia Ultrasónico con Arduino

Este proyecto consiste en un sistema de medición de distancia mediante un sensor ultrasónico (HC-SR04), el cual activa diferentes señales luminosas (LEDs) y sonoras (Buzzer) dependiendo de la proximidad de un objeto.

## 🛠 Tecnologías y Componentes
- **Lenguaje:** C++ (Arduino IDE)
- **Hardware:**
  - Arduino (Uno/Nano/Mega)
  - Sensor Ultrasónico HC-SR04
  - 3 LEDs (Verde, Amarillo, Rojo)
  - Buzzer (Zumbador)

## 🧠 Lógica del Proyecto
El código implementa una lógica de control basada en **umbrales de distancia**. El sistema funciona mediante el siguiente flujo:

1. **Emisión de pulso:** El sensor emite una onda ultrasónica y espera su retorno.
2. **Cálculo:** Se calcula la distancia en centímetros basándose en el tiempo de viaje de la onda.
3. **Procesamiento de datos:**
   - **Rango Verde:** Distancia segura.
   - **Rango Amarillo:** Distancia de precaución.
   - **Rango Rojo:** Distancia crítica (objeto muy cerca).
4. **Respuesta:** El sistema activa el LED y la frecuencia del tono del buzzer correspondiente al umbral detectado.



## 📝 Aspectos Técnicos Destacados
- **Comunicación Serial:** Implementación de `Serial.begin(9600)` para monitoreo en tiempo real de los datos capturados.
- **Control de Tiempos:** Uso de `pulseIn` para medir con precisión el tiempo de retorno del eco y `delayMicroseconds` para la configuración del disparo (trig).
- **Lógica Condicional:** Uso eficiente de estructuras `if/else` para la gestión de estados de los componentes.
- **Manejo de Hardware:** Configuración de pines mediante `pinMode` para comunicación de entrada/salida digital.

## 🚀 Cómo usarlo
1. Conecta el sensor HC-SR04, los LEDs y el Buzzer siguiendo el esquema de pines definido en el código.
2. Carga el código a tu placa Arduino desde el IDE.
3. Abre el "Monitor Serie" en el IDE de Arduino para visualizar la distancia detectada en centímetros.

---
*Proyecto desarrollado como parte de mi formación en Desarrollo de Software.*
