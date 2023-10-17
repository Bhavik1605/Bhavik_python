# Write a Python program to test whether a passed letter is a vowel or not.
l = input("Input a Letter of The Alphabet : ")

if l in ('a', 'e', 'i', 'o', 'u','A', 'E', 'I', 'O', 'U'):
	print(l,"is a vowel.")
else:
	print(l,"is a consonant.")
