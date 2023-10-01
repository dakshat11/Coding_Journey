import requests
import json
import win32com.client as wincom
city = input("Enter the name of the city :\n")

url = f"https://api.weatherapi.com/v1/current.json?key=03c9dfd83a4c4171b9f134223230909&q={city}"

r = requests.get(url)

# print(r.text)
wdic= json.loads(r.text)
a = wdic["current"]["temp_c"]
# speak = wincom.Dispatch("SAPI.SpVoice")
print(a)
# speak{a}
