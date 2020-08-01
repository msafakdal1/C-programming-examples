sayı = input("Bir sayı giriniz :")

basamakDegeri = len(sayı)

sayı = int(sayı)

toplam = 0

geciciSayı = 0

while geciciSayı!=0:
    geciciSayı = sayı%10
    toplam += geciciSayı**basamakDegeri
    
    sayı//=10
    
if toplam == sayı:
    print("Armstrong Sayıdır")
else:
    print("Armstrong Sayısı Değildir")
    
