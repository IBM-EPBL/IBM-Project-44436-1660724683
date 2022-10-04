import random
Temperature=random.randint(1,100)
Humidity=random.randint(1,100)
print(Temperature)
print(Humidity)
if((Temperature>20)&(Humidity>50)):
    print("Temperature and Humidity are HIGH!!!")
    print("**ALARM ON**")
else:
    print("Temperature and Humidity are NORMAL!!!")
    print("**ALARM OFF**")
