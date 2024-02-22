<?php

class Product{
    private $idProduct;
    private $name;
    private $brand;
    private $price;

    function __construct(){
    }

    function setIdProduct($idProduct){
        $this->idProduct = $idProduct;
    }

    function getIdProduct(){
        return $this->idProduct;
    }

    function setName($name){
        $this->name = $name;
    }

    function getName(){
        return $this->name;
    }

    function setBrand($brand){
        $this->brand = $brand;
    }

    function getBrand(){
        return $this->brand;
    }

    function setPrice($price){
        $this->price = $price;
    }

    function getPrice(){
        return $this->price;
    }

    function __destruct(){
    }
}

?>