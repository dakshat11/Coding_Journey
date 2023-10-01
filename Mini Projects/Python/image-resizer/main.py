import cv2

src = cv2.imread("daksh.jpg", cv2.IMREAD_UNCHANGED)
cv2.imshow("title", src)


cv2.waitKey(0)
