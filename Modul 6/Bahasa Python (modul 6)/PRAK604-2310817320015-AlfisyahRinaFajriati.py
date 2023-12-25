kode = input() ; pesan = input()
karakter1 = len(kode) ; karakter2 = len(pesan)
bintang = 0 ; pagar = 0
if karakter1 != karakter2 :
    print("Panjang kalimat berbeda, pesan palsu")
else :
    for i in range(0, karakter1) :
        if kode[i] == pesan[i] :
            if kode[i] == ' ' :
                print(" ", end='')
            else :
                print("*", end='') ; bintang += 1
        else :
            print("#", end='') ; pagar += 1
    print("\n* =", bintang)
    print("# =", pagar)
    if bintang >= pagar :
        print("Pesan Asli")
    else :
        print("Pesan Palsu")