def factoriel(sayı):
    f = 1
    if sayı == 0 and sayı == 1:
        print("Sonuc :",f)
    else:
        while sayı>=1:
            f*=sayı
            
            sayı-=1
            
        print("Sonuc :",f)
        
        
factoriel(5)        
            
