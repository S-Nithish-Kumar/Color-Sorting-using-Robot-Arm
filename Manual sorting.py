import serial

port = serial.Serial('COM5',9600)

while( port.isOpen()):
    data = int(input("Enter 1 to move to Green position and 0 to move to Orange Position"))

    if(data == 1):
        port.write(str.encode('1'))
    elif(data == 0):
        port.write(str.encode('0'))
    else:
        print('Invalid input!!!!')
