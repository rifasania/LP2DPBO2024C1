from Product import Product

class Clothing(Product):
    __size = ""
    __material = ""
    __gender = ''

    def __init__(self):
        self.__size = ""
        self.__material = ""
        self.__gender = ""

    def setSize(self, size):
        self.__size = size

    def getSize(self):
        return self.__size
    
    def setMaterial(self, material):
        self.__material = material

    def getMaterial(self):
        return self.__material
    
    def setGender(self, gender):
        self.__gender = gender

    def getGender(self):
        return self.__gender