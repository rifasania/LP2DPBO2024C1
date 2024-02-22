/* Saya Rifa Sania NIM 2206697 mengerjakan Latihan Praktikum 2 dalam mata kuliah Desain Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin... */

// include library
#include <bits/stdc++.h>
#include "Shirt.cpp"

using namespace std;

int main(){
    list<Shirt>listShirt; // list
    
    // atribut penampung
    string idProduk;
    string nama;
    string merk;
    string harga;
    string ukuran;
    string bahan;
    char jenisKelamin;
    string warna;
    string tipeLengan;
    int i, j, n;

    // atribut untuk menghitung max string
    int maxIdProduct = 0;
    int maxName = 0;
    int maxBrand = 0;
    int maxPrice = 0;
    int maxSize = 0;
    int maxMaterial = 0;
    int maxColor = 0;
    int maxSleeveType = 0;

    cout << "Banyak data kaus yang ingin ditambahkan : \n";
    cin >> n;

    cout << "Masukkan IdProduct, Nama, Brand, Harga, Ukuran, Bahan, Jenis Kelamin, Warna, dan Sleeve Type sebanyak" << n << "\n";
    for(int i = 0; i < n; i++){
        cin >> idProduk >> nama >> merk >> harga >> ukuran >> bahan >> jenisKelamin >> warna >> tipeLengan;

        // mengecek panjang tiap string
        if(idProduk.length() > maxIdProduct) {
            maxIdProduct = idProduk.length();
        }
        if(nama.length() > maxName) {
            maxName = nama.length();
        }
        if(merk.length() > maxBrand) {
            maxBrand = merk.length();
        }
        if(harga.length() > maxPrice) {
            maxPrice = harga.length();
        }
        if(ukuran.length() > maxSize) {
            maxSize = ukuran.length();
        }
        if(bahan.length() > maxMaterial) {
            maxMaterial = bahan.length();
        }
        if(warna.length() > maxColor) {
            maxColor = warna.length();
        }
        if(tipeLengan.length() > maxSleeveType) {
            maxSleeveType = tipeLengan.length();
        }

        // membuat objek shirt dan set atribut nya
        Shirt temp;
        temp.setIdProduct(idProduk);
        temp.setName(nama);
        temp.setBrand(merk);
        temp.setPrice(harga);
        temp.setSize(ukuran);
        temp.setMaterial(bahan);
        temp.setGender(jenisKelamin);
        temp.setColor(warna);
        temp.setSleeveType(tipeLengan);
        listShirt.push_back(temp); // menambah ke list
    }

    // membandingkan dengan panjang string yang ada di judul tabel
    if(maxIdProduct < 2){
        maxIdProduct = 2;
    }
    if(maxName < 4){
        maxName = 4;
    }
    if(maxBrand < 5){
        maxBrand = 5;
    }
    if(maxPrice < 5){
        maxPrice = 5;
    }
    if(maxSize < 4){
        maxSize = 4;
    }
    if(maxMaterial < 8){
        maxMaterial = 8;
    }
    if(maxColor < 5){
        maxColor = 5;
    }
    if(maxSleeveType < 11){
        maxSleeveType = 11;
    }

    cout << "\nDaftar Kaus yang Sudah Terdata :\n";
    // BUAT GARIS DI ATAS TABEL
    cout << "+";
    if(maxIdProduct < 2){
        for(i =  0; i < 4; i++){
            cout << "-";
        }
    }else{
        for(i = 0; i < maxIdProduct + 2; i++){
            cout << "-";
        }
    }
    cout << "+";
    if(maxName < 4){
        for(i =  0; i < 6; i++){
            cout << "-";
        }
    }else{
        for(i = 0; i < maxName + 2; i++){
            cout << "-";
        }
    }
    cout << "+";
    if(maxBrand < 5){
        for(i =  0; i < 7; i++){
            cout << "-";
        }
    }else{
        for(i = 0; i < maxBrand + 2; i++){
            cout << "-";
        }
    }
    cout << "+";
    if(maxPrice < 5){
        for(i =  0; i < 7; i++){
            cout << "-";
        }
    }else{
        for(i = 0; i < maxPrice + 2; i++){
            cout << "-";
        }
    }        
    cout << "+";
    if(maxSize < 4){
        for(i =  0; i < 6; i++){
            cout << "-";
        }
    }else{
        for(i = 0; i < maxSize + 2; i++){
            cout << "-";
        }
    }
    cout << "+";
    if(maxMaterial < 8){
        for(i =  0; i < 10; i++){
            cout << "-";
        }
    }else{
        for(i = 0; i < maxMaterial + 2; i++){
            cout << "-";
        }
    }
    cout << "+";
    for(i = 0; i < 8; i++){
        cout << "-";
    }
    cout << "+";
    if(maxColor < 5){
        for(i =  0; i < 7; i++){
            cout << "-";
        }
    }else{
        for(i = 0; i < maxColor + 2; i++){
            cout << "-";
        }
    }
    cout << "+";
    if(maxSleeveType < 11){
        for(i =  0; i < 13; i++){
            cout << "-";
        }
    }else{
        for(i = 0; i < maxSleeveType + 2; i++){
            cout << "-";
        }
    }
    cout << "+\n";
    
    // BUAT JUDUL KOLOM TABEL ATAU TABEL HEADING
    cout << "| Id ";
    cout << "| Name ";
    for(i = 0; i < maxName - 4; i++){
        cout << " ";
    }        
    cout << "| Brand ";
    for(i = 0; i < maxBrand - 5; i++){
        cout << " ";
    }
    cout << "| Price ";
    for(i = 0; i < maxPrice - 5; i++){
        cout << " ";
    }
    cout << "| Size ";
    for(i = 0; i < maxSize - 4; i++){
        cout << " ";
    }
    cout << "| Material ";
    for(i = 0; i < maxMaterial - 8; i++){
        cout << " ";
    }
    cout << "| Gender ";
    cout << "| Color ";
    for(i = 0; i < maxColor - 5; i++){
        cout << " ";
    }
    cout << "| Sleeve Type ";
    for(i = 0; i < maxSleeveType - 11; i++){
        cout << " ";
    }
    cout << "|\n";

    // BUAT GARIS DI BAWAH HEADER
    cout << "+";
    if(maxIdProduct < 2){
        for(i =  0; i < 4; i++){
            cout << "-";
        }
    }else{
        for(i = 0; i < maxIdProduct + 2; i++){
            cout << "-";
        }
    }
    cout << "+";
    if(maxName < 4){
        for(i =  0; i < 6; i++){
            cout << "-";
        }
    }else{
        for(i = 0; i < maxName + 2; i++){
            cout << "-";
        }
    }
    cout << "+";
    if(maxBrand < 5){
        for(i =  0; i < 7; i++){
            cout << "-";
        }
    }else{
        for(i = 0; i < maxBrand + 2; i++){
            cout << "-";
        }
    }
    cout << "+";
    if(maxPrice < 5){
        for(i =  0; i < 7; i++){
            cout << "-";
        }
    }else{
        for(i = 0; i < maxPrice + 2; i++){
            cout << "-";
        }
    }        
    cout << "+";
    if(maxSize < 4){
        for(i =  0; i < 6; i++){
            cout << "-";
        }
    }else{
        for(i = 0; i < maxSize + 2; i++){
            cout << "-";
        }
    }
    cout << "+";
    if(maxMaterial < 8){
        for(i =  0; i < 10; i++){
            cout << "-";
        }
    }else{
        for(i = 0; i < maxMaterial + 2; i++){
            cout << "-";
        }
    }
    cout << "+";
    for(i = 0; i < 8; i++){
        cout << "-";
    }
    cout << "+";
    if(maxColor < 5){
        for(i =  0; i < 7; i++){
            cout << "-";
        }
    }else{
        for(i = 0; i < maxColor + 2; i++){
            cout << "-";
        }
    }
    cout << "+";
    if(maxSleeveType < 11){
        for(i =  0; i < 13; i++){
            cout << "-";
        }
    }else{
        for(i = 0; i < maxSleeveType + 2; i++){
            cout << "-";
        }
    }
    cout << "+\n";

    // PRINT ISI TABEL
    for(list<Shirt>::iterator it = listShirt.begin(); it != listShirt.end(); it++){
        cout << "| ";
        cout << it->getIdProduct();
        for(j = 0; j < maxIdProduct - it->getIdProduct().length(); j++){
            cout << " ";
        }
        cout << " | ";

        cout << it->getName();
        for(j = 0; j < maxName - it->getName().length(); j++){
            cout << " ";
        }
        cout << " | ";
        
        cout << it->getBrand();
        for(j = 0; j < maxBrand - it->getBrand().length(); j++){
            cout << " ";
        }
        cout << " | ";

        cout << it->getPrice();
        for(j = 0; j < maxPrice - it->getPrice().length(); j++){
            cout << " ";
        }
        cout << " | ";

        cout << it->getSize();
        for(j = 0; j < maxSize - it->getSize().length(); j++){
            cout << " ";
        }
        cout << " | ";

        cout << it->getMaterial();
        for(j = 0; j < maxMaterial - it->getMaterial().length(); j++){
            cout << " ";
        }
        cout << " | ";

        cout << it->getGender();
        for(j = 0; j < 5; j++){
            cout << " ";
        }
        cout << " | ";

        cout << it->getColor();
        for(j = 0; j < maxColor - it->getColor().length(); j++){
            cout << " ";
        }
        cout << " | ";

        cout << it->getSleeveType();
        for(j = 0; j < maxSleeveType - it->getSleeveType().length(); j++){
            cout << " ";
        }
        cout << " |\n";
    }

    // BUAT GARIS DI BAWAH TABEL
    cout << "+";
    if(maxIdProduct < 2){
        for(i =  0; i < 4; i++){
            cout << "-";
        }
    }else{
        for(i = 0; i < maxIdProduct + 2; i++){
            cout << "-";
        }
    }
    cout << "+";
    if(maxName < 4){
        for(i =  0; i < 6; i++){
            cout << "-";
        }
    }else{
        for(i = 0; i < maxName + 2; i++){
            cout << "-";
        }
    }
    cout << "+";
    if(maxBrand < 5){
        for(i =  0; i < 7; i++){
            cout << "-";
        }
    }else{
        for(i = 0; i < maxBrand + 2; i++){
            cout << "-";
        }
    }
    cout << "+";
    if(maxPrice < 5){
        for(i =  0; i < 7; i++){
            cout << "-";
        }
    }else{
        for(i = 0; i < maxPrice + 2; i++){
            cout << "-";
        }
    }        
    cout << "+";
    if(maxSize < 4){
        for(i =  0; i < 6; i++){
            cout << "-";
        }
    }else{
        for(i = 0; i < maxSize + 2; i++){
            cout << "-";
        }
    }
    cout << "+";
    if(maxMaterial < 8){
        for(i =  0; i < 10; i++){
            cout << "-";
        }
    }else{
        for(i = 0; i < maxMaterial + 2; i++){
            cout << "-";
        }
    }
    cout << "+";
    for(i = 0; i < 8; i++){
        cout << "-";
    }
    cout << "+";
    if(maxColor < 5){
        for(i =  0; i < 7; i++){
            cout << "-";
        }
    }else{
        for(i = 0; i < maxColor + 2; i++){
            cout << "-";
        }
    }
    cout << "+";
    if(maxSleeveType < 11){
        for(i =  0; i < 13; i++){
            cout << "-";
        }
    }else{
        for(i = 0; i < maxSleeveType + 2; i++){
            cout << "-";
        }
    }
    cout << "+\n";
}