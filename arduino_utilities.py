import serial
import time
import keyboard
import subprocess
#import pyautogui

arduino = serial.Serial('COM7', 9600)  

time.sleep(2)

while True:
    boton1 = "boton1_presionado"
    boton2 = "boton2_presionado"
    boton3 = "boton3_presionado"

    if arduino.in_waiting > 0:
        mensaje = arduino.readline().decode().strip()

        # BOTÓN 1: Screenshot
        if mensaje == boton1:
            time.sleep(0)
            keyboard.press_and_release('windows+shift+s')

        # BOTÓN 2: Cerrar ventana
        elif mensaje == boton2:
            time.sleep(0)
            keyboard.press_and_release('alt+f4')

        # BOTÓN 3: Abrir programa
        elif mensaje == boton3:
            ruta_programa = r"RUTA DONDE SE ALOJA EL PROGRAMA O EL ARCHIVO QUE QUIERAS ABRIR"  # <-- Cambia esto por tu ruta
            subprocess.Popen(ruta_programa)



