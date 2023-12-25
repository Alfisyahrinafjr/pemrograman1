bil = 1
while bil == 1:
    print("Pilih Program : ")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    print("Masukkan Pilihan : ", end='') ; a = int(input())
    if a > 5 or a < 1 : 
        print("Input anda salah, silahkan coba lagi\n")
    elif a == 5 : break
    else : 
        print("Masukkan Nilai Pertama : ", end='') ; x = float(input())
        print("Masukkan Nilai Kedua : ", end='') ; y = float(input())
        if a == 1 : print("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n"%(x, y, x + y))
        elif a == 2 : print("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n"%(x, y, x - y))
        elif a == 3 : print("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n"%(x, y, x * y))
        else : print("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n"%(x, y, x / y))
print("Terimakasih, telah menggunakan kalkulator Alfisyah Rina Fajriati")