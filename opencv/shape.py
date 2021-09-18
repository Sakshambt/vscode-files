import cv2
import numpy as np

img = np.zeros((512, 512, 3), np.uint8)
# print(img)
# img[100:200, 150:300] = 250, 0, 0
cv2.line(img, (0, 0), (img.shape[1], img.shape[0]), (0, 256, 0), 1)
cv2.rectangle(img, (100, 50), (250, 350), (0, 0, 255), 2)
cv2.circle(img, (150, 100), (50), (255, 255, 0), 3)
cv2.putText(img, "HELLO WORLD", (100, 100),
            cv2.FONT_HERSHEY_COMPLEX, 1, (255, 0, 0), 2)

cv2.imshow("Original", img)
cv2.waitKey(0)
