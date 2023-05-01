def main():
    x = get_int()


def get_int():
    while True:
        try:
            x = int(input("What is x? "))
        except ValueError:
            print("Please input an integer")
        else:
            print(f"x is {x}")
            break
    return x
