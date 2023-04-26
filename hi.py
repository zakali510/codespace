def main():
   try:
    x = int(input("What is x: "))
    print(f"x is {x}")

   except ValueError:
    print("Please input an integer")
    main()



main()

