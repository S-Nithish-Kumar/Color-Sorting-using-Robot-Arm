import serial
import time
import cv2
import numpy as np
from tensorflow.keras.models import load_model
from tensorflow.keras.preprocessing import image

#directory = "C:\\Users\\Nithish Kumar S\\Downloads\\original (1)\\TF_2_Notebooks_and_Data\\04-CNNs\\Dataset for color sorting"+ "\\train"+ "\\Green-samples"+"\\108.jpg"

cap = cv2.VideoCapture(0)
model = load_model('color_sorting.h5')
ser = serial.Serial("COM5", 9600)


while(ser.isOpen()):
    cap.set(cv2.CAP_PROP_FPS, 10)
    _, frame = cap.read()
    frame = cv2.flip(frame, 1)
    frame = cv2.resize(frame, (224, 224))
    img = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)

    my_image = image.img_to_array(img)
    #print(type(my_image))
    my_image = np.expand_dims(my_image, axis=0)
    #print(my_image.shape)
    result = model.predict(my_image)
    print(result)
    cv2.imshow("frame",frame)

    if (result[0][0]==1):
        print((str(1)+ 'a').encode('utf-8'))
        ser.write(str.encode('5'))
    elif(result[0][1]==1):
        print((str(2)+'b').encode('utf-8'))
        ser.write(str.encode('1'))
    elif(result[0][2]==1):
        print((str(3)+'c').encode('utf-8'))
        ser.write(str.encode('0'))
    time.sleep(1)
    if (cv2.waitKey(20) & 0XFF) == ord('q'):
        #ser.write((str(34) + 'a').encode('utf-8'))
        break

#cap.release()
#cv2.destroyAllWindows()

