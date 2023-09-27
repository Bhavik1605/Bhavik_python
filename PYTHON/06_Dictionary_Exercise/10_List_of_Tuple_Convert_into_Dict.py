# Python | Convert a list of Tuples into Dictionary

def Convert(List_Tuple):
    dic = {}
    for i in List_Tuple:
        key, value = i
        dic[key] = value
    return dic

List_Tuple = [("a", 1), ("b", 2), ("c", 3)]

print("Converted into Dictionary :",Convert(List_Tuple))
