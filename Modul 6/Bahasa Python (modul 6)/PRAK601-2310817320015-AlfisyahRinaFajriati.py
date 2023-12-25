baris, kolom = map(int,input().split()) 

matrix = [[0] * kolom for _ in range(baris)]

input_flattened = list(map(int,input().split()))
index = 0
for i in range(baris):
    for j in range(kolom):
        matrix[i][j] = input_flattened[index]
        index += 1

for i in range(baris):
    for j in range(kolom):
        print(f"{matrix[i][j]:3}", end="")
    print()