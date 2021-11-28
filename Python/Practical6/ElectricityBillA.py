monthcap = [31,29,31,30,31,30,31,31,30,31,30,31]

#inputs
previousMeter = int(input("Enter previous meter reading: "))
currentMeter = int(input("Enter current meter reading: "))
day = int(input("Enter the day of the month: "))
month = int(input("Enter the month (int): "))

#validation
if (previousMeter < 0 or previousMeter > 9999):
    print("Error: previous meter reading out of range")
    exit()
elif (currentMeter < 0 or currentMeter > 9999):
    print("Error: current meter reading out of range")
    exit()
elif (currentMeter < previousMeter):
    print("Error: Previous meter reading cannot be greater than current reading")
    exit()
elif ((currentMeter-previousMeter) > 1000):
    print("Error: Electricity used cannot be greater than 1000")
    exit()
elif (month < 1  or month > 12):
    print("Error: Month count invalid")
    exit()
elif (day>monthcap[month]):
    print("Error: There are", monthcap[month],"days in the select month")
elif (day<1):
    print("Error: Invalid day")


##################
for i in monthcap:
    if (i == 30):
        continue
    print (i)