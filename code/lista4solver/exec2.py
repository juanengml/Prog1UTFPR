import os 
import time 
while True:
  os.system(""" mosquitto_pub -t /device/temperatura -i "admin:99381" -m '{"temperatura": 20.0}' """)
  time.sleep(0.5)
  print "Sende data " + """mosquitto_pub -t /device/temperatura -i "admin:99381" -m '{"temperatura" : 40.0}'  """

