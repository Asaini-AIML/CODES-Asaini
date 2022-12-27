# Write a C program to read temperature in centigrade and display a suitable message according to temperature state below : Go to the editor
# Temp < 0 then Freezing weather
# Temp 0-10 then Very Cold weather
# Temp 10-20 then Cold weather
# Temp 20-30 then Normal in Temp
# Temp 30-40 then Its Hot
# Temp >=40 then Its Very Hot
temp=int(input("enter the the temp\n",))
if (temp<0):
    print("Freezing weather")
elif(0<=temp<10):
    print("very cold weather")
elif(10<=temp<20):
    print("cold weather")
elif(20<=temp<30):
    print("normal in temp")
elif(30<=temp<40):
    print("hot")
else:
    print("its very hot")