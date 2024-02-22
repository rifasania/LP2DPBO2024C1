class Product:

    __idProduct = ""
    __name = ""
    __brand = ""
    __price = ""

    def __init__(self):
        self.__idProduct = ""
        self.__name = ""
        self.__brand = ""
        self.__price = ""

    def setIdProduct(self, idProduct):
        self.__idProduct = idProduct

    def getIdProduct(self):
        return self.__idProduct
    
    def setName(self, name):
        self.__name = name

    def getName(self):
        return self.__name
    
    def setBrand(self, brand):
        self.__brand = brand

    def getBrand(self):
        return self.__brand
    
    def setPrice(self, price):
        self.__price = price

    def getPrice(self):
        return self.__price