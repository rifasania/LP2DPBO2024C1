/* Saya Rifa Sania NIM 2206697 mengerjakan Latihan Praktikum 2 dalam mata kuliah Desain Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin... */

// include library
#include "Product.cpp"

class Clothing : public Product{
    // atribut
    private:
        string size;
        string material;
        char gender;

    public:
        Clothing(){
            // konstruktor kosong
        }

        // set dan get

        void setSize(string size){
            this->size = size;
        }

        string getSize(){
            return this->size;
        }

        void setMaterial(string material){
            this->material = material;
        }

        string getMaterial(){
            return this->material;
        }

        void setGender(char gender){
            this->gender = gender;
        }

        char getGender(){
            return this->gender;
        }
};