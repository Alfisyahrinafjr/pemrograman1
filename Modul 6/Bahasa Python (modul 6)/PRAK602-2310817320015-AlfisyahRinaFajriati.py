def hitung_jumlah_zetsu_putih(ruangan, zetsu_putih):
    hasil = []

    for i in range(ruangan):
        jumlah_pembelahan = zetsu_putih[i] * (i + 1)
        hasil.append(jumlah_pembelahan)

    return hasil

ruangan = int(input(""))
zetsu_putih = list(map(int, input("").split()))

hasil = hitung_jumlah_zetsu_putih(ruangan, zetsu_putih) 

for i, jumlah in enumerate(hasil):
    print(" ".join(map(str, hasil))) 