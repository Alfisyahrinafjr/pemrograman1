print("Input")
bil = int(input(""))

print("\nOutput")
for i in range(1, bil + 1, 2):
    print(i, end=" ")

print()
for i in range(bil, 1, -1):
    if i % 2 == 0:
      print(i, end=" ")