a = 400000
b = 350000
da = 13
sda = a - (a * da // 100)
db = 21
sdb = b - (b * db // 100)
print("Harga sepatu A adalah", a)
print("Harga sepatu B adalah", b)
print(f"Sepatu A mendapat diskon {da}% sehingga harganya menjadi {sda}")
print(f"Sepatu B mendapat diskon {db}% sehingga harganya menjadi {sdb}")