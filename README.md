# Sensor de Distancia Ultrasónico con Arduino
# Ultrasonic Distance Sensor with Arduino

Este proyecto consiste en un sistema de medición de distancia mediante un sensor ultrasónico (HC-SR04), el cual activa diferentes señales luminosas (LEDs) y sonoras (Buzzer) dependiendo de la proximidad de un objeto.

This project consists of a distance measurement system using an ultrasonic sensor (HC-SR04), which activates different light (LEDs) and sound (Buzzer) signals depending on the proximity of an object.

## 🛠 Tecnologías y Componentes / Technologies and Components
- **Lenguaje / Language:** C++ (Arduino IDE)
- **Hardware:** Arduino, Sensor HC-SR04, 3 LEDs, Buzzer.

## 🧠 Lógica del Proyecto / Project Logic
El código implementa una lógica de control basada en **umbrales de distancia**. El sistema funciona mediante el siguiente flujo:

The code implements a control logic based on **distance thresholds**. The system operates through the following flow:

1. **Emisión de pulso / Pulse emission:** El sensor emite una onda y espera su retorno. / The sensor emits a wave and waits for its return.
2. **Cálculo / Calculation:** Se calcula la distancia basándose en el tiempo de viaje de la onda. / Distance is calculated based on the wave's travel time.
3. **Procesamiento de datos / Data processing:** El sistema clasifica la distancia en niveles (Seguro, Precaución, Crítico). / The system classifies distance into levels (Safe, Caution, Critical).
4. **Respuesta / Response:** Activación de LEDs y tono del buzzer según el umbral. / Activation of LEDs and buzzer tone according to the threshold.



## 📝 Aspectos Técnicos Destacados / Technical Highlights
- **Comunicación Serial / Serial Communication:** Monitoreo en tiempo real de los datos. / Real-time data monitoring.
- **Control de Tiempos / Timing Control:** Uso de `pulseIn` y `delayMicroseconds` para precisión. / Use of `pulseIn` and `delayMicroseconds` for precision.
- **Lógica Condicional / Conditional Logic:** Uso eficiente de `if/else` para la gestión de estados. / Efficient use of `if/else` for state management.
- **Manejo de Hardware / Hardware Handling:** Configuración de pines (I/O) para interacción digital. / Pin configuration (I/O) for digital interaction.

## 🚀 Cómo usarlo / How to use
1. Conecta el hardware siguiendo los pines definidos en el código. / Connect the hardware following the pins defined in the code.
2. Carga el código al Arduino. / Upload the code to the Arduino.
3. Abre el "Monitor Serie" para ver los datos en cm. / Open the "Serial Monitor" to see the data in cm.

---
*Proyecto desarrollado como parte de mi formación en Desarrollo de Software.*
*Project developed as part of my Software Development training.*
