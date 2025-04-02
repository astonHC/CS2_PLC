from my_print import func, getString
from add import add


def main():
    add()
    s = "Harry"

    ## ACCESS FUNC TO USE THE FPTR OF GETSTRING

    print(func(getString, "good morning", "up"))

if __name__ == "__main__":
    main()
