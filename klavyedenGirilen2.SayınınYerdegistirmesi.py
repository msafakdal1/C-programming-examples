number1 = int(input("1. sayıyı giriniz :"))
number2= int(input("2. sayıyı giriniz :"))

print("\n")

print("Yer degistirmeden önce\n")

print("number1 :{}\tnumber2: {}".format(number1,number2))

print("\n")


number1,number2 = number2,number1


print("Yer degistirdikten sonra\n\n")


print("Number1 : {}\nNumber2 :{}".format(number1,number2))

