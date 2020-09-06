#Tekrar eden sayılarlardan tekrarı yazdırma , yani o sayılardan ilkini bul ve diğer tekrarlarını yazdırma

liste = [1,2,3,4,5,6,0,0,0,0]

liste2 = list()
count = 0

for i in range(len(liste)-1):
    if liste[i] == liste[i+1]:
        count = count + 1
        if count >1:
            continue
    print(liste[i])
