toplam = 0

sayı = int(input("Bir sayı giriniz :"))


for i in range(1,1000):
    if sayı % i == 0:
        toplam += i
        
    else:
        break
        
if toplam == sayı:
  print("Mükemmel Sayıdır")
else:
  print("Mükemmel Sayı Değildir")

