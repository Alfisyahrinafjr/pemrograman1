print("Input")
total_detik = int(input())
hari = 0
jam = 0
menit = 0
detik = 0

print("\nOutput")
if total_detik >= 86400:
    hari = total_detik // 86400
    total_detik = total_detik % 86400
if total_detik >= 3600:
    jam = total_detik // 3600
    sisa_detik = total_detik % 3600
if total_detik >= 60:
    menit = (total_detik - (jam * 3600))// 60
    total_detik = total_detik % 60
detik = total_detik
if hari > 0:
    print(f"{hari} hari {jam:02d}:{menit:02d}:{detik:02d}")
else:
    print(f"{jam:02d}:{menit:02d}:{detik:02d}")