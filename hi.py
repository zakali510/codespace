while True:
    try:
        x = int(input("What is x? "))
    except ValueError:
        print("Please input an integer")
    else:
        print(f"x is {x}")
        break
