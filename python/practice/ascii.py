print("ASCII Table:")
print("{:<6s} {:<5s} {:<5s} {:<8s}".format("Char", "Dec", "Hex", "Binary"))
print("---------------------------")

for i in range(48, 58):
    print("{:<6s} {:<5d} {:<5s} {:<8s}".format(chr(i), i, hex(i), bin(i)[2:]))


print("{:<6s} {:<5s} {:<5s} {:<8s}".format("Char", "Dec", "Hex", "Binary"))
print("---------------------------")
for i in range(65, 91):
    print("{:<6s} {:<5d} {:<5s} {:<8s}".format(chr(i), i, hex(i), bin(i)[2:]))


print("{:<6s} {:<5s} {:<5s} {:<8s}".format("Char", "Dec", "Hex", "Binary"))
print("---------------------------")
for i in range(97, 123):
    print("{:<6s} {:<5d} {:<5s} {:<8s}".format(chr(i), i, hex(i), bin(i)[2:]))