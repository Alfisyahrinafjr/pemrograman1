#case 1
print("Input")
r = float (input(""))
t = float (input(""))

phi = 22/7
luas_bejana = phi*r
volume = phi*r*r*t
luas = 2*phi*r * (t + r)
keliling = 2*phi*r

print("\nOutput")
print(f"volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"keliling = {keliling:.2f}")

#case2
print("\nInput")
r,t = map(float, input().split())

phi = 22/7
luas_bejana = phi*r*r
volume = phi*r*r*t
luas = 2*phi*r*(r+t)
keliling = 2*phi*r

print("\nOutput")
print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")
