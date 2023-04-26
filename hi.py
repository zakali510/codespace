def main():
   try:
    print(int(input("What's x:")))
    print(f"x is {x}")

   except ValueError:
    print("Please input an integer")
    main()

