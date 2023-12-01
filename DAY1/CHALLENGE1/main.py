a = open(r"C:\Users\ogvru\Documents\GitHub\adventofcode2023\DAY1\input.txt", "r")
answers = []
for line in a:
    first = ""
    last = "" 
    for char in line: 
        try:
            first = str(int(char))
            break
        except: 
            pass

    for char in line: 
        try: 
            last = str(int(char))
        except: 
            pass
    answers.append(int(first + last))

sum = 0
for i in answers: 
    sum += i
print(sum)
a.close()