def main():
  try:
    x = int(input("What's x: "))
    if is_even(x):
      print("Even")
    else:
      print("Odd")
  except ValueError:
    print("Invalid input. Please enter an integer.")
    main()

def is_even(n):
  if n % 2 == 0:
    return True
  else:
    return False

main()
#Using a try-except block to catch the ValueError raised when int() is called on a non-integer input.
#Printing an error message and calling main() recursively if an invalid input is provided.
#Removing the if x != int() line, which is unnecessary and causes a NameError because x is not defined outside the main() function.

