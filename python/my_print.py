def getString(s, op):
    if op == "up":
        return s.upper()
    elif op == "low":
        return s.lower()
    elif op == "rev":
        return s[::-1]
    else:
        return s

## GETSTR ACTS AS A FUNCTION POINTER TO THE GET STRING METHOD

def func(getStr, s, op):
    str = getStr(s, op)
    return str