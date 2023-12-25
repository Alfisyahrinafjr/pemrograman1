print("Input")
bil1, bil2 = input().split()
bil1 = int(bil1) ; bil2 = int(bil2)

print("\nOutput")
for i in range(1, bil1 + 1) :
    j = i 
    while j > 1 :
        print("(%d * %d) + "%(j, bil2), end='') ; j -= 1
    x = 1 ; hasil = (i * bil2)
    while x < i :
        hasil += (x * bil2) ; x += 1
    print("(%d * %d) = %d"%(j, bil2, hasil))
y = 1 ; z = 1 ; total = 0
while y <= bil1 :
    total += z * bil2 ; z += y + 1 ; y += 1
print("%d"%(total))