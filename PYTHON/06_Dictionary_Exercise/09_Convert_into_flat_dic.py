# Python – Convert key-values list to flat dictionary

d= { "day": [1, 2, 3], "name": ['Mon', 'Tues', 'Wed' ] }
print("Original dictionary: ",d)


res= dict(zip(d["day"], d["name"]))

print("FLATTENED DICTIONARY: ",res)
