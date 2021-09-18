import cv2
import numpy as np
width, height = 250, 300
img = cv2.imread(r'C:\Users\hp\Desktop\cards.png')
pts1 = np.float32([[570, 75], [789, 184], [417, 409], [634, 509]])
pts2 = np.float32([[0, 0], [width, 0], [0, height], [width, height]])
matrix = cv2.getPerspectiveTransform(pts1, pts2)
imgoutput = cv2.warpPerspective(img, matrix, (width, height))

cv2.imshow("output", imgoutput)
cv2.imshow("card", img)

cv2.waitKey(0)
