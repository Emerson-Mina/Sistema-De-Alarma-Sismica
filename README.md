# Sistema-De-Alarma-Sismica
Proyecto de alarma sísmica que utiliza Arduino y Python para detectar y registrar eventos sísmicos, proporcionando alertas visuales y sonoras. Además, utiliza la API de OpenAI para brindar información de seguridad. ¡Mantente alerta y seguro!

Componentes y Materiales del Proyecto:
- Placa Arduino UNO o compatible
- Sensor de aceleración ADXL345
- LEDs (indicadores de alarma)
- Zumbador (para alertas audibles)
- Resistencias de 220 ohmios (para limitar la corriente de los LEDs)
- Cables macho a macho (para conexiones entre componentes)
- Cables macho a hembra (para conexiones entre componentes)
- Servidor de base de datos MySQL o MariaDB
- Entorno de desarrollo Arduino (basado en el lenguaje de programación C/C++)
- Entorno Python
- Bibliotecas de Arduino: Adafruit_Sensor, Adafruit_ADXL345_U
- Bibliotecas Python: serial, mysql-connector, yagmail, openai
- Cuenta de correo electrónico para enviar alertas
- Clave de API de OpenAI

Instrucciones de Configuración:
1. Conectar el sensor ADXL345 al Arduino.
2. Conectar LEDs con resistencias de 220 ohmios y un zumbador al Arduino.
3. Configurar el servidor de base de datos y crear una tabla para almacenar datos sísmicos.
4. Configurar una cuenta de correo electrónico y obtener una contraseña de aplicación o token de acceso.
5. Establecer la clave de API de OpenAI en el código Python.

Instrucciones de Uso:
1. Cargar el código Arduino en la placa utilizando el entorno de desarrollo Arduino.
2. Ejecutar el script Python para recibir datos sísmicos y enviar alertas por correo electrónico.
3. El sistema enviará alertas cuando se detecte un sismo y proporcionará información sobre la magnitud.

Notas:
- Asegúrese de mantener seguras las credenciales y datos almacenados por el sistema.
- Realice pruebas y ajustes para garantizar el correcto funcionamiento de la alarma sísmica.
