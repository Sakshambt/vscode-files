import cv2
import numpy as np

img = cv2.imread(r'C:\Users\hp\OneDrive\Pictures\dekstop wallpapers\pp.jpg')
kernel = np.ones((5, 5), np.uint8)

imgGray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
imgBlur = cv2.GaussianBlur(img, (9, 9), 0)
imgCanny = cv2.Canny(img, 50, 100)
imgDialation = cv2.dilate(imgCanny, kernel, iterations=1)
imgEroded = cv2.erode(imgDialation, kernel, iterations=1)

cv2.imshow("Gray Image", imgGray)
cv2.imshow("Blur Image", imgBlur)
cv2.imshow("Canny image", imgCanny)
cv2.imshow("dialate image", imgDialation)
cv2.imshow("eroded image", imgEroded)


cv2.waitKey(0)
