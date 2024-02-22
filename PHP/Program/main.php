<?php

include "Product.php";
include "Clothing.php";
include "Shirt.php";

$kaos1 = new Shirt();
$kaos1->setIdProduct("1");
$kaos1->setName("Kaos_Polos");
$kaos1->setBrand("Nike");
$kaos1->setPrice("80000");
$kaos1->setSize("M");
$kaos1->setMaterial("Katun");
$kaos1->setGender("L");
$kaos1->setColor("Putih");
$kaos1->setSleeveType("Short_Sleeve");

$kaos2 = new Shirt();
$kaos2->setIdProduct("2");
$kaos2->setName("Kaos_Kerah");
$kaos2->setBrand("Adidas");
$kaos2->setPrice("120000");
$kaos2->setSize("L");
$kaos2->setMaterial("Spandex");
$kaos2->setGender("P");
$kaos2->setColor("Hitam");
$kaos2->setSleeveType("Long_Sleeve");

$kaos3 = new Shirt();
$kaos3->setIdProduct("3");
$kaos3->setName("Kaos_Grafis");
$kaos3->setBrand("Puma");
$kaos3->setPrice("150000");
$kaos3->setSize("XL");
$kaos3->setMaterial("Polyester");
$kaos3->setGender("L");
$kaos3->setColor("Hitam");
$kaos3->setSleeveType("Short_Sleeve");

$kaos4 = new Shirt();
$kaos4->setIdProduct("4");
$kaos4->setName("Kaos_Pola");
$kaos4->setBrand("Levis");
$kaos4->setPrice("100000");
$kaos4->setSize("S");
$kaos4->setMaterial("Spandex");
$kaos4->setGender("P");
$kaos4->setColor("Merah");
$kaos4->setSleeveType("Long_Sleeve");

$kaos5 = new Shirt();
$kaos5->setIdProduct("5");
$kaos5->setName("Kaos_Kotak");
$kaos5->setBrand("Converse");
$kaos5->setPrice("130000");
$kaos5->setSize("M");
$kaos5->setMaterial("Katun");
$kaos5->setGender("L");
$kaos5->setColor("Hijau");
$kaos5->setSleeveType("Long_Sleeve");

echo "DAFTAR KAUS YANG TERSEDIA :";
echo "<br/><br/>";

echo "| Id | Name | Brand | Price | Size | Material | Gender | Color | Sleeve Type |" . "<br/>";
echo "| " . $kaos1->getIdProduct() . " | " . $kaos1->getName() . " | " . $kaos1->getBrand() . " | " . $kaos1->getPrice() . " | " . $kaos1->getSize() . " | " . $kaos1->getMaterial() . " | " . $kaos1->getGender() . " | " . $kaos1->getColor() . " | " . $kaos1->getSleeveType() . " |" . "<br/>";
echo "| " . $kaos2->getIdProduct() . " | " . $kaos2->getName() . " | " . $kaos2->getBrand() . " | " . $kaos2->getPrice() . " | " . $kaos2->getSize() . " | " . $kaos2->getMaterial() . " | " . $kaos2->getGender() . " | " . $kaos2->getColor() . " | " . $kaos2->getSleeveType() . " |" . "<br/>";
echo "| " . $kaos3->getIdProduct() . " | " . $kaos3->getName() . " | " . $kaos3->getBrand() . " | " . $kaos3->getPrice() . " | " . $kaos3->getSize() . " | " . $kaos3->getMaterial() . " | " . $kaos3->getGender() . " | " . $kaos3->getColor() . " | " . $kaos3->getSleeveType() . " |" . "<br/>";
echo "| " . $kaos4->getIdProduct() . " | " . $kaos4->getName() . " | " . $kaos4->getBrand() . " | " . $kaos4->getPrice() . " | " . $kaos4->getSize() . " | " . $kaos4->getMaterial() . " | " . $kaos4->getGender() . " | " . $kaos4->getColor() . " | " . $kaos4->getSleeveType() . " |" . "<br/>";
echo "| " . $kaos5->getIdProduct() . " | " . $kaos5->getName() . " | " . $kaos5->getBrand() . " | " . $kaos5->getPrice() . " | " . $kaos5->getSize() . " | " . $kaos5->getMaterial() . " | " . $kaos5->getGender() . " | " . $kaos5->getColor() . " | " . $kaos5->getSleeveType() . " |" . "<br/>";

?>