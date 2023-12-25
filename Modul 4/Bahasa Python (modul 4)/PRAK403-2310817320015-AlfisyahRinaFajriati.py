print("Input")
bil1, bil2 = input().split()
a = int(bil1) ; b = int(bil2)

print("\nOutput")
if a > b :
    while a >= int(bil2) and b <= int(bil1):
        print(a, end=" ")
        print(b, end=" ")
        a -= 1 
        b += 1
        if a == int(bil2) - 1: 
            break
        else : 
            print("-", end=" ")

elif a < b :
    while a <= int(bil2) and b >= int(bil1):
        print(a, end=" ")
        print(b, end=" ")
        a += 1
        b -= 1
        if b == int(bil1) - 1: 
            break
        else: 
            print("-", end=" ")