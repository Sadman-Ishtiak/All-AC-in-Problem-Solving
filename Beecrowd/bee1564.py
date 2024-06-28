while True:
    try:
        n = int(input())
        print("vai ter duas!" if bool(n) else "vai ter copa!")
    except EOFError:
        break