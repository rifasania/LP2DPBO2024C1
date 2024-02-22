from Product import Product
from Clothing import Clothing

class Shirt(Clothing):
    __color = ""
    __sleeveType = ""

    def __init__(self):
        self.__color = ""
        self.__sleeveType = ""

    def setColor(self, color):
        self.__color = color

    def getColor(self):
        return self.__color
    
    def setSleeveType(self, sleeveType):
        self.__sleeveType = sleeveType

    def getSleeveType(self):
        return self.__sleeveType