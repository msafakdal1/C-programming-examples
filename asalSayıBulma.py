durum = 1

sayı1 = int(input("Bir sayı giriniz :"))

for i in range(2,sayı1):
    
    if sayı1%i == 0:
        durum = 1
        break
    else:
        durum = 0
        
if durum == 1:
    print("Asal Sayı Değildir")
else:
    print("Asal Sayıdır")
