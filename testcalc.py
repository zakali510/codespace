from calculator import square

def main():
    test_square()

def test_square():
    for number in range(10):
        try:
            assert square(number) == number**2
        except AssertionError:
            print(f"{number} squared is not {number**2}")

if __name__ == "__main__":
    main()








