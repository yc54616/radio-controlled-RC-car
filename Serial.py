import serial
import time

# 'COM3' 부분에 환경에 맞는 포트 입력
ser = serial.Serial('COM5', 9600)

while True:
    if ser.readable():
        val = input()
        val = val.encode('utf-8')
        ser.write(val)