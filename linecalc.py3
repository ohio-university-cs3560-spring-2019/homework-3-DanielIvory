handle1 = open("filelist.txt", "r")
files = handle1.read().split()
lines = words = characters = 0
for item in files:
	handle2 = open(item,"r")
	string = handle2.read()
	lines += len(string.splitlines())
	words += len(string.split())
	characters += len(string)
	handle2.close()
print("lines=", lines, "Words=", words, "Characters=", characters)
