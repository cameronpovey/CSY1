months=[]

count = 0

while count < 12:
    months.append(str(raw_input("Enter a month: ")))
    #months.append("p")
    count+=1

print("--------")
for i in months:
    print(months[i])