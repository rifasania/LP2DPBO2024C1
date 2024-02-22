<?php

class Shirt extends Clothing{
    private $color;
    private $sleeveType;

    function __construct(){
    }

    function setColor($color){
        $this->color = $color;
    }

    function getColor(){
        return $this->color;
    }

    function setSleeveType($sleeveType){
        $this->sleeveType = $sleeveType;
    }

    function getSleeveType(){
        return $this->sleeveType;
    }

    function __destruct(){
    }
}

?>