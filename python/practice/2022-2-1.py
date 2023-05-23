class Car():
    color = None

def changer_color(car,color):
    
    car.color = color
    
car_1 = Car()
car_2 = Car()
car_3 = Car()
print(car_1.color)
print(car_2.color)
print(car_3.color)

changer_color(car_1,"Red")
changer_color(car_2,"amongus")
changer_color(car_3,"Yellow")


print(car_1.color)
print(car_2.color)
print(car_3.color)