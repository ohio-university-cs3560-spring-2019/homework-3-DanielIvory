handle = open("filelist.txt", "r")
string = handle.read()
lines = len(string.splitlines())
words = len(string.split())
characters = len(string)
print("lines=", lines, "Words=", words, "Characters=", characters)