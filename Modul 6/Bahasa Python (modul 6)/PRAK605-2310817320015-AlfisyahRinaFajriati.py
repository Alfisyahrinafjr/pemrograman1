def perkalian_matrix(A, B):
    Hasil = []

    for i in range(len(A)):
        jumlah_baris = []
        for j in range(len(B[0])):
            element = sum(A[i][k] * B[k][j] for k in range(len(B)))
            jumlah_baris.append(element)
        Hasil.append(jumlah_baris)

    return Hasil

jumlah_matrix = int(input())

print("Matriks A")
A = [list(map(int, input().split())) for _ in range(jumlah_matrix)]

print("Matriks B")
B = [list(map(int, input().split())) for _ in range(jumlah_matrix)]

Hasil = perkalian_matrix(A, B)

print("Matriks AXB")
for baris in Hasil:
    print(" ".join(map(str, baris)))