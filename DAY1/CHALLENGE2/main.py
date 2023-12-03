a = open(r"C:\Users\ogvru\Documents\GitHub\adventofcode2023\DAY1\CHALLENGE2\input.txt", "r")
"""
    one
    two
    three
    four
    five
    six
    seven
    eight
    nine
    1
    2
    3
    4
    5
    6
    7
    8
    9
"""




sum = []
for line in a: 
    first = ""
    last = ""
    for i in range(len(line)): 
        char = line[i]
        try:
            first = str(int(char))
            break
        except: 
            match char: 
                case "o":
                    try: 
                        if line[i:i+3] == "one": 
                            first = "1"
                            break
                    except: 
                        pass
                case "t":
                    try: 
                        if line[i:i+3] == "two": 
                            first = "2"
                            break
                        
                        if line[i:i+5] == "three": 
                            first = "3"
                            break
                    except: 
                        pass
                case "f":
                    try:
                        if line[i:i+4] == "four": 
                            first = "4"
                            break
                        
                        if line[i:i+4] == "five": 
                            first = "5"
                            break
                    except: 
                        pass
                case "s":
                    try: 
                        if line[i:i+3] == "six": 
                            first = "6"
                            break
                        
                        if line[i:i+5] == "seven": 
                            first = "7"
                            break
                    except: 
                        pass
                case "e":
                    try: 
                        if line[i:i+5] == "eight": 
                            first = "8"
                            break

                    except: 
                        pass
                
                case "n":
                    try: 
                        if line[i:i+4] == "nine": 
                            first = "9"
                            break

                    except: 
                        pass

                case "t":
                    try: 
                        if line[i:i+3] == "ten": 
                            first = "10"
                            break

                    except: 
                        pass
    for i in range(len(line)): 
        char = line[i]
        try:
            last = str(int(char))
        except: 
            match char: 
                case "o":
                    try: 
                        if line[i:i+3] == "one": 
                            last = "1"
                            
                    except: 
                        pass
                case "t":
                    try: 
                        if line[i:i+3] == "two": 
                            last = "2"
                            
                        
                        if line[i:i+5] == "three": 
                            last = "3"
                            
                    except: 
                        pass
                case "f":
                    try:
                        if line[i:i+4] == "four": 
                            last = "4"
                        
                        if line[i:i+4] == "five": 
                            last = "5"
                            
                    except: 
                        pass
                case "s":
                    try: 
                        if line[i:i+3] == "six": 
                            last = "6"
                            
                        
                        if line[i:i+5] == "seven": 
                            last = "7"
                            
                    except: 
                        pass
                case "e":
                    try: 
                        if line[i:i+5] == "eight": 
                            last = "8"
                            

                    except: 
                        pass
                
                case "n":
                    try: 
                        if line[i:i+4] == "nine": 
                            last = "9"
                            

                    except: 
                        pass

                case "t":
                    try: 
                        if line[i:i+3] == "ten": 
                            last = "10"

                    except: 
                        pass
    sum.append(first + last)     
sum1 = 0
for i in sum:
    sum1 += int(i)
print(sum1)                           

                



a.close()