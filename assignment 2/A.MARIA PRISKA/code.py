import random
temperature=(random.random())*100
Humidity=(random.random())*100
roundedTemp=round(temperature)
roundedHumi=round(Humidity)
if roundedTemp>80:
   print ("temperature is high,","alarm is on")
else:
   print ("temperature is low,","alarm is off")
   if roundedHumi>70:
      print ("Humidity is high","alarm is on")
   else:
      print ("Humidity is low","alarm is off")
