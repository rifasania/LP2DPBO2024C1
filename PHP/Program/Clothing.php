<?php

class Clothing extends Product{
    private $size;
    private $material;
    private $gender;

    function __construct(){
    }

    function setSize($size){
        $this->size = $size;
    }

    function getSize(){
        return $this->size;
    }

    function setMaterial($material){
        $this->material = $material;
    }

    function getMaterial(){
        return $this->material;
    }

    function setGender($gender){
        $this->gender = $gender;
    }

    function getGender(){
        return $this->gender;
    }

    function __destruct(){
    }
}

?>