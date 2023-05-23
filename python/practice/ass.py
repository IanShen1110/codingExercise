import os

sauce = "test.txt"
destination = "C:\\Users\\IanShen\\projects\\coding\\helloworld\\test.txt"

try:
    with open(sauce, 'x') as file:
        file.write( "LMAO\nThis text has been\nOVERWRITTEN\nGOod MOrn")
except FileExistsError:
    os.remove(sauce)

try:
    if os.path.exists(destination):
        print("There is already a file there!")
        os.remove(destination)
    else:
        os.replace(sauce,destination)
        print(sauce + " was moved.")
except FileNotFoundError:
    print(sauce + " was not found")