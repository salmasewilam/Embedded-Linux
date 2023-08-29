import pyautogui
import time
import os

orders=['clangd','c++ testmate','c++ helper','cmake','cmake tools']

#to open visual studio
pyautogui.hotkey('win')
time.sleep(1)
pyautogui.write('visual')
pyautogui.hotkey('enter')
time.sleep(1)
pyautogui.hotkey('ctrl','shift','x')
time.sleep(1)

for i in range(5):
    pyautogui.moveTo(244, 142, 1)
    pyautogui.click()
    pyautogui.press('backspace', presses=15)
    pyautogui.write(orders[i])
    time.sleep(1)
    pyautogui.moveTo(201, 206, 1)
    pyautogui.click()
    pyautogui.moveTo(673, 251, 1)
    pyautogui.click()
    time.sleep(1)

print ("all is done")
