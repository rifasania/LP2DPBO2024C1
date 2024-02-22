/* Saya Rifa Sania NIM 2206697 mengerjakan Latihan Praktikum 2 dalam mata kuliah Desain Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin... */

// include library
#include <iostream>
#include <string>

using namespace std;

class Product{
    // atribut
    private:
        string idProduct;
        string name;
        string brand;
        string price;

    public:
        Product(){
            // konstruktor kosong
        }

        // set and get

        void setIdProduct(string idProduct){
            this->idProduct = idProduct;
        }
        
        string getIdProduct(){
            return this->idProduct;
        }

        void setName(string name){
            this->name = name;
        }

        string getName(){
            return this->name;
        }

        void setBrand(string brand){
            this->brand = brand;
        }

        string getBrand(){
            return this->brand;
        }

        void setPrice(string price){
            this->price = price;
        }

        string getPrice(){
            return this->price;
        }
};