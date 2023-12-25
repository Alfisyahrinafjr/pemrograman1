n1, n2 = map(int, input().split())

if n1 != n2:
    print("Jumlah tidak sama")
else:
    A = list(map(int, input().split()))
    B = list(map(int, input().split()))

hasil = [A[i] * B[i] for i in range(n1)]
print(" ".join(map(str, hasil)))