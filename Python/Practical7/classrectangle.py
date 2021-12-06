class rectangle:
    width = 1.0
    height = 1.0

    def __init__(self, value, value2):
        self.width = value
        self.height = value2

    def get_area(self):
        print("Area is", self.width * self.height)

    def get_peri(self):
        print("Perimeter is ", (self.height*2)+(self.width*2))

rect1 = rectangle(4.0, 40.0)
rect2 = rectangle(3.5, 35.9)

rect1.get_area()
rect2.get_area()

rect1.get_peri()
rect2.get_peri()