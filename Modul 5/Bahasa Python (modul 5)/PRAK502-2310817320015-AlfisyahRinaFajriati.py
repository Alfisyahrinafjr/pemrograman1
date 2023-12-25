def hitung(nilai1, nilai2):
    return nilai1 - nilai2

def mutlak(angka):
    return -angka if angka < 0 else angka
 
a, c, b, d = map(int,input().split())

Hasil = mutlak(hitung(a,b)) + mutlak(hitung(c,d))
print(Hasil)
 