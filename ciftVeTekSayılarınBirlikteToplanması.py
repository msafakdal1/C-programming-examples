sayı = int(input("Bir Sayı Giriniz :"))


toplam1 = 0
toplam2 = 0


for i in range(1,sayı+1):
    if i%2==0:
        toplam1+=i
        
    elif i%2!=0:
        toplam2+=i
        
        
print("Serideki Çift Sayıların Toplamı :",toplam1)
print("Serideki Tek Sayıların Toplam :",toplam2)    c 
