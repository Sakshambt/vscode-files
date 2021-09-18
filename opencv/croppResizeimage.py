import cv2
img = cv2.imread(r'C:\Users\hp\OneDrive\Pictures\dekstop wallpapers\pp.jpg')
print(img.shape)

imgResize = cv2.resize(img, (400, 400))
imgCropped = img[200:400, 200:400]

cv2.imshow("original", img)
cv2.imshow("Imgresize", imgResize)
cv2.imshow("cropped", imgCropped)

cv2.waitKey(0)
