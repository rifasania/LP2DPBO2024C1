/* Saya Rifa Sania NIM 2206697 mengerjakan Latihan Praktikum 2 dalam mata kuliah Desain Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin... */

// include library
#include "Clothing.cpp"

class Shirt : public Clothing{
    // atribut
    private:
        string color;
        string sleeveType;

    public:
        Shirt(){
            // konstruktor kosong
        }

        // set dan get

        void setColor(string color){
            this->color = color;
        }

        string getColor(){
            return this->color;
        }

        void setSleeveType(string sleeveType){
            this->sleeveType = sleeveType;
        }

        string getSleeveType(){
            return this->sleeveType;
        }
};