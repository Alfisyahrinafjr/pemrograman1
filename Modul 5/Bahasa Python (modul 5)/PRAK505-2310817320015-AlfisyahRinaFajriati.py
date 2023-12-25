def Biodata(tahunLahir, Namaku, Asal):
  tahun_sekarang = 2023
  umur = tahun_sekarang - tahunLahir
  print(f"Perkenalkan nama saya: {Namaku}")
  print(f"Umur saya: {umur}")
  print(f"Saya adalah angkatan: {tahun_sekarang}")
  print(f"Asal saya dari: {Asal}")

if __name__ == "__main__":
 tahunLahir = int(input(""))
 Namaku = input("")
 Asal = input("")
 Biodata(tahunLahir, Namaku, Asal)