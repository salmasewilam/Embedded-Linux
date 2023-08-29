import pyautogui
import time

pyautogui.hotkey('win')
time.sleep(1)
pyautogui.write('gmail')
pyautogui.hotkey('enter')
time.sleep(3)
pyautogui.moveTo(458, 233, 1)
pyautogui.click()
time.sleep(1)
pyautogui.moveTo(460, 245)
pyautogui.click()