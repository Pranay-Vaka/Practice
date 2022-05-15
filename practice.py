
def huffman_coding_question(string: str) -> str:
    
    final_string = ""

    letter_dict = {
            "A": "0",
            "B": "11",
            "C": "100",
            "D": "101"
    }

    for i in string:
        final_string += letter_dict[i]

    return final_string



def rle():
    og_text = input("What is the text that you want to be compressed?: ")

    compressed_text = ""
    prev_letter = og_text[0]
    num = 0

    for i in range(len(og_text)):
        if prev_letter == og_text[i]:
            num += 1
    
        else:
            compressed_text += prev_letter + str(num)
            prev_letter = og_text[i]
            num = 1
        
    compressed_text += prev_letter + str(num)

    print(compressed_text)

def prime():
    
    num = int(input("What number do you want to check?: "))
    again = True

    while again:
        
        if num <= 1:
            print("Not greater than 1")
        
        else:
            prime = True
            for i in range(2, (num // 2) + 1):
                if (num % i) == 0:
                    prime = False

            if prime:
                print("Is prime")

            else:
                print("Is not prime")

        choice = input("Would you like to try again (y/n)")
        if choice.lower() == "n":
            again = False

        else:
            num = int(input("What number do you want to check?: "))

def check_letters():
    first_word = input("What is the first word?: ")
    second_word = input("What is the second word?: ")

    first_dict = {}
    second_dict = {}

    for i in first_word:
        if i not in first_dict.keys():
            first_dict[i] = 1
        else:
            first_dict[i] += 1

    for i in second_word:
        if i not in second_dict.keys():
            second_dict[i] = 1
        else:
            second_dict[i] += 1
    
    valid = True
    for letter in first_dict:
        if (letter not in second_dict):
            valid = False

        elif (letter in second_dict):
            if (first_dict[letter] > second_dict[letter]): 
                valid = False
 
    if valid:
        print("First word in second word")

    else:
        print("First word not in second word")

def num_digits():

    total_nums = int(input("What is the total numbers that you want?: "))
    nums = []
    num_dict = {}
    for i in range(total_nums):
        nums.append(input("What is the number that you want to add?: "))
    
    for i in nums:
        if i not in num_dict:
            num_dict[i] = 1
        else:
            num_dict[i] += 1
    
    largest = 0
    for i in num_dict:
        if num_dict[i] > largest:
            largest = num_dict[i]
    
    occurred = 0

    for i in num_dict:
        if largest == num_dict[i]:
            occurred += 1

    if occurred > 1:
        print("Data was multimodal")

    else:
        print(largest)


