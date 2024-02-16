/* Saya Rifa Sania NIM 2206697 mengerjakan Latihan Praktikum 2 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin... */

class Shirt extends Clothing{
    private String color;
    private String sleeve_type;

    Shirt(){        
    }

    public String getColor(){
        return this.color;
    }

    public void setColor(String color){
        this.color = color;
    }

    public String getSleeve_type(){
        return this.sleeve_type;
    }

    public void setSleeve_type(String sleeve_type){
        this.sleeve_type = sleeve_type;
    }
}