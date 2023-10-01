
import os
if __name__ == '__main__':
    print("Welcome to ROBOSPEAKER 1.1 Creatd by Dakshat")
    while True:
        x=input("What you want me to speak: ")
        if x=="q":
            break
        command = f"say{x}"
        os.system(command)