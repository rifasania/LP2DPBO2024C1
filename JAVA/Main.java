/* Saya Rifa Sania NIM 2206697 mengerjakan Latihan Praktikum 2 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin... */

import java.util.Scanner;
import java.util.ArrayList;

class Main{
    public static void main(String[] args){
        String idProduct;
        String nama;
        String brand;
        String harga;
        String ukuran;
        String bahan;
        char jenis_kelamin;
        String warna;
        String sleeve_type;
        int i = 0, n = 0, j = 0;

        ArrayList<Shirt> list = new ArrayList<>();
        Scanner scan = new Scanner(System.in);

        System.out.println("Banyak data kaus yang ingin dimasukkan : ");
        try{
            n = scan.nextInt();
        }catch(Exception e){     

        }      

        // atribut untuk menghitung max string
        int maxIdProduct = 0;
        int maxName = 0;
        int maxBrand = 0;
        int maxPrice = 0;
        int maxSize = 0;
        int maxMaterial = 0;
        int maxColor = 0;
        int maxSleeveType = 0;
        
        System.out.println("Masukkan IdProduct, Nama, Brand, Harga, Ukuran, Bahan, Jenis Kelamin, Warna, dan Sleeve Type sebanyak " + n + "!");
        for(i = 0; i < n; i++){
            idProduct = scan.next();
            nama = scan.next();
            brand = scan.next();
            harga = scan.next();
            ukuran = scan.next();
            bahan = scan.next();
            jenis_kelamin = scan.next().charAt(0);
            warna = scan.next();
            sleeve_type = scan.next();

            // mengecek panjang tiap string
            if(idProduct.length() >  maxIdProduct){
                maxIdProduct = idProduct.length();
            }
            if(nama.length() > maxName){
                maxName = nama.length();
            }
            if(brand.length() > maxBrand){
                maxBrand = brand.length();
            }
            if(harga.length() > maxPrice){
                maxPrice = harga.length();
            }
            if(ukuran.length() > maxSize){
                maxSize = ukuran.length();
            }
            if(bahan.length() > maxMaterial){
                maxMaterial = bahan.length();
            }
            if(warna.length() > maxColor){
                maxColor = warna.length();
            }
            if(sleeve_type.length() > maxSleeveType){
                maxSleeveType = sleeve_type.length();
            }

            Shirt temp = new Shirt();
            temp.setIdProduct(idProduct);
            temp.setName(nama);
            temp.setBrand(brand);
            temp.setPrice(harga);
            temp.setSize(ukuran);
            temp.setMaterial(bahan);
            temp.setGender(jenis_kelamin);
            temp.setColor(warna);
            temp.setSleeve_type(sleeve_type);
            list.add(temp);
        }

        System.out.println("\nDaftar Kaus yang Sudah Terdata : ");
        // BUAT GARIS DI ATAS TABEL
        System.out.print("+");
        if(maxIdProduct < 2){
            for(i =  0; i < 4; i++){
                System.out.print("-");
            }
        }else{
            for(i = 0; i < maxIdProduct + 2; i++){
                System.out.print("-");
            }
        }
        System.out.print("+");
        if(maxName < 4){
            for(i =  0; i < 6; i++){
                System.out.print("-");
            }
        }else{
            for(i = 0; i < maxName + 2; i++){
                System.out.print("-");
            }
        }
        System.out.print("+");
        if(maxBrand < 5){
            for(i =  0; i < 7; i++){
                System.out.print("-");
            }
        }else{
            for(i = 0; i < maxBrand + 2; i++){
                System.out.print("-");
            }
        }
        System.out.print("+");
        if(maxPrice < 5){
            for(i =  0; i < 7; i++){
                System.out.print("-");
            }
        }else{
            for(i = 0; i < maxPrice + 2; i++){
                System.out.print("-");
            }
        }        
        System.out.print("+");
        if(maxSize < 4){
            for(i =  0; i < 6; i++){
                System.out.print("-");
            }
        }else{
            for(i = 0; i < maxSize + 2; i++){
                System.out.print("-");
            }
        }
        System.out.print("+");
        if(maxMaterial < 8){
            for(i =  0; i < 10; i++){
                System.out.print("-");
            }
        }else{
            for(i = 0; i < maxMaterial + 2; i++){
                System.out.print("-");
            }
        }
        System.out.print("+");
        for(i = 0; i < 8; i++){
            System.out.print("-");
        }
        System.out.print("+");
        if(maxColor < 5){
            for(i =  0; i < 7; i++){
                System.out.print("-");
            }
        }else{
            for(i = 0; i < maxColor + 2; i++){
                System.out.print("-");
            }
        }
        System.out.print("+");
        if(maxSleeveType < 11){
            for(i =  0; i < 13; i++){
                System.out.print("-");
            }
        }else{
            for(i = 0; i < maxSleeveType + 2; i++){
                System.out.print("-");
            }
        }
        System.out.println("+");
        
        // BUAT JUDUL KOLOM TABEL ATAU TABEL HEADING
        System.out.print("| Id ");
        System.out.print("| Name ");
        for(i = 0; i < maxName - 4; i++){
            System.out.print(" ");
        }        
        System.out.print("| Brand ");
        for(i = 0; i < maxBrand - 5; i++){
            System.out.print(" ");
        }
        System.out.print("| Price ");
        for(i = 0; i < maxPrice - 5; i++){
            System.out.print(" ");
        }
        System.out.print("| Size ");
        for(i = 0; i < maxSize - 4; i++){
            System.out.print(" ");
        }
        System.out.print("| Material ");
        for(i = 0; i < maxMaterial - 8; i++){
            System.out.print(" ");
        }
        System.out.print("| Gender ");
        System.out.print("| Color ");
        for(i = 0; i < maxColor - 5; i++){
            System.out.print(" ");
        }
        System.out.print("| Sleeve Type ");
        for(i = 0; i < maxSleeveType - 11; i++){
            System.out.print(" ");
        }
        System.out.println("|");

        // BUAT GARIS DI BAWAH HEADER
        System.out.print("+");
        if(maxIdProduct < 2){
            for(i =  0; i < 4; i++){
                System.out.print("-");
            }
        }else{
            for(i = 0; i < maxIdProduct + 2; i++){
                System.out.print("-");
            }
        }
        System.out.print("+");
        if(maxName < 4){
            for(i =  0; i < 6; i++){
                System.out.print("-");
            }
        }else{
            for(i = 0; i < maxName + 2; i++){
                System.out.print("-");
            }
        }
        System.out.print("+");
        if(maxBrand < 5){
            for(i =  0; i < 7; i++){
                System.out.print("-");
            }
        }else{
            for(i = 0; i < maxBrand + 2; i++){
                System.out.print("-");
            }
        }
        System.out.print("+");
        if(maxPrice < 5){
            for(i =  0; i < 7; i++){
                System.out.print("-");
            }
        }else{
            for(i = 0; i < maxPrice + 2; i++){
                System.out.print("-");
            }
        }        
        System.out.print("+");
        if(maxSize < 4){
            for(i =  0; i < 6; i++){
                System.out.print("-");
            }
        }else{
            for(i = 0; i < maxSize + 2; i++){
                System.out.print("-");
            }
        }
        System.out.print("+");
        if(maxMaterial < 8){
            for(i =  0; i < 10; i++){
                System.out.print("-");
            }
        }else{
            for(i = 0; i < maxMaterial + 2; i++){
                System.out.print("-");
            }
        }
        System.out.print("+");
        for(i = 0; i < 8; i++){
            System.out.print("-");
        }
        System.out.print("+");
        if(maxColor < 5){
            for(i =  0; i < 7; i++){
                System.out.print("-");
            }
        }else{
            for(i = 0; i < maxColor + 2; i++){
                System.out.print("-");
            }
        }
        System.out.print("+");
        if(maxSleeveType < 11){
            for(i =  0; i < 13; i++){
                System.out.print("-");
            }
        }else{
            for(i = 0; i < maxSleeveType + 2; i++){
                System.out.print("-");
            }
        }
        System.out.println("+");
                
        // BUAT ISI TABEL
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

        for(i = 0; i < list.size(); i++){
            System.out.print("| ");
            System.out.print(list.get(i).getIdProduct());
            for(j = 0; j < maxIdProduct - list.get(i).getIdProduct().length(); j++){
                System.out.print(" ");
            }
            System.out.print(" | ");

            System.out.print(list.get(i).getName());
            for(j = 0; j < maxName - list.get(i).getName().length(); j++){
                System.out.print(" ");
            }
            System.out.print(" | ");

            System.out.print(list.get(i).getBrand());
            for(j = 0; j < maxBrand - list.get(i).getBrand().length(); j++){
                System.out.print(" ");
            }
            System.out.print(" | ");

            System.out.print(list.get(i).getPrice());
            for(j = 0; j < maxPrice - list.get(i).getPrice().length(); j++){
                System.out.print(" ");
            }
            System.out.print(" | ");

            System.out.print(list.get(i).getSize());
            for(j = 0; j < maxSize - list.get(i).getSize().length(); j++){
                System.out.print(" ");
            }
            System.out.print(" | ");

            System.out.print(list.get(i).getMaterial());
            for(j = 0; j < maxMaterial - list.get(i).getMaterial().length(); j++){
                System.out.print(" ");
            }
            System.out.print(" | ");

            System.out.print(list.get(i).getGender());
            for(j = 0; j < 5; j++){
                System.out.print(" ");
            }
            System.out.print(" | ");
            
            System.out.print(list.get(i).getColor());
            for(j = 0; j < maxColor - list.get(i).getColor().length(); j++){
                System.out.print(" ");
            }
            System.out.print(" | ");

            System.out.print(list.get(i).getSleeve_type());
            for(j = 0; j < maxSleeveType - list.get(i).getSleeve_type().length(); j++){
                System.out.print(" ");
            }
            System.out.print(" |");
            System.out.println("");
        }

        // BUAT GARIS DI BAWAH TABEL
        System.out.print("+");
        if(maxIdProduct < 2){
            for(i =  0; i < 4; i++){
                System.out.print("-");
            }
        }else{
            for(i = 0; i < maxIdProduct + 2; i++){
                System.out.print("-");
            }
        }
        System.out.print("+");
        if(maxName < 4){
            for(i =  0; i < 6; i++){
                System.out.print("-");
            }
        }else{
            for(i = 0; i < maxName + 2; i++){
                System.out.print("-");
            }
        }
        System.out.print("+");
        if(maxBrand < 5){
            for(i =  0; i < 7; i++){
                System.out.print("-");
            }
        }else{
            for(i = 0; i < maxBrand + 2; i++){
                System.out.print("-");
            }
        }
        System.out.print("+");
        if(maxPrice < 5){
            for(i =  0; i < 7; i++){
                System.out.print("-");
            }
        }else{
            for(i = 0; i < maxPrice + 2; i++){
                System.out.print("-");
            }
        }        
        System.out.print("+");
        if(maxSize < 4){
            for(i =  0; i < 6; i++){
                System.out.print("-");
            }
        }else{
            for(i = 0; i < maxSize + 2; i++){
                System.out.print("-");
            }
        }
        System.out.print("+");
        if(maxMaterial < 8){
            for(i =  0; i < 10; i++){
                System.out.print("-");
            }
        }else{
            for(i = 0; i < maxMaterial + 2; i++){
                System.out.print("-");
            }
        }
        System.out.print("+");
        for(i = 0; i < 8; i++){
            System.out.print("-");
        }
        System.out.print("+");
        if(maxColor < 5){
            for(i =  0; i < 7; i++){
                System.out.print("-");
            }
        }else{
            for(i = 0; i < maxColor + 2; i++){
                System.out.print("-");
            }
        }
        System.out.print("+");
        if(maxSleeveType < 11){
            for(i =  0; i < 13; i++){
                System.out.print("-");
            }
        }else{
            for(i = 0; i < maxSleeveType + 2; i++){
                System.out.print("-");
            }
        }
        System.out.println("+");
    }
}