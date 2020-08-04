def mukemmelsayı(sayı):
    toplam = 0
    for i in range(1,sayı+1):
        if sayı % i == 0:
            toplam += i
        else:
            break
            
    if toplam == sayı:
       print("Mükemmel Sayıdır")
    else:
       print("Mükemmel Sayı Değildir")
                
            
            
       
       
mukemmelsayı(6)    
    
