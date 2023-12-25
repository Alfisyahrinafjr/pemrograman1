print("Input")
bil, simbol = input("").split()
a = int(bil)

print("\nOutput");
for i in range(1, 51):
    if i % a == 0:
        print(simbol, end=" ")
    else:
        print(i, end=" ")