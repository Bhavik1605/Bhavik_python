def Sum(numbers):
    total = 0
    for item in numbers:
        if type(item) in (int, float):
            total += item
    return total

l = [1, 2, 3, 4, 5.5, "not_a_number"]

print("Total Sum of All List Item is :",Sum(l))
