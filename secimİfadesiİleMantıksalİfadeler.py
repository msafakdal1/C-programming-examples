secim = str(input("Ucgen mi dörtgen mi?"))


if secim == "Ücgen":
    a = int(input("a sayısını giriniz :"))
    b = int(input("b sayısını giriniz :"))
    c = int(input("c sayısını giriniz :"))
    
    if (abs(b-c)<a<abs(b+c)) or (abs(a-c)<b<abs(a+c)) or (abs(a-b)<c<abs(a+b)):
        if a == b and a == c and b == c:
            print("Eşkenar Üçgen")
        elif a == b:
            print("İkizkenar Üçgen")
        else:
            print("Sıradan bir üçgendir")
        
    else:
        print("Üçgen oluşturma kurallarını karşılamıyor")
        

elif secim  == "Dörtgen":
    a = int(input("a kenarını giriniz :"))
    b = int(input("b kenarını giriniz :"))
    c = int(input("c kenarını giriniz :"))
    d = int(input("d kenarını giriniz :"))
    if a>0 and b>0 and c>0 and d>0:
        
      if a == b and a == c and a == d and b == c and b == d and c == d:
        print("Kare")
      elif a == b and  c == d:
        print("Dikdörtgen")
      else:
        print("Sıradan Dörtgendir")
        
        
        
else:
    print("Hiç bir secim ifadesini karşılamıyor.")
        
        
