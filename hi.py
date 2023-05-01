def main():
    x = get_int()
    print(f"x is {x}")




def get_int():
    while True:
        try:
            x = int(input("What is x? "))
        except ValueError:
            print("Please input an integer")
        else:
            return x
main()
