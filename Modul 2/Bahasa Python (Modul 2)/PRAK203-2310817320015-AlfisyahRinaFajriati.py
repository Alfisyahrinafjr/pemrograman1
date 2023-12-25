#case 1
print("input")
a,b,i,j,x,y = map(float, input().split())
hasil = (a-b)*(i/j)-(x+y)

print("\nOutput")
print(f"{hasil:.3f}")

#case2
print("\nInput")
a,b = map(float, input().split())
i,j = map(float, input().split())
x,y = map(float, input().split())
hasil = (a-b)*(i/j)-(x+y)

print("\nOutput")
print(f"{hasil:.3f}")
