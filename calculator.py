
def main():
    try:
        x = int(input("x: "))
    except ValueError:
        main()
    print("x squared is", square(x))

def square(n):
    return n * n

if __name__ == "__main__":
    main()





