ilk = 0 
ikinci = 1


print(ilk)
print(ikinci)
for i in range(20):
    sonraki = ilk + ikinci
    ilk = ikinci
    ikinci = sonraki
    
    print(sonraki)
