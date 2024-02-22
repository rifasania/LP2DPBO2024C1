from Clothing import Clothing
from Shirt import Shirt

listShirt = []
i = 0
n = 0

maxIdProduct = 0
maxName = 0
maxBrand = 0
maxPrice = 0
maxSize = 0
maxMaterial = 0
maxColor = 0
maxSleeveType = 0

print("Banyak data kaus yang ingin dimasukkan : ")
n = int(input())

print("Masukkan IdProduct, Nama, Brand, Harga, Ukuran, Bahan, Jenis Kelamin, Warna, dan Sleeve Type sebanyak", n)
for i in range(n):
    input_string = input()
    idProduk, nama, merk, harga, ukuran, bahan, jenisKelamin, warna, tipeLengan = input_string.split()
    temp = Shirt()
    temp.setIdProduct(idProduk)
    temp.setName(nama)
    temp.setBrand(merk)
    temp.setPrice(harga)
    temp.setSize(ukuran)
    temp.setMaterial(bahan)
    temp.setGender(jenisKelamin)
    temp.setColor(warna)
    temp.setSleeveType(tipeLengan)
    listShirt.append(temp)

    # mengecek panjang tiap string
    if len(idProduk) > maxIdProduct:
        maxIdProduct = len(idProduk)
    if len(nama) > maxName:
        maxName = len(nama)
    if len(merk) > maxBrand:
        maxBrand = len(merk)
    if len(harga) > maxPrice:
        maxPrice = len(harga)
    if len(ukuran) > maxSize:
        maxSize = len(ukuran)
    if len(bahan) > maxMaterial:
        maxMaterial = len(bahan)
    if len(warna) > maxColor:
        maxColor = len(warna)
    if len(tipeLengan) > maxSleeveType:
        maxSleeveType = len(tipeLengan)

# membandingkan dengan panjang string yang ada di judul tabel
if maxIdProduct < 2:
    maxIdProduct = 2
if maxName < 4:
    maxName = 4
if maxBrand < 5:
    maxBrand = 5
if maxPrice < 5:
    maxPrice = 5
if maxSize < 4:
    maxSize = 4
if maxMaterial < 8:
    maxMaterial = 8
if maxColor < 5:
    maxColor = 5
if maxSleeveType < 11:
    maxSleeveType = 11

print("\nBanyak Kaus yang Sudat Terdata :")

# BUAT GARISS DI ATAS TABEL
print("+", end="")
for i in range(maxIdProduct + 3):
    print("-", end="")
print("+", end="")
for i in range(maxName + 3):
    print("-", end="")
print("+", end="")
for i in range(maxBrand + 3):
    print("-", end="")
print("+", end="")
for i in range(maxPrice + 3):
    print("-", end="")
print("+", end="")
for i in range(maxSize + 3):
    print("-", end="")
print("+", end="")
for i in range(maxMaterial + 3):
    print("-", end="")
print("+", end="")
for i in range(9):
    print("-", end="")
print("+", end="")
for i in range(maxColor + 3):
    print("-", end="")
print("+", end="")
for i in range(maxSleeveType + 3):
    print("-", end="")
print("+")

# BUAT JUDUL KOLOM TABEL ATAU TABEL HEADING
print("| Id  ", end="")
print("| Name  ", end="")
for i in range(maxName - 4):
    print(" ", end="")
print("| Brand  ", end="")
for i in range(maxBrand - 5):
    print(" ", end="")
print("| Price  ", end="")
for i in range(maxPrice - 5):
    print(" ", end="")
print("| Size  ", end="")
for i in range(maxSize - 4):
    print(" ", end="")
print("| Material  ", end="")
for i in range(maxMaterial - 8):
    print(" ", end="")
print("| Gender  ", end="")
print("| Color  ", end="")
for i in range(maxColor - 5):
    print(" ", end="")
print("| Sleeve Type  ", end="")
for i in range(maxSleeveType - 11):
    print(" ", end="")
print("|")

# BUAT GARISS DI BAWAH HEADER
print("+", end="")
for i in range(maxIdProduct + 3):
    print("-", end="")
print("+", end="")
for i in range(maxName + 3):
    print("-", end="")
print("+", end="")
for i in range(maxBrand + 3):
    print("-", end="")
print("+", end="")
for i in range(maxPrice + 3):
    print("-", end="")
print("+", end="")
for i in range(maxSize + 3):
    print("-", end="")
print("+", end="")
for i in range(maxMaterial + 3):
    print("-", end="")
print("+", end="")
for i in range(9):
    print("-", end="")
print("+", end="")
for i in range(maxColor + 3):
    print("-", end="")
print("+", end="")
for i in range(maxSleeveType + 3):
    print("-", end="")
print("+")

for shirt in listShirt:
    print("| ", end="")
    print(shirt.getIdProduct(), "", end="")
    for j in range(maxIdProduct - len(shirt.getIdProduct())):
        print(" ", end="")
    print(" | ", end="")

    print(shirt.getName(), "" , end="")
    for j in range(maxName - len(shirt.getName())):
        print(" ", end="")
    print(" | ", end="")

    print(shirt.getBrand(), "", end="")
    for j in range(maxBrand - len(shirt.getBrand())):
        print(" ", end="")
    print(" | ", end="")

    print(shirt.getPrice(), "", end="")
    for j in range(maxPrice - len(shirt.getPrice())):
        print(" ", end="")
    print(" | ", end="")

    print(shirt.getSize(), "", end="")
    for j in range(maxSize - len(shirt.getSize())):
        print(" ", end="")
    print(" | ", end="")

    print(shirt.getMaterial(), "", end="")
    for j in range(maxMaterial - len(shirt.getMaterial())):
        print(" ", end="")
    print(" | ", end="")

    print(shirt.getGender(), "", end="")
    for j in range(5):
        print(" ", end="")
    print(" | ", end="")

    print(shirt.getColor(), "", end="")
    for j in range(maxColor - len(shirt.getColor())):
        print(" ", end="")
    print(" | ", end="")

    print(shirt.getSleeveType(), "", end="")
    for j in range(maxSleeveType - len(shirt.getSleeveType())):
        print(" ", end="")
    print(" |")

# BUAT GARIS DI BAWAH TABEL
print("+", end="")
for i in range(maxIdProduct + 3):
    print("-", end="")
print("+", end="")
for i in range(maxName + 3):
    print("-", end="")
print("+", end="")
for i in range(maxBrand + 3):
    print("-", end="")
print("+", end="")
for i in range(maxPrice + 3):
    print("-", end="")
print("+", end="")
for i in range(maxSize + 3):
    print("-", end="")
print("+", end="")
for i in range(maxMaterial + 3):
    print("-", end="")
print("+", end="")
for i in range(9):
    print("-", end="")
print("+", end="")
for i in range(maxColor + 3):
    print("-", end="")
print("+", end="")
for i in range(maxSleeveType + 3):
    print("-", end="")
print("+")