def even_numbers():
    def mult3(n):
        if n == 0:
            return 2
        else:
            return mult3(n-1) + 2

    for i in range(0,10):
        print(mult3(i))

even_numbers()