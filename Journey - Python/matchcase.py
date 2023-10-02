a = int(input("Enter The number :"))

match a:
    case 1:
        print("The case is 1")
    case 2:
        print("The case is 2")
    case 3:
        print("The case is 3")
    case 4:
        print("The case is 4")
    case _:
        print("No match found")