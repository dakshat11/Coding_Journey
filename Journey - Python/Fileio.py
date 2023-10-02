s="Harry is a good boy"
r="This is an addition"
# writing to a file
# with open("test.txt", "w") as f:
#     f.write(s)

# fp = open("test.txt", "w")
# fp.write(s)
# fp.close()

# Reading a file

# with open("test.txt", "r") as f:
#     s = f.read()
#     print(s)

# fp = open("test.txt", "r")
# s = fp.read()
# print(s)
# fp.close()
#

# Appending to a file
with open("test.txt", "a") as f:
    f.write(r)
