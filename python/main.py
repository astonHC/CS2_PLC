from my_print import func, getString
from add import add
from list_comp import list1 
from list_comp import list2
from pieces import Piece


def main():
    add()
    s = "Harry"

    ## ACCESS FUNC TO USE THE FPTR OF GETSTRING

    print(func(getString, "good morning", "up"))

    ## LAMBDA EXP.

    print("the elements of the list are: ", list2)

    ## SONG

    song1 = Piece("Bohemian Rhapsody", "Queen", 354.0) 
    print("song1 = %s" % song1)

    ## SPECIFICALLY CALL THE DUNDER METHOD
    print(repr(song1))

if __name__ == "__main__":
    main()
