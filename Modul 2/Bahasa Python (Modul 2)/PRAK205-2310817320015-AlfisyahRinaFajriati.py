#case1
print("Input")
a,b = map(float, input().split())

alas = (b**2 - a**2) **(0.5)
tinggi = a
keliling = a+b+alas
luas = 1/2*alas*a

print("\nOutput")
print(f"Alas = {alas:.0f} cm")
print(f"Tinggi = {tinggi:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2")

#case2
print("\nInput")
a = float(input(" "))
b = float(input(" "))

alas = (b**2 - a**2) **(0.5)
tinggi = a
keliling = a+b+alas
luas = 1/2*alas*tinggi

print("\nOutput")
print(f"Alas = {alas:.0f} cm")
print(f"Tinggi = {tinggi:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2")