# a= {}
# b = set()
# print(a, type(a))
# print(b  type(b))

dict1 = {"good": "something pleasant", "fetch": "to bring", "1": "The number 1"}

marks ={"harshit":34,"harry": 99, "Shivani": 8, "Smriti":45,"Naina": 87}

print(dict1["good"])
print(dict1["fetch"])
print(dict1["1"])


print(marks["harry"])
print(marks["Naina"])

marks["Priyanka"] = 34
print(marks)

print(marks.get("Priyanka Chopra"))
print(marks.get("Priyanka"))

print(marks.keys())
print(marks.values())
print(marks.items())