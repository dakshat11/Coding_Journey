class Employee:
    def __init__(self, name, salary):
        self.name = name
        self.salary = salary

    def gerSalary(self):
        print(self.salary)

rohan = Employee("Rohan", "3455")
print(rohan.salary)
print(rohan.name)
rohan.gerSalary()


harry = Employee("Harry", "3455000")
print(harry.salary)
print(harry.name)
harry.gerSalary() 