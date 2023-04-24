def main():
    try:
  x = int(input("What's x: "))
  if is_even(x):
    print("Even")
  else:
    print("Odd")
except ValueError:
  print("Please input a valid input")


def is_even(n):
  if n % 2 == 0:
    return True
  else:
    return False
main()
